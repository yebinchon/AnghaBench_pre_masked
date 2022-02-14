
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_changed; int * untracked; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct index_state *VAR_1)
{
 if (VAR_1->untracked) {
  FUNC_0(VAR_1->untracked);
  VAR_1->untracked = ((void*)0);
  VAR_1->cache_changed |= VAR_0;
 }
}
