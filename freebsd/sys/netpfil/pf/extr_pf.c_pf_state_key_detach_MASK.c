
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_key {int * states; } ;
struct pf_state {struct pf_state_key** key; } ;
struct pf_keyhash {int dummy; } ;


 int FUNC_0 (struct pf_state_key*,int ) ;
 int FUNC_1 (struct pf_keyhash*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct pf_state*,int ) ;
 struct pf_keyhash* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 size_t FUNC_4 (struct pf_state_key*) ;
 int FUNC_5 (int ,struct pf_state_key*) ;

__attribute__((used)) static void
FUNC_6(struct pf_state *VAR_4, int VAR_5)
{
 struct pf_state_key *VAR_6 = VAR_4->key[VAR_5];





 FUNC_3(&VAR_6->states[VAR_5], VAR_4, VAR_3[VAR_5]);
 VAR_4->key[VAR_5] = ((void*)0);

 if (FUNC_2(&VAR_6->states[0]) && FUNC_2(&VAR_6->states[1])) {
  FUNC_0(VAR_6, VAR_2);
  FUNC_5(VAR_1, VAR_6);
 }
}
