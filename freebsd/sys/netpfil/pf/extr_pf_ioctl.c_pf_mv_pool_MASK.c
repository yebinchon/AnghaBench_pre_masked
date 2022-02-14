
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_pooladdr {int dummy; } ;
struct pf_palist {int dummy; } ;


 struct pf_pooladdr* FUNC_0 (struct pf_palist*) ;
 int FUNC_1 (struct pf_palist*,struct pf_pooladdr*,int ) ;
 int FUNC_2 (struct pf_palist*,struct pf_pooladdr*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct pf_palist *VAR_1, struct pf_palist *VAR_2)
{
 struct pf_pooladdr *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_2(VAR_1, VAR_3, VAR_0);
  FUNC_1(VAR_2, VAR_3, VAR_0);
 }
}
