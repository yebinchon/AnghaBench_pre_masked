
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr; TYPE_1__* objects; } ;
struct rev_info {TYPE_2__ pending; } ;
struct object {int flags; int oid; } ;
struct child_process {int in; int out; int git_cmd; int args; } ;
struct TYPE_6__ {int hexsz; } ;
struct TYPE_4__ {struct object* item; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*,char*,char*,char*,int *) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct child_process*) ;
 char* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct child_process*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_10 (int,char*,int) ;

__attribute__((used)) static int FUNC_11(int VAR_3, struct rev_info *VAR_4)
{
 struct child_process VAR_5 = VAR_0;
 int VAR_6;

 FUNC_1(&VAR_5.args,
    "pack-objects", "--all-progress-implied",
    "--stdout", "--thin", "--delta-base-offset",
    ((void*)0));
 VAR_5.in = -1;
 VAR_5.out = VAR_3;
 VAR_5.git_cmd = 1;





 if (VAR_5.out > 1) {
  VAR_5.out = FUNC_4(VAR_5.out);
  if (VAR_5.out < 0) {
   FUNC_6(FUNC_0("unable to dup bundle descriptor"));
   FUNC_2(&VAR_5);
   return -1;
  }
 }

 if (FUNC_9(&VAR_5))
  return FUNC_5(FUNC_0("Could not spawn pack-objects"));

 for (VAR_6 = 0; VAR_6 < VAR_4->pending.nr; VAR_6++) {
  struct object *VAR_7 = VAR_4->pending.objects[VAR_6].item;
  if (VAR_7->flags & VAR_1)
   FUNC_10(VAR_5.in, "^", 1);
  FUNC_10(VAR_5.in, FUNC_8(&VAR_7->oid), VAR_2->hexsz);
  FUNC_10(VAR_5.in, "\n", 1);
 }
 FUNC_3(VAR_5.in);
 if (FUNC_7(&VAR_5))
  return FUNC_5(FUNC_0("pack-objects died"));
 return 0;
}
