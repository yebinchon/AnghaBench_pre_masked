
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_lsm6dsx_sensor {int dummy; } ;
typedef int data ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_lsm6dsx_sensor*,int,int*,int) ;
 int FUNC_2 (struct st_lsm6dsx_sensor*,int,int*,int) ;

__attribute__((used)) static int
FUNC_3(struct st_lsm6dsx_sensor *VAR_0,
    u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = ((VAR_5 & ~VAR_2) | (VAR_3 << FUNC_0(VAR_2) & VAR_2));

 return FUNC_2(VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
}
