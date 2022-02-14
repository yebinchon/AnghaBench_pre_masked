
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsb {unsigned long tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 void FUNC_0 (unsigned long,unsigned long) ;
 struct tsb* VAR_4 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,int,int) ;

void FUNC_3(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;

 if ((VAR_6 - VAR_5) >> VAR_1 >= 2 * VAR_0)
  return FUNC_0(VAR_5, VAR_6);

 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7 += VAR_2) {
  unsigned long VAR_8 = FUNC_2(VAR_7, VAR_1,
           VAR_0);
  struct tsb *VAR_9 = &VAR_4[VAR_8];

  if (FUNC_1(VAR_9->tag, VAR_7))
   VAR_9->tag = (1UL << VAR_3);
 }
}
