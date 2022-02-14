
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_states {int push; int heads; int tracked; int stale; int new_refs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ref_states *VAR_1)
{
 FUNC_0(&VAR_1->new_refs, 0);
 FUNC_0(&VAR_1->stale, 1);
 FUNC_0(&VAR_1->tracked, 0);
 FUNC_0(&VAR_1->heads, 0);
 FUNC_1(&VAR_1->push, VAR_0);
}
