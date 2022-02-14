
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evname_elem {scalar_t__ ene_bsm_probe_enabled; scalar_t__ ene_commit_probe_enabled; } ;
typedef int au_id_t ;
typedef int au_event_t ;
typedef int au_class_t ;


 struct evname_elem* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_1(au_id_t VAR_1, au_event_t VAR_2, au_class_t VAR_3)
{
 struct evname_elem *VAR_4;
 int VAR_5;





 if (!VAR_0)
  return (((void*)0));
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_5 = VAR_4->ene_commit_probe_enabled ||
     VAR_4->ene_bsm_probe_enabled;
 if (!VAR_5)
  return (((void*)0));
 return ((void *)VAR_4);
}
