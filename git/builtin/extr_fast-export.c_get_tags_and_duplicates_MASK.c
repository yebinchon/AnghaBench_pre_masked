
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rev_cmdline_info {int nr; struct rev_cmdline_entry* rev; } ;
struct rev_cmdline_entry {int flags; TYPE_2__* item; int name; } ;
struct object_id {int dummy; } ;
struct TYPE_6__ {int type; int oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_9__ {scalar_t__ nr; } ;
struct TYPE_8__ {struct commit* util; } ;
struct TYPE_7__ {int type; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (int ,int ,struct object_id*,char**) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 struct commit* FUNC_4 (struct rev_cmdline_entry*,char*) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 char** FUNC_5 (int *,struct commit*) ;
 TYPE_3__* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,int ,...) ;

__attribute__((used)) static void FUNC_12(struct rev_cmdline_info *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->nr; VAR_6++) {
  struct rev_cmdline_entry *VAR_7 = VAR_5->rev + VAR_6;
  struct object_id VAR_8;
  struct commit *VAR_9;
  char *VAR_10;

  if (VAR_7->flags & VAR_1)
   continue;

  if (FUNC_1(VAR_7->name, FUNC_9(VAR_7->name), &VAR_8, &VAR_10) != 1)
   continue;

  if (VAR_3.nr) {
   char *VAR_11;
   VAR_11 = FUNC_0(&VAR_3, VAR_10);
   if (VAR_11) {
    FUNC_3(VAR_10);
    VAR_10 = VAR_11;
   }
  }

  VAR_9 = FUNC_4(VAR_7, VAR_10);
  if (!VAR_9) {
   FUNC_11("%s: Unexpected object of type %s, skipping.",
    VAR_7->name,
    FUNC_10(VAR_7->item->type));
   continue;
  }

  switch(VAR_9->object.type) {
  case 128:
   break;
  case 129:
   FUNC_2(&VAR_9->object.oid);
   continue;
  default:
   FUNC_11("Tag points to object of unexpected type %s, skipping.",
    FUNC_10(VAR_9->object.type));
   continue;
  }





  if (VAR_7->item->type != VAR_0)
   FUNC_6(&VAR_2, VAR_10)->util = VAR_9;

  if (!*FUNC_5(&VAR_4, VAR_9))
   *FUNC_5(&VAR_4, VAR_9) = VAR_10;
 }

 FUNC_8(&VAR_2);
 FUNC_7(&VAR_2, 0);
}
