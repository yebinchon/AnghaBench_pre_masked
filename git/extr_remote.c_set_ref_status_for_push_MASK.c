
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref {int status; int forced_update; int old_oid; int new_oid; int name; scalar_t__ deletion; int old_oid_expect; scalar_t__ expect_old_sha1; TYPE_1__* peer_ref; scalar_t__ force; struct ref* next; } ;
struct TYPE_2__ {int new_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int VAR_6 ;

void FUNC_7(struct ref *VAR_7, int VAR_8,
        int VAR_9)
{
 struct ref *VAR_10;

 for (VAR_10 = VAR_7; VAR_10; VAR_10 = VAR_10->next) {
  int VAR_11 = VAR_10->force || VAR_9;
  int VAR_12 = 0;

  if (VAR_10->peer_ref)
   FUNC_3(&VAR_10->new_oid, &VAR_10->peer_ref->new_oid);
  else if (!VAR_8)
   continue;

  VAR_10->deletion = FUNC_1(&VAR_10->new_oid);
  if (!VAR_10->deletion &&
   FUNC_4(&VAR_10->old_oid, &VAR_10->new_oid)) {
   VAR_10->status = VAR_5;
   continue;
  }
  if (VAR_10->expect_old_sha1) {
   if (!FUNC_4(&VAR_10->old_oid, &VAR_10->old_oid_expect))
    VAR_12 = VAR_4;
   else

    VAR_11 = 1;
  }
  if (!VAR_12 && !VAR_10->deletion && !FUNC_1(&VAR_10->old_oid)) {
   if (FUNC_6(VAR_10->name, "refs/tags/"))
    VAR_12 = VAR_0;
   else if (!FUNC_0(&VAR_10->old_oid))
    VAR_12 = VAR_1;
   else if (!FUNC_2(VAR_6, &VAR_10->old_oid, 1) ||
     !FUNC_2(VAR_6, &VAR_10->new_oid, 1))
    VAR_12 = VAR_2;
   else if (!FUNC_5(&VAR_10->new_oid, &VAR_10->old_oid))
    VAR_12 = VAR_3;
  }





  if (!VAR_11)
   VAR_10->status = VAR_12;
  else if (VAR_12)
   VAR_10->forced_update = 1;
 }
}
