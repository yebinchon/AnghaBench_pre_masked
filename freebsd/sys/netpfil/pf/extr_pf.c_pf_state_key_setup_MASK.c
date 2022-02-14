
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int16_t ;
struct pf_state_key {int af; int proto; void** port; int * addr; } ;
struct pf_pdesc {size_t sidx; size_t didx; int af; int proto; } ;
struct pf_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pf_addr*,int ) ;
 int VAR_1 ;
 struct pf_state_key* FUNC_1 (int ,int ) ;

struct pf_state_key *
FUNC_2(struct pf_pdesc *VAR_2, struct pf_addr *VAR_3,
 struct pf_addr *VAR_4, u_int16_t VAR_5, u_int16_t VAR_6)
{
 struct pf_state_key *VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_0);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 FUNC_0(&VAR_7->addr[VAR_2->sidx], VAR_3, VAR_2->af);
 FUNC_0(&VAR_7->addr[VAR_2->didx], VAR_4, VAR_2->af);
 VAR_7->port[VAR_2->sidx] = VAR_5;
 VAR_7->port[VAR_2->didx] = VAR_6;
 VAR_7->proto = VAR_2->proto;
 VAR_7->af = VAR_2->af;

 return (VAR_7);
}
