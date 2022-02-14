
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9055_onkey {int input; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct da9055_onkey*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct da9055_onkey *VAR_4 = VAR_3;

 FUNC_1(VAR_4->input, VAR_1, 1);
 FUNC_2(VAR_4->input);

 FUNC_0(VAR_4);

 return VAR_0;
}
