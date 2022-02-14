
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_usages {int* contactid; } ;
struct mt_device {int dummy; } ;
struct mt_application {int quirks; int num_received; } ;
struct input_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt_application*,struct mt_usages*) ;
 int FUNC_1 (struct input_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct mt_device *VAR_4, struct mt_application *VAR_5,
      struct mt_usages *VAR_6,
      struct input_dev *VAR_7)
{
 __s32 VAR_8 = VAR_5->quirks;

 if (VAR_8 & VAR_1)
  return *VAR_6->contactid;

 if (VAR_8 & VAR_0)
  return FUNC_0(VAR_5, VAR_6);

 if (VAR_8 & VAR_3)
  return VAR_5->num_received;

 if (VAR_8 & VAR_2)
  return *VAR_6->contactid - 1;

 return FUNC_1(VAR_7, *VAR_6->contactid);
}
