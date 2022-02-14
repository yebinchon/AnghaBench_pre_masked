
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocores_i2c {scalar_t__ state; int flags; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int,struct ocores_i2c*) ;
 int FUNC_1 (struct ocores_i2c*) ;

__attribute__((used)) static void FUNC_2(struct ocores_i2c *VAR_4)
{
 while (1) {
  irqreturn_t VAR_5;
  int VAR_6;

  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6) {
   VAR_4->state = VAR_3;
   break;
  }

  VAR_5 = FUNC_0(-1, VAR_4);
  if (VAR_5 == VAR_0)
   break;
  else {
   if (VAR_4->flags & VAR_1)
    if (VAR_4->state == VAR_2)
     break;
  }
 }
}
