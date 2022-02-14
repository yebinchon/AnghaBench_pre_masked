
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {int v; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,unsigned long*) ;
 scalar_t__ FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static inline void FUNC_5(struct hash_pte *VAR_1)
{
 unsigned long *VAR_2 = (unsigned long *)&VAR_1->v;

 while (1) {
  if (!FUNC_3(VAR_0, VAR_2))
   break;
  FUNC_0();
  while(FUNC_4(VAR_0, VAR_2))
   FUNC_1();
  FUNC_2();
 }
}
