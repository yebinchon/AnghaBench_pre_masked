
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif_cmp {int pfik_name; } ;
struct pfi_kif {int dummy; } ;
typedef int s ;


 int FUNC_0 () ;
 struct pfi_kif* FUNC_1 (int ,int *,struct pfi_kif*) ;
 int VAR_0 ;
 int FUNC_2 (struct pfi_kif_cmp*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char const*,int) ;

struct pfi_kif *
FUNC_4(const char *VAR_2)
{
 struct pfi_kif_cmp VAR_3;

 FUNC_0();

 FUNC_2(&VAR_3, sizeof(VAR_3));
 FUNC_3(VAR_3.pfik_name, VAR_2, sizeof(VAR_3.pfik_name));

 return (FUNC_1(VAR_1, &VAR_0, (struct pfi_kif *)&VAR_3));
}
