
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {scalar_t__ fetch_head_status; struct ref* peer_ref; int name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct ref*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ref *VAR_1, struct ref *VAR_2)
{
 if (FUNC_4(VAR_1->name, VAR_2->name)) {
  if (VAR_1->fetch_head_status != VAR_0 &&
      VAR_2->fetch_head_status != VAR_0) {
   FUNC_2(FUNC_1("Cannot fetch both %s and %s to %s"),
       VAR_1->name, VAR_2->name, VAR_2->peer_ref->name);
  } else if (VAR_1->fetch_head_status != VAR_0 &&
      VAR_2->fetch_head_status == VAR_0) {
   FUNC_5(FUNC_1("%s usually tracks %s, not %s"),
    VAR_2->peer_ref->name, VAR_2->name, VAR_1->name);
  } else if (VAR_1->fetch_head_status == VAR_0 &&
      VAR_2->fetch_head_status == VAR_0) {
   FUNC_2(FUNC_1("%s tracks both %s and %s"),
       VAR_2->peer_ref->name, VAR_1->name, VAR_2->name);
  } else {





   FUNC_0("Internal error");
  }
 }
 FUNC_3(VAR_2->peer_ref);
 FUNC_3(VAR_2);
}
