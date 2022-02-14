
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hidpp_device {int quirks; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hidpp_device*,struct input_dev*) ;
 int FUNC_1 (struct hidpp_device*,struct input_dev*) ;
 int FUNC_2 (struct hidpp_device*,struct input_dev*) ;
 int FUNC_3 (struct hidpp_device*,struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct hidpp_device *VAR_4,
     struct input_dev *VAR_5)
{
 VAR_4->input = VAR_5;

 if (VAR_4->quirks & VAR_1)
  FUNC_3(VAR_4, VAR_5);
 else if (VAR_4->quirks & VAR_0)
  FUNC_2(VAR_4, VAR_5);

 if (VAR_4->quirks & VAR_3)
  FUNC_1(VAR_4, VAR_5);

 if (VAR_4->quirks & VAR_2)
  FUNC_0(VAR_4, VAR_5);
}
