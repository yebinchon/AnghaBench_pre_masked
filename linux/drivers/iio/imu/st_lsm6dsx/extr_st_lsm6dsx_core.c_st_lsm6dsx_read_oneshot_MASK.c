
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_lsm6dsx_sensor {int odr; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {int dummy; } ;
typedef int s16 ;
typedef int data ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct st_lsm6dsx_hw*,int ,int *,int) ;
 int FUNC_2 (struct st_lsm6dsx_sensor*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct st_lsm6dsx_sensor *VAR_1,
       u8 VAR_2, int *VAR_3)
{
 struct st_lsm6dsx_hw *VAR_4 = VAR_1->hw;
 int VAR_5, VAR_6;
 __le16 VAR_7;

 VAR_5 = FUNC_2(VAR_1, 1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = 1000000 / VAR_1->odr;
 FUNC_3(VAR_6, 2 * VAR_6);

 VAR_5 = FUNC_1(VAR_4, VAR_2, &VAR_7, sizeof(VAR_7));
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_1, 0);

 *VAR_3 = (s16)FUNC_0(VAR_7);

 return VAR_0;
}
