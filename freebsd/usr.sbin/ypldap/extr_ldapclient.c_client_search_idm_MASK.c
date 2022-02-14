
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idm_req {int dummy; } ;
struct idm {char* idm_basedn; char* idm_groupdn; } ;
struct env {int sc_iev; } ;
struct aldap_page_control {scalar_t__ cookie_len; } ;
struct aldap_message {scalar_t__ msgid; scalar_t__ message_type; struct aldap_page_control* page; } ;
struct aldap {scalar_t__ msgid; } ;
typedef int ir ;
typedef enum imsg_type { ____Placeholder_imsg_type } imsg_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aldap_message*) ;
 int FUNC_1 (struct aldap_page_control*) ;
 int FUNC_2 (struct aldap*,char const**) ;
 struct aldap_message* FUNC_3 (struct aldap*) ;
 int FUNC_4 (struct aldap*,char*,int ,char*,char**,int ,int ,int ,struct aldap_page_control*) ;
 scalar_t__ FUNC_5 (struct idm*,struct idm_req*,struct aldap_message*,int,int) ;
 int FUNC_6 (int ,int,int ,int ,int,struct idm_req*,int) ;
 int FUNC_7 (char*,char const*) ;

int
FUNC_8(struct env *VAR_4, struct idm *VAR_5, struct aldap *VAR_6,
    char **VAR_7, char *VAR_8, int VAR_9, int VAR_10,
    enum imsg_type VAR_11)
{
 struct idm_req VAR_12;
 struct aldap_message *VAR_13;
 struct aldap_page_control *VAR_14 = ((void*)0);
 const char *VAR_15;
 char *VAR_16;

 VAR_16 = VAR_5->idm_basedn;
 if (VAR_11 == VAR_0 && VAR_5->idm_groupdn[0] != '\0')
  VAR_16 = VAR_5->idm_groupdn;

 do {
  if (FUNC_4(VAR_6, VAR_16, VAR_3,
      VAR_8, VAR_7, 0, 0, 0, VAR_14) == -1) {
   FUNC_2(VAR_6, &VAR_15);
   FUNC_7("%s", VAR_15);
   return (-1);
  }

  if (VAR_14 != ((void*)0)) {
   FUNC_1(VAR_14);
   VAR_14 = ((void*)0);
  }

  while ((VAR_13 = FUNC_3(VAR_6)) != ((void*)0)) {
   if (VAR_6->msgid != VAR_13->msgid) {
    goto fail;
   }

   if (VAR_13->message_type == VAR_2) {
    if (VAR_13->page != ((void*)0) && VAR_13->page->cookie_len != 0)
     VAR_14 = VAR_13->page;
    else
     VAR_14 = ((void*)0);

    FUNC_0(VAR_13);
    break;
   }

   if (VAR_13->message_type != VAR_1) {
    goto fail;
   }

   if (FUNC_5(VAR_5, &VAR_12, VAR_13, VAR_9, VAR_10) == 0)
    FUNC_6(VAR_4->sc_iev, VAR_11, 0, 0, -1,
        &VAR_12, sizeof(VAR_12));

   FUNC_0(VAR_13);
  }
 } while (VAR_14 != ((void*)0));

 return (0);

fail:
 FUNC_0(VAR_13);
 if (VAR_14 != ((void*)0)) {
  FUNC_1(VAR_14);
 }

 return (-1);
}
