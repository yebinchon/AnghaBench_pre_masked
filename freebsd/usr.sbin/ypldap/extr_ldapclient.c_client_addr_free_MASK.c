
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ypldap_addr {int dummy; } ;
struct idm {int idm_addr; } ;


 int FUNC_0 (int *) ;
 struct ypldap_addr* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ypldap_addr*,int ) ;
 int FUNC_3 (struct ypldap_addr*) ;
 int VAR_0 ;

int
FUNC_4(struct idm *VAR_1)
{
        struct ypldap_addr *VAR_2;

 while (!FUNC_0(&VAR_1->idm_addr)) {
  VAR_2 = FUNC_1(&VAR_1->idm_addr);
  FUNC_2(&VAR_1->idm_addr, VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }

 return (0);
}
