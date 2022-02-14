
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {char* src; scalar_t__ force; int dst; scalar_t__ exact_sha1; scalar_t__ pattern; } ;
struct ref {int exact_oid; int force; struct ref* next; struct ref* peer_ref; int name; int old_oid; } ;


 int FUNC_0 (char*) ;
 struct ref* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ref*) ;
 struct ref* FUNC_6 (struct ref const*,struct refspec_item const*) ;
 struct ref* FUNC_7 (int ) ;
 int FUNC_8 (char const*,int *) ;
 struct ref* FUNC_9 (struct ref const*,char const*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct ref*,struct ref***) ;

int FUNC_12(const struct ref *VAR_0,
    const struct refspec_item *VAR_1,
    struct ref ***VAR_2,
    int VAR_3)
{
 struct ref *VAR_4, **VAR_5;

 if (VAR_1->pattern) {
  VAR_4 = FUNC_6(VAR_0, VAR_1);
 } else {
  const char *VAR_6 = VAR_1->src[0] ? VAR_1->src : "HEAD";

  if (VAR_1->exact_sha1) {
   VAR_4 = FUNC_1(VAR_6);
   FUNC_8(VAR_6, &VAR_4->old_oid);
   VAR_4->exact_oid = 1;
  } else {
   VAR_4 = FUNC_9(VAR_0, VAR_6);
  }
  if (!VAR_3 && !VAR_4)
   FUNC_3(FUNC_0("couldn't find remote ref %s"), VAR_6);
  if (VAR_4) {
   VAR_4->peer_ref = FUNC_7(VAR_1->dst);
   if (VAR_4->peer_ref && VAR_1->force)
    VAR_4->peer_ref->force = 1;
  }
 }

 for (VAR_5 = &VAR_4; *VAR_5; ) {
  if ((*VAR_5)->peer_ref) {
   if (!FUNC_10((*VAR_5)->peer_ref->name, "refs/") ||
       FUNC_2((*VAR_5)->peer_ref->name, 0)) {
    struct ref *VAR_7 = *VAR_5;
    FUNC_4(FUNC_0("* Ignoring funny ref '%s' locally"),
          (*VAR_5)->peer_ref->name);
    *VAR_5 = (*VAR_5)->next;
    FUNC_5(VAR_7->peer_ref);
    FUNC_5(VAR_7);
    continue;
   }
  }
  VAR_5 = &((*VAR_5)->next);
 }

 if (VAR_4)
  FUNC_11(VAR_4, VAR_2);

 return 0;
}
