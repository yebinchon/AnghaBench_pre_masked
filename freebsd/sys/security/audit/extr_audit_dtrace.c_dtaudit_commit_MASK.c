
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaudit_record {int k_ar; scalar_t__ k_dtaudit_state; } ;
struct evname_elem {int ene_bsm_probe_enabled; int ene_commit_probe_id; int * ene_name; scalar_t__ ene_commit_probe_enabled; } ;
typedef int ene_name_lower ;
typedef int au_id_t ;
typedef int au_event_t ;
typedef int au_class_t ;


 int VAR_0 ;
 int FUNC_0 (struct evname_elem*) ;
 int FUNC_1 (struct evname_elem*) ;
 int FUNC_2 (int ,uintptr_t,uintptr_t,int ,int ,int ) ;
 char FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct kaudit_record *VAR_1, au_id_t VAR_2, au_event_t VAR_3,
    au_class_t VAR_4, int VAR_5)
{
 char VAR_6[VAR_0];
 struct evname_elem *VAR_7;
 int VAR_8;

 VAR_7 = (struct evname_elem *)VAR_1->k_dtaudit_state;
 if (VAR_7 == ((void*)0))
  return (0);




 if (VAR_7->ene_commit_probe_enabled) {
  FUNC_0(VAR_7);
  for (VAR_8 = 0; VAR_8 < sizeof(VAR_6); VAR_8++)
   VAR_6[VAR_8] = FUNC_3(VAR_7->ene_name[VAR_8]);
  FUNC_1(VAR_7);
  FUNC_2(VAR_7->ene_commit_probe_id,
      (uintptr_t)VAR_6, (uintptr_t)&VAR_1->k_ar, 0, 0, 0);
 }




 return (VAR_7->ene_bsm_probe_enabled);
}
