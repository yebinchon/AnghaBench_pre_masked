
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsb {int tag; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct tsb* VAR_2 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct tsb *VAR_6 = &VAR_2[VAR_5];
  unsigned long VAR_7 = VAR_5 << 13;

  VAR_7 |= (VAR_6->tag << 22);
  if (VAR_7 >= VAR_3 && VAR_7 < VAR_4)
   VAR_6->tag = (1UL << VAR_1);
 }
}
