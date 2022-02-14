
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct todo_list {int dummy; } ;
struct repository {int dummy; } ;
struct replay_opts {scalar_t__ action; TYPE_5__* revs; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_11__ {int nr; TYPE_3__* rev; } ;
struct TYPE_9__ {int nr; TYPE_1__* objects; } ;
struct TYPE_12__ {TYPE_4__ cmdline; scalar_t__ no_walk; TYPE_2__ pending; } ;
struct TYPE_10__ {scalar_t__ whence; int flags; } ;
struct TYPE_8__ {char* name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct todo_list VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (struct repository*) ;
 int FUNC_4 (int ,...) ;
 scalar_t__ FUNC_5 (char const*,struct object_id*) ;
 struct commit* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (struct repository*,struct object_id*,int) ;
 int FUNC_8 (struct repository*,struct object_id*,int *) ;
 int FUNC_9 (struct object_id*) ;
 int FUNC_10 (struct repository*,struct todo_list*,struct replay_opts*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (struct repository*,struct replay_opts*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct replay_opts*) ;
 int FUNC_15 (struct repository*,struct commit*,struct replay_opts*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (struct todo_list*) ;
 char* FUNC_18 (int) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (struct todo_list*,struct replay_opts*) ;

int FUNC_21(struct repository *VAR_3,
        struct replay_opts *VAR_4)
{
 struct todo_list VAR_5 = VAR_2;
 struct object_id VAR_6;
 int VAR_7, VAR_8;

 FUNC_2(VAR_4->revs);
 if (FUNC_12(VAR_3, VAR_4))
  return -1;

 for (VAR_7 = 0; VAR_7 < VAR_4->revs->pending.nr; VAR_7++) {
  struct object_id VAR_9;
  const char *VAR_10 = VAR_4->revs->pending.objects[VAR_7].name;


  if (!FUNC_16(VAR_10))
   continue;

  if (!FUNC_5(VAR_10, &VAR_9)) {
   if (!FUNC_7(VAR_3, &VAR_9, 1)) {
    enum object_type VAR_11 = FUNC_8(VAR_3,
         &VAR_9,
         ((void*)0));
    return FUNC_4(FUNC_1("%s: can't cherry-pick a %s"),
     VAR_10, FUNC_18(VAR_11));
   }
  } else
   return FUNC_4(FUNC_1("%s: bad revision"), VAR_10);
 }
 if (VAR_4->revs->cmdline.nr == 1 &&
     VAR_4->revs->cmdline.rev->whence == VAR_1 &&
     VAR_4->revs->no_walk &&
     !VAR_4->revs->cmdline.rev->flags) {
  struct commit *VAR_12;
  if (FUNC_11(VAR_4->revs))
   return FUNC_4(FUNC_1("revision walk setup failed"));
  VAR_12 = FUNC_6(VAR_4->revs);
  if (!VAR_12)
   return FUNC_4(FUNC_1("empty commit set passed"));
  if (FUNC_6(VAR_4->revs))
   FUNC_0("unexpected extra commit from walk");
  return FUNC_15(VAR_3, VAR_12, VAR_4);
 }







 if (FUNC_20(&VAR_5, VAR_4) ||
   FUNC_3(VAR_3) < 0)
  return -1;
 if (FUNC_5("HEAD", &VAR_6) && (VAR_4->action == VAR_0))
  return FUNC_4(FUNC_1("can't revert as initial commit"));
 if (FUNC_13(FUNC_9(&VAR_6)))
  return -1;
 if (FUNC_14(VAR_4))
  return -1;
 FUNC_19();
 VAR_8 = FUNC_10(VAR_3, &VAR_5, VAR_4);
 FUNC_17(&VAR_5);
 return VAR_8;
}
