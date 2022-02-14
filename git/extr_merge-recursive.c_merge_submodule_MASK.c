
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object_array {int nr; TYPE_3__* objects; } ;
struct merge_options {int repo; TYPE_1__* priv; } ;
struct commit {int dummy; } ;
struct TYPE_6__ {TYPE_2__* item; } ;
struct TYPE_5__ {int oid; } ;
struct TYPE_4__ {int call_depth; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,struct object_array*,char const*,struct commit*,struct commit*) ;
 scalar_t__ FUNC_3 (struct commit*,struct commit*) ;
 scalar_t__ FUNC_4 (struct object_id const*) ;
 struct commit* FUNC_5 (int ,struct object_id const*) ;
 int FUNC_6 (struct object_array*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct object_id*,struct object_id const*) ;
 int FUNC_9 (struct merge_options*,int,int ,...) ;
 int FUNC_10 (struct merge_options*,struct commit*) ;
 int FUNC_11 (struct commit*) ;
 scalar_t__ FUNC_12 (struct merge_options*,int) ;

__attribute__((used)) static int FUNC_13(struct merge_options *VAR_0,
      struct object_id *VAR_1, const char *VAR_2,
      const struct object_id *VAR_3, const struct object_id *VAR_4,
      const struct object_id *VAR_5)
{
 struct commit *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;
 struct object_array VAR_10;

 int VAR_11;
 int VAR_12 = !VAR_0->priv->call_depth;


 FUNC_8(VAR_1, VAR_4);


 if (FUNC_4(VAR_3))
  return 0;
 if (FUNC_4(VAR_4))
  return 0;
 if (FUNC_4(VAR_5))
  return 0;

 if (FUNC_1(VAR_2)) {
  FUNC_9(VAR_0, 1, FUNC_0("Failed to merge submodule %s (not checked out)"), VAR_2);
  return 0;
 }

 if (!(VAR_6 = FUNC_5(VAR_0->repo, VAR_3)) ||
     !(VAR_7 = FUNC_5(VAR_0->repo, VAR_4)) ||
     !(VAR_8 = FUNC_5(VAR_0->repo, VAR_5))) {
  FUNC_9(VAR_0, 1, FUNC_0("Failed to merge submodule %s (commits not present)"), VAR_2);
  return 0;
 }


 if (!FUNC_3(VAR_6, VAR_7) ||
     !FUNC_3(VAR_6, VAR_8)) {
  FUNC_9(VAR_0, 1, FUNC_0("Failed to merge submodule %s (commits don't follow merge-base)"), VAR_2);
  return 0;
 }


 if (FUNC_3(VAR_7, VAR_8)) {
  FUNC_8(VAR_1, VAR_5);
  if (FUNC_12(VAR_0, 3)) {
   FUNC_9(VAR_0, 3, FUNC_0("Fast-forwarding submodule %s to the following commit:"), VAR_2);
   FUNC_10(VAR_0, VAR_8);
  } else if (FUNC_12(VAR_0, 2))
   FUNC_9(VAR_0, 2, FUNC_0("Fast-forwarding submodule %s"), VAR_2);
  else
   ;

  return 1;
 }
 if (FUNC_3(VAR_8, VAR_7)) {
  FUNC_8(VAR_1, VAR_4);
  if (FUNC_12(VAR_0, 3)) {
   FUNC_9(VAR_0, 3, FUNC_0("Fast-forwarding submodule %s to the following commit:"), VAR_2);
   FUNC_10(VAR_0, VAR_7);
  } else if (FUNC_12(VAR_0, 2))
   FUNC_9(VAR_0, 2, FUNC_0("Fast-forwarding submodule %s"), VAR_2);
  else
   ;

  return 1;
 }
 if (!VAR_12)
  return 0;


 VAR_9 = FUNC_2(VAR_0->repo, &VAR_10, VAR_2,
      VAR_7, VAR_8);
 switch (VAR_9) {
 case 0:
  FUNC_9(VAR_0, 1, FUNC_0("Failed to merge submodule %s (merge following commits not found)"), VAR_2);
  break;

 case 1:
  FUNC_9(VAR_0, 1, FUNC_0("Failed to merge submodule %s (not fast-forward)"), VAR_2);
  FUNC_9(VAR_0, 2, FUNC_0("Found a possible merge resolution for the submodule:\n"));
  FUNC_11((struct commit *) VAR_10.objects[0].item);
  FUNC_9(VAR_0, 2, FUNC_0(
         "If this is correct simply add it to the index "
         "for example\n"
         "by using:\n\n"
         "  git update-index --cacheinfo 160000 %s \"%s\"\n\n"
         "which will accept this suggestion.\n"),
         FUNC_7(&VAR_10.objects[0].item->oid), VAR_2);
  break;

 default:
  FUNC_9(VAR_0, 1, FUNC_0("Failed to merge submodule %s (multiple merges found)"), VAR_2);
  for (VAR_11 = 0; VAR_11 < VAR_10.nr; VAR_11++)
   FUNC_11((struct commit *) VAR_10.objects[VAR_11].item);
 }

 FUNC_6(&VAR_10);
 return 0;
}
