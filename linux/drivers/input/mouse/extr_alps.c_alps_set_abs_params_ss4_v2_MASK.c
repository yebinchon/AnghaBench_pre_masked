
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; } ;
struct alps_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct alps_data*,struct input_dev*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct alps_data *VAR_6,
           struct input_dev *VAR_7)
{
 FUNC_0(VAR_6, VAR_7);
 FUNC_2(VAR_7, VAR_0, 0, 127, 0, 0);
 FUNC_3(VAR_1, VAR_7->keybit);

 FUNC_1(VAR_7, VAR_5,
       VAR_3 | VAR_2 |
    VAR_4);
}
