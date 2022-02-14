
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 while (1) {
  unsigned long VAR_7;

  VAR_7 = FUNC_4(&FUNC_3(&VAR_4)->bits, 0);
  if (VAR_7 == 0)
   return VAR_3;

  if (VAR_7 & (1 << VAR_2))
   FUNC_2();

  if (VAR_7 & (1 << VAR_0))
   FUNC_1();

  FUNC_0((VAR_7 >> VAR_1) != 0);
 }

 return VAR_3;
}
