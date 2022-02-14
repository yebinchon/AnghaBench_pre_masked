
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct remote_ls_ctx {char* dentry_name; scalar_t__ userData; } ;
struct ref {int old_oid; } ;
struct object {scalar_t__ type; int oid; } ;
struct TYPE_2__ {char* url; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ref* FUNC_0 (char*) ;
 struct object* FUNC_1 (int ,struct object*,char*,int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (struct ref*) ;
 scalar_t__ FUNC_4 (char*,struct ref*) ;
 char* FUNC_5 (int *) ;
 struct object* FUNC_6 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct strbuf*,char*,char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct remote_ls_ctx *VAR_5)
{
 struct strbuf *VAR_6 = (struct strbuf *)VAR_5->userData;
 struct object *VAR_7;
 struct ref *VAR_8;

 VAR_8 = FUNC_0(VAR_5->dentry_name);

 if (FUNC_4(VAR_2->url, VAR_8) != 0) {
  FUNC_2(VAR_3,
   "Unable to fetch ref %s from %s\n",
   VAR_5->dentry_name, VAR_2->url);
  VAR_1 = 1;
  FUNC_3(VAR_8);
  return;
 }

 VAR_7 = FUNC_6(VAR_4, &VAR_8->old_oid);
 if (!VAR_7) {
  FUNC_2(VAR_3,
   "Unable to parse object %s for remote ref %s\n",
   FUNC_5(&VAR_8->old_oid), VAR_5->dentry_name);
  VAR_1 = 1;
  FUNC_3(VAR_8);
  return;
 }

 FUNC_7(VAR_6, "%s\t%s\n",
      FUNC_5(&VAR_8->old_oid), VAR_5->dentry_name);

 if (VAR_7->type == VAR_0) {
  VAR_7 = FUNC_1(VAR_4, VAR_7, VAR_5->dentry_name, 0);
  if (VAR_7)
   FUNC_7(VAR_6, "%s\t%s^{}\n",
        FUNC_5(&VAR_7->oid), VAR_5->dentry_name);
 }
 FUNC_3(VAR_8);
}
