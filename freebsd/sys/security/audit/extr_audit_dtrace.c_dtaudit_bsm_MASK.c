
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaudit_record {int k_ar; scalar_t__ k_dtaudit_state; } ;
struct evname_elem {int ene_bsm_probe_id; int * ene_name; int ene_bsm_probe_enabled; } ;
typedef int ene_name_lower ;
typedef int au_id_t ;
typedef int au_event_t ;
typedef int au_class_t ;


 int VAR_0 ;
 int FUNC_0 (struct evname_elem*) ;
 int FUNC_1 (struct evname_elem*) ;
 int FUNC_2 (int ,uintptr_t,uintptr_t,uintptr_t,uintptr_t,int ) ;
 char FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct kaudit_record *VAR_1, au_id_t VAR_2, au_event_t VAR_3,
    au_class_t VAR_4, int VAR_5, void *VAR_6, size_t VAR_7)
{
 char VAR_8[VAR_0];
 struct evname_elem *VAR_9;
 int VAR_10;

 VAR_9 = (struct evname_elem *)VAR_1->k_dtaudit_state;
 if (VAR_9 == ((void*)0))
  return;
 if (!(VAR_9->ene_bsm_probe_enabled))
  return;
 FUNC_0(VAR_9);
 for (VAR_10 = 0; VAR_10 < sizeof(VAR_8); VAR_10++)
  VAR_8[VAR_10] = FUNC_3(VAR_9->ene_name[VAR_10]);
 FUNC_1(VAR_9);
 FUNC_2(VAR_9->ene_bsm_probe_id, (uintptr_t)VAR_8,
     (uintptr_t)&VAR_1->k_ar, (uintptr_t)VAR_6, (uintptr_t)VAR_7,
     0);
}
