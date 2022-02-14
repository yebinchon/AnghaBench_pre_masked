
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int relbit; int evbit; } ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hidpp_device *VAR_5,
      struct input_dev *VAR_6)
{
 FUNC_0(VAR_0, VAR_6->evbit);
 FUNC_0(VAR_3, VAR_6->relbit);
 FUNC_0(VAR_4, VAR_6->relbit);
 FUNC_0(VAR_1, VAR_6->relbit);
 FUNC_0(VAR_2, VAR_6->relbit);
}
