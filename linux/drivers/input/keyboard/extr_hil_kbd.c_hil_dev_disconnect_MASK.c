
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct hil_dev {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hil_dev*) ;
 int FUNC_3 (struct serio*) ;
 struct hil_dev* FUNC_4 (struct serio*) ;
 int FUNC_5 (struct serio*,int *) ;

__attribute__((used)) static void FUNC_6(struct serio *VAR_0)
{
 struct hil_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_1 == ((void*)0));

 FUNC_3(VAR_0);
 FUNC_1(VAR_1->dev);
 FUNC_5(VAR_0, ((void*)0));
 FUNC_2(VAR_1);
}
