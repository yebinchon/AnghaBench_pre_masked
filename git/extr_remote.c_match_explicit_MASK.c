
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {char* dst; int force; scalar_t__ matching; scalar_t__ pattern; } ;
struct ref {char const* name; int force; struct ref* peer_ref; int new_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct ref* FUNC_1 (struct ref*) ;
 int FUNC_2 (char const*,struct ref*,struct ref**) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,struct ref*) ;
 int FUNC_7 (int *) ;
 struct ref* FUNC_8 (char const*,struct ref***) ;
 scalar_t__ FUNC_9 (struct ref*,struct refspec_item*,struct ref**,int*) ;
 char* FUNC_10 (char const*,int ,int *,int*) ;
 int FUNC_11 (char const*,char const*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static int FUNC_13(struct ref *VAR_2, struct ref *VAR_3,
     struct ref ***VAR_4,
     struct refspec_item *VAR_5)
{
 struct ref *VAR_6, *VAR_7;
 int VAR_8;

 const char *VAR_9 = VAR_5->dst;
 char *VAR_10;

 if (VAR_5->pattern || VAR_5->matching)
  return 0;

 VAR_6 = VAR_7 = ((void*)0);
 if (FUNC_9(VAR_2, VAR_5, &VAR_6, &VAR_8) < 0)
  return -1;

 if (!VAR_9) {
  int VAR_11;

  VAR_9 = FUNC_10(VAR_6->name,
            VAR_1,
            ((void*)0), &VAR_11);
  if (!VAR_9 ||
      ((VAR_11 & VAR_0) &&
       !FUNC_12(VAR_9, "refs/heads/")))
   FUNC_3(FUNC_0("%s cannot be resolved to branch"),
       VAR_6->name);
 }

 switch (FUNC_2(VAR_9, VAR_3, &VAR_7)) {
 case 1:
  break;
 case 0:
  if (FUNC_12(VAR_9, "refs/")) {
   VAR_7 = FUNC_8(VAR_9, VAR_4);
  } else if (FUNC_7(&VAR_6->new_oid)) {
   FUNC_4(FUNC_0("unable to delete '%s': remote ref does not exist"),
         VAR_9);
  } else if ((VAR_10 = FUNC_6(VAR_9, VAR_6))) {
   VAR_7 = FUNC_8(VAR_10, VAR_4);
   FUNC_5(VAR_10);
  } else {
   FUNC_11(VAR_9,
            VAR_6->name);
  }
  break;
 default:
  VAR_7 = ((void*)0);
  FUNC_4(FUNC_0("dst refspec %s matches more than one"),
        VAR_9);
  break;
 }
 if (!VAR_7)
  return -1;
 if (VAR_7->peer_ref)
  return FUNC_4(FUNC_0("dst ref %s receives from more than one src"),
        VAR_7->name);
 else {
  VAR_7->peer_ref = VAR_8 ?
     VAR_6 :
     FUNC_1(VAR_6);
  VAR_7->force = VAR_5->force;
 }
 return 0;
}
