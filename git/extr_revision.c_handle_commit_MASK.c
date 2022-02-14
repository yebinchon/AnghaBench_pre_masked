
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int dummy; } ;
struct tag {TYPE_1__* tagged; int tag; } ;
struct rev_info {int limited; int blob_objects; int repo; int tree_objects; scalar_t__ sources; int topo_order; scalar_t__ exclude_promisor_objects; scalar_t__ ignore_missing_links; scalar_t__ tag_objects; } ;
struct object_array_entry {char* name; char* path; unsigned int mode; struct object* item; } ;
struct object {unsigned long flags; scalar_t__ type; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int oid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct rev_info*,struct object*,int ) ;
 int FUNC_1 (struct rev_info*,struct object*,char const*,unsigned int,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tag*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct commit*) ;
 int FUNC_7 (int ,struct tree*) ;
 char const* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct commit*) ;
 struct object* FUNC_10 (int ,int ) ;
 char** FUNC_11 (scalar_t__,struct commit*) ;
 int VAR_5 ;
 char* FUNC_12 (char const*) ;

__attribute__((used)) static struct commit *FUNC_13(struct rev_info *VAR_6,
        struct object_array_entry *VAR_7)
{
 struct object *VAR_8 = VAR_7->item;
 const char *VAR_9 = VAR_7->name;
 const char *VAR_10 = VAR_7->path;
 unsigned int VAR_11 = VAR_7->mode;
 unsigned long VAR_12 = VAR_8->flags;




 while (VAR_8->type == VAR_2) {
  struct tag *VAR_13 = (struct tag *) VAR_8;
  if (VAR_6->tag_objects && !(VAR_12 & VAR_4))
   FUNC_0(VAR_6, VAR_8, VAR_13->tag);
  VAR_8 = FUNC_10(VAR_6->repo, FUNC_4(VAR_13));
  if (!VAR_8) {
   if (VAR_6->ignore_missing_links || (VAR_12 & VAR_4))
    return ((void*)0);
   if (VAR_6->exclude_promisor_objects &&
       FUNC_5(&VAR_13->tagged->oid))
    return ((void*)0);
   FUNC_2("bad object %s", FUNC_8(&VAR_13->tagged->oid));
  }
  VAR_8->flags |= VAR_12;





  VAR_10 = ((void*)0);
  VAR_11 = 0;
 }





 if (VAR_8->type == VAR_1) {
  struct commit *VAR_14 = (struct commit *)VAR_8;

  if (FUNC_9(VAR_14) < 0)
   FUNC_2("unable to parse commit %s", VAR_9);
  if (VAR_12 & VAR_4) {
   FUNC_6(VAR_14);

   if (!VAR_6->topo_order || !FUNC_3(VAR_5))
    VAR_6->limited = 1;
  }
  if (VAR_6->sources) {
   char **VAR_15 = FUNC_11(VAR_6->sources, VAR_14);

   if (!*VAR_15)
    *VAR_15 = FUNC_12(VAR_9);
  }
  return VAR_14;
 }





 if (VAR_8->type == VAR_3) {
  struct tree *VAR_16 = (struct tree *)VAR_8;
  if (!VAR_6->tree_objects)
   return ((void*)0);
  if (VAR_12 & VAR_4) {
   FUNC_7(VAR_6->repo, VAR_16);
   return ((void*)0);
  }
  FUNC_1(VAR_6, VAR_8, VAR_9, VAR_11, VAR_10);
  return ((void*)0);
 }




 if (VAR_8->type == VAR_0) {
  if (!VAR_6->blob_objects)
   return ((void*)0);
  if (VAR_12 & VAR_4)
   return ((void*)0);
  FUNC_1(VAR_6, VAR_8, VAR_9, VAR_11, VAR_10);
  return ((void*)0);
 }
 FUNC_2("%s is unknown object", VAR_9);
}
