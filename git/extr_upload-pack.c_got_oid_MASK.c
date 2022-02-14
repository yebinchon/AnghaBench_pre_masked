
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object_array {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {scalar_t__ date; struct commit_list* parents; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (struct object_id*) ;
 char const* FUNC_4 (struct object_id*) ;
 scalar_t__ VAR_2 ;
 struct object* FUNC_5 (int ,struct object_id*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(const char *VAR_4, struct object_id *VAR_5,
     struct object_array *VAR_6)
{
 struct object *VAR_7;
 int VAR_8 = 0;

 if (FUNC_2(VAR_4, VAR_5))
  FUNC_1("git upload-pack: expected SHA1 object, got '%s'", VAR_4);
 if (!FUNC_3(VAR_5))
  return -1;

 VAR_7 = FUNC_5(VAR_3, VAR_5);
 if (!VAR_7)
  FUNC_1("oops (%s)", FUNC_4(VAR_5));
 if (VAR_7->type == VAR_0) {
  struct commit_list *VAR_9;
  struct commit *VAR_10 = (struct commit *)VAR_7;
  if (VAR_7->flags & VAR_1)
   VAR_8 = 1;
  else
   VAR_7->flags |= VAR_1;
  if (!VAR_2 || (VAR_10->date < VAR_2))
   VAR_2 = VAR_10->date;
  for (VAR_9 = VAR_10->parents;
       VAR_9;
       VAR_9 = VAR_9->next)
   VAR_9->item->object.flags |= VAR_1;
 }
 if (!VAR_8) {
  FUNC_0(VAR_7, ((void*)0), VAR_6);
  return 1;
 }
 return 0;
}
