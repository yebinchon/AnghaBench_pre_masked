
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rvt_dev_info {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,int ) ;
 scalar_t__ FUNC_2 (struct rvt_dev_info*) ;
 scalar_t__ FUNC_3 (struct rvt_dev_info*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_1, u8 VAR_2, u16 VAR_3,
     u16 *VAR_4)
{






 struct rvt_dev_info *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6 < 0)
  return -VAR_0;

 if (VAR_3 >= FUNC_2(VAR_5))
  return -VAR_0;

 *VAR_4 = FUNC_3(VAR_5, VAR_6, VAR_3);
 return 0;
}
