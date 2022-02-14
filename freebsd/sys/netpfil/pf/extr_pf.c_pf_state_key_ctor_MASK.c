
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_key_cmp {int dummy; } ;
struct pf_state_key {int * states; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pf_state_key*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
 struct pf_state_key *VAR_6 = VAR_2;

 FUNC_1(VAR_6, sizeof(struct pf_state_key_cmp));
 FUNC_0(&VAR_6->states[VAR_1]);
 FUNC_0(&VAR_6->states[VAR_0]);

 return (0);
}
