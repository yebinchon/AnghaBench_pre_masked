
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int dummy; } ;
struct refspec_item {char* dst; int src; } ;
struct ref {scalar_t__ status; int new_oid; scalar_t__ deletion; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct remote*,struct refspec_item*) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,int *,int *,int ,int ) ;

void FUNC_5(struct remote *VAR_3, struct ref *VAR_4, int VAR_5)
{
 struct refspec_item VAR_6;

 if (VAR_4->status != VAR_0 && VAR_4->status != VAR_1)
  return;

 VAR_6.src = VAR_4->name;
 VAR_6.dst = ((void*)0);

 if (!FUNC_3(VAR_3, &VAR_6)) {
  if (VAR_5)
   FUNC_1(VAR_2, "updating local tracking ref '%s'\n", VAR_6.dst);
  if (VAR_4->deletion) {
   FUNC_0(((void*)0), VAR_6.dst, ((void*)0), 0);
  } else
   FUNC_4("update by push", VAR_6.dst, &VAR_4->new_oid,
       ((void*)0), 0, 0);
  FUNC_2(VAR_6.dst);
 }
}
