
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {scalar_t__ hdev; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct wacom* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0)
{
 struct wacom *VAR_1 = FUNC_1(VAR_0);





 if (VAR_1->hdev)
  FUNC_0(VAR_1->hdev);
}
