
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int distance_fuzz; int distance_max; } ;
struct wacom_wac {TYPE_1__ features; struct input_dev* pen_input; } ;
struct input_dev {int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wacom_wac *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->pen_input;

 FUNC_2(VAR_7, VAR_4, VAR_5);

 FUNC_0(VAR_3, VAR_7->keybit);
 FUNC_0(VAR_1, VAR_7->keybit);
 FUNC_0(VAR_2, VAR_7->keybit);

 FUNC_1(VAR_7, VAR_0,
        0, VAR_6->features.distance_max, VAR_6->features.distance_fuzz, 0);
}
