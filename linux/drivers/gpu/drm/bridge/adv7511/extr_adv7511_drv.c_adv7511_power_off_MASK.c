
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7511 {scalar_t__ type; int powered; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adv7511*) ;
 int FUNC_1 (struct adv7511*) ;

__attribute__((used)) static void FUNC_2(struct adv7511 *VAR_1)
{
 FUNC_0(VAR_1);
 if (VAR_1->type == VAR_0)
  FUNC_1(VAR_1);
 VAR_1->powered = 0;
}
