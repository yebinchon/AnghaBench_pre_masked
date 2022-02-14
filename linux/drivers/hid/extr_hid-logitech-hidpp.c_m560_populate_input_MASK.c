
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int relbit; int evbit; int keybit; } ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hidpp_device *VAR_13,
    struct input_dev *VAR_14)
{
 FUNC_0(VAR_5, VAR_14->evbit);
 FUNC_0(VAR_3, VAR_14->keybit);
 FUNC_0(VAR_4, VAR_14->keybit);
 FUNC_0(VAR_2, VAR_14->keybit);
 FUNC_0(VAR_0, VAR_14->keybit);
 FUNC_0(VAR_1, VAR_14->keybit);

 FUNC_0(VAR_6, VAR_14->evbit);
 FUNC_0(VAR_11, VAR_14->relbit);
 FUNC_0(VAR_12, VAR_14->relbit);
 FUNC_0(VAR_9, VAR_14->relbit);
 FUNC_0(VAR_7, VAR_14->relbit);
 FUNC_0(VAR_10, VAR_14->relbit);
 FUNC_0(VAR_8, VAR_14->relbit);
}
