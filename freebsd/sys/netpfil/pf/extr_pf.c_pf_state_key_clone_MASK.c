
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_state_key_cmp {int dummy; } ;
struct pf_state_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pf_state_key*,struct pf_state_key*,int) ;
 struct pf_state_key* FUNC_1 (int ,int ) ;

struct pf_state_key *
FUNC_2(struct pf_state_key *VAR_2)
{
 struct pf_state_key *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_2, VAR_3, sizeof(struct pf_state_key_cmp));

 return (VAR_3);
}
