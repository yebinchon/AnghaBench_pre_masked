
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ik_uid; void* ik_gid; } ;
struct idm_req {int ir_line; TYPE_1__ ir_key; } ;
struct idm {int idm_flags; char** idm_attrs; int idm_list; } ;
struct aldap_message {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char**) ;
 int FUNC_3 (struct aldap_message*,char*,char***) ;
 int FUNC_4 (struct idm_req*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 void* FUNC_6 (char*,int ,int ,int *) ;

int
FUNC_7(struct idm *VAR_4, struct idm_req *VAR_5, struct aldap_message *VAR_6,
    int VAR_7, int VAR_8)
{
 char **VAR_9;
 int VAR_10, VAR_11;

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));
 for (VAR_10 = VAR_7; VAR_10 < VAR_8; VAR_10++) {
  if (VAR_4->idm_flags & FUNC_0(VAR_10)) {
   if (FUNC_5(VAR_5->ir_line, VAR_4->idm_attrs[VAR_10],
       sizeof(VAR_5->ir_line)) >= sizeof(VAR_5->ir_line))



    return (-1);

   if (VAR_10 == VAR_1) {
    VAR_5->ir_key.ik_uid = FUNC_6(
        VAR_4->idm_attrs[VAR_10], 0,
        VAR_3, ((void*)0));
   } else if (VAR_10 == VAR_0) {
    VAR_5->ir_key.ik_gid = FUNC_6(
        VAR_4->idm_attrs[VAR_10], 0,
        VAR_2, ((void*)0));
   }
  } else if (VAR_4->idm_list & FUNC_1(VAR_10)) {
   FUNC_3(VAR_6, VAR_4->idm_attrs[VAR_10], &VAR_9);
   for (VAR_11 = 0; VAR_11 >= 0 && VAR_9 && VAR_9[VAR_11] != ((void*)0); VAR_11++) {

    if (FUNC_5(VAR_5->ir_line, VAR_9[VAR_11],
        sizeof(VAR_5->ir_line)) >= sizeof(VAR_5->ir_line))
     continue;
    if (VAR_9[VAR_11+1] != ((void*)0))
     if (FUNC_5(VAR_5->ir_line, ",",
          sizeof(VAR_5->ir_line))
         >= sizeof(VAR_5->ir_line)) {
      FUNC_2(VAR_9);
      return (-1);
     }
   }
   FUNC_2(VAR_9);
  } else {
   if (FUNC_3(VAR_6, VAR_4->idm_attrs[VAR_10], &VAR_9) == -1)
    return (-1);
   if (FUNC_5(VAR_5->ir_line, VAR_9[0],
       sizeof(VAR_5->ir_line)) >= sizeof(VAR_5->ir_line)) {
    FUNC_2(VAR_9);
    return (-1);
   }
   if (VAR_10 == VAR_1) {
    VAR_5->ir_key.ik_uid = FUNC_6(
        VAR_9[0], 0, VAR_3, ((void*)0));
   } else if (VAR_10 == VAR_0) {
    VAR_5->ir_key.ik_uid = FUNC_6(
        VAR_9[0], 0, VAR_2, ((void*)0));
   }
   FUNC_2(VAR_9);
  }

  if (VAR_10 + 1 != VAR_8)
   if (FUNC_5(VAR_5->ir_line, ":",
       sizeof(VAR_5->ir_line)) >= sizeof(VAR_5->ir_line))
    return (-1);
 }

 return (0);
}
