
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int untracked; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct index_state*) ;

void FUNC_3(struct index_state *VAR_0)
{
 if (!VAR_0->untracked) {
  FUNC_2(VAR_0);
 } else {
  if (!FUNC_1(VAR_0->untracked)) {
   FUNC_0(VAR_0->untracked);
   FUNC_2(VAR_0);
  }
 }
}
