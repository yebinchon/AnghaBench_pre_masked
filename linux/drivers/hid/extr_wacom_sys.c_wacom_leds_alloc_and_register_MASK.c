
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pad_input; } ;
struct wacom {TYPE_2__ wacom_wac; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct wacom*,int,int,int) ;
 int FUNC_1 (struct wacom*,int) ;

__attribute__((used)) static int FUNC_2(struct wacom *VAR_1, int VAR_2,
      int VAR_3, bool VAR_4)
{
 struct device *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_1->wacom_wac.pad_input)
  return -VAR_0;

 VAR_5 = &VAR_1->wacom_wac.pad_input->dev;

 VAR_7 = FUNC_1(VAR_1, VAR_2);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = FUNC_0(VAR_5, VAR_1, VAR_6,
        VAR_3,
        VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
