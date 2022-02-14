
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idm {int dummy; } ;
struct env {int sc_idms; } ;


 struct idm* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct idm*,int ) ;
 int FUNC_2 (struct idm*) ;
 int VAR_0 ;

void
FUNC_3(struct env *VAR_1)
{
 struct idm *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->sc_idms)) != ((void*)0)) {
  FUNC_1(&VAR_1->sc_idms, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
