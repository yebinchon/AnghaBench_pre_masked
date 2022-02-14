
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct merge_options {char* subtree_shift; int show_rename_progress; char const* branch1; int branch2; int renormalize; } ;
struct lock_file {int dummy; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lock_file VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct commit_list**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct lock_file*,int ) ;
 int FUNC_7 (struct merge_options*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct merge_options*,struct commit*,int ,struct commit_list*,struct commit**) ;
 TYPE_1__* FUNC_10 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (struct merge_options*,int ) ;
 scalar_t__ FUNC_12 (int ,int,int ) ;
 int VAR_6 ;
 int FUNC_13 (char const*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int ,char const*,int,int *,struct commit_list*,char const*,struct commit_list*) ;
 scalar_t__ FUNC_15 (int *,struct lock_file*,int) ;
 int * VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_16(const char *VAR_11, struct commit_list *VAR_12,
         struct commit_list *VAR_13,
         struct commit *VAR_14)
{
 const char *VAR_15 = "HEAD";

 if (FUNC_12(VAR_3, VAR_4, 0) < 0)
  return FUNC_3(FUNC_0("Unable to write index."));

 if (!FUNC_13(VAR_11, "recursive") || !FUNC_13(VAR_11, "subtree")) {
  struct lock_file VAR_16 = VAR_2;
  int VAR_17, VAR_18;
  struct commit *VAR_19;
  struct commit_list *VAR_20 = ((void*)0);
  struct merge_options VAR_21;
  struct commit_list *VAR_22;

  if (VAR_13->next) {
   FUNC_3(FUNC_0("Not handling anything other than two heads merge."));
   return 2;
  }

  FUNC_7(&VAR_21, VAR_8);
  if (!FUNC_13(VAR_11, "subtree"))
   VAR_21.subtree_shift = "";

  VAR_21.renormalize = VAR_5;
  VAR_21.show_rename_progress =
   VAR_6 == -1 ? FUNC_8(2) : VAR_6;

  for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++)
   if (FUNC_11(&VAR_21, VAR_9[VAR_18]))
    FUNC_2(FUNC_0("Unknown option for merge-recursive: -X%s"), VAR_9[VAR_18]);

  VAR_21.branch1 = VAR_15;
  VAR_21.branch2 = FUNC_10(VAR_13->item)->name;

  for (VAR_22 = VAR_12; VAR_22; VAR_22 = VAR_22->next)
   FUNC_1(VAR_22->item, &VAR_20);

  FUNC_6(&VAR_16, VAR_1);
  VAR_17 = FUNC_9(&VAR_21, VAR_14,
    VAR_13->item, VAR_20, &VAR_19);
  if (VAR_17 < 0)
   FUNC_4(128);
  if (FUNC_15(&VAR_7, &VAR_16,
           VAR_0 | VAR_4))
   FUNC_2(FUNC_0("unable to write %s"), FUNC_5());
  return VAR_17 ? 0 : 1;
 } else {
  return FUNC_14(VAR_8,
      VAR_11, VAR_10, VAR_9,
      VAR_12, VAR_15, VAR_13);
 }
}
