
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (int) ;

int FUNC_2(struct cyapa *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4 / 100;

 do {
  VAR_5 = FUNC_0(VAR_3);
  if (!VAR_5 && VAR_3->state > VAR_0)
   return 0;

  FUNC_1(100);
 } while (VAR_6--);

 return (VAR_5 == -VAR_1 || VAR_5 == -VAR_2) ? -VAR_2 : VAR_5;
}
