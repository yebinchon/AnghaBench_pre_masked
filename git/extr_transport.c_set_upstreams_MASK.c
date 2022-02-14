
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {TYPE_2__* remote; } ;
struct ref {scalar_t__ status; char* name; TYPE_1__* peer_ref; int new_oid; struct ref* next; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char*,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,char const*,char*) ;
 char* FUNC_4 (char const*,int ,int *,int*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(struct transport *VAR_5, struct ref *VAR_6,
 int VAR_7)
{
 struct ref *VAR_8;
 for (VAR_8 = VAR_6; VAR_8; VAR_8 = VAR_8->next) {
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  int VAR_12 = 0;




  if (VAR_8->status != VAR_2 &&
   VAR_8->status != VAR_3)
   continue;
  if (!VAR_8->peer_ref)
   continue;
  if (FUNC_2(&VAR_8->new_oid))
   continue;


  VAR_9 = VAR_8->peer_ref->name;
  VAR_11 = VAR_8->name;
  VAR_10 = FUNC_4(VAR_9, VAR_4,
      ((void*)0), &VAR_12);
  if (VAR_10 && VAR_12 & VAR_1 &&
   FUNC_5(VAR_10, "refs/heads/"))
   VAR_9 = VAR_10;


  if (!VAR_9 || !FUNC_5(VAR_9, "refs/heads/"))
   continue;
  if (!VAR_11 || !FUNC_5(VAR_11, "refs/heads/"))
   continue;

  if (!VAR_7)
   FUNC_1(VAR_0,
    VAR_9 + 11, VAR_5->remote->name,
    VAR_11);
  else
   FUNC_3(FUNC_0("Would set upstream of '%s' to '%s' of '%s'\n"),
    VAR_9 + 11, VAR_11 + 11,
    VAR_5->remote->name);
 }
}
