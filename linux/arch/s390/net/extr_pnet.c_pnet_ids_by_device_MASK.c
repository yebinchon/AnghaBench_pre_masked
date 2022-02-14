
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zpci_dev {int * util_str; } ;
struct device {int dummy; } ;
struct ccwgroup_device {int * cdev; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ,int) ;
 struct ccwgroup_device* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 struct zpci_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_3, u8 *VAR_4)
{
 FUNC_6(VAR_4, 0, VAR_2);
 if (FUNC_2(VAR_3)) {
  struct ccwgroup_device *VAR_5 = FUNC_7(VAR_3);
  u8 *VAR_6;

  VAR_6 = FUNC_1(VAR_5->cdev[0], 0);
  if (!VAR_6)
   return -VAR_0;
  FUNC_5(VAR_4, VAR_6, VAR_2);
  FUNC_0(VAR_4, VAR_2);
  FUNC_4(VAR_6);
  return 0;
 }
 if (FUNC_3(VAR_3)) {
  struct zpci_dev *VAR_7 = FUNC_9(FUNC_8(VAR_3));

  FUNC_5(VAR_4, VAR_7->util_str, sizeof(VAR_7->util_str));
  FUNC_0(VAR_4, sizeof(VAR_7->util_str));
  return 0;
 }
 return -VAR_1;
}
