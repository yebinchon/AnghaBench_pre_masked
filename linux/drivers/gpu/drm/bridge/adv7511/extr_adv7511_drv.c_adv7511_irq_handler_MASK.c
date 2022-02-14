
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv7511*,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct adv7511 *VAR_4 = VAR_3;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, 1);
 return VAR_5 < 0 ? VAR_1 : VAR_0;
}
