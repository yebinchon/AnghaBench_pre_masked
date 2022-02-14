
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit_list {struct commit* item; scalar_t__ next; } ;
struct commit {int dummy; } ;
struct branch {int dummy; } ;


 int FUNC_0 (struct commit**,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 struct branch* FUNC_3 (int *) ;
 char* FUNC_4 (struct branch*,int *) ;
 int FUNC_5 (int ,...) ;
 int FUNC_6 (struct commit**) ;
 int FUNC_7 (struct commit_list*) ;
 struct commit_list* FUNC_8 (struct commit*,struct commit*) ;
 struct commit_list* FUNC_9 (struct commit*,int,struct commit**) ;
 scalar_t__ FUNC_10 (char const*,struct object_id*) ;
 int FUNC_11 (struct commit*,struct commit*) ;
 struct commit* FUNC_12 (struct object_id*,char*) ;
 struct commit* FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;

__attribute__((used)) static struct commit *FUNC_15(const char *VAR_1,
          struct commit **VAR_2,
          int VAR_3)
{
 struct commit *VAR_4 = ((void*)0);
 struct commit **VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 if (VAR_1 && FUNC_14(VAR_1, "auto")) {
  VAR_4 = FUNC_13(VAR_1);
  if (!VAR_4)
   FUNC_5(FUNC_2("unknown commit %s"), VAR_1);
 } else if ((VAR_1 && !FUNC_14(VAR_1, "auto")) || VAR_0) {
  struct branch *VAR_8 = FUNC_3(((void*)0));
  const char *VAR_9 = FUNC_4(VAR_8, ((void*)0));
  if (VAR_9) {
   struct commit_list *VAR_10;
   struct commit *VAR_11;
   struct object_id VAR_12;

   if (FUNC_10(VAR_9, &VAR_12))
    FUNC_5(FUNC_2("failed to resolve '%s' as a valid ref"), VAR_9);
   VAR_11 = FUNC_12(&VAR_12, "upstream base");
   VAR_10 = FUNC_9(VAR_11, VAR_3, VAR_2);

   if (!VAR_10 || VAR_10->next)
    FUNC_5(FUNC_2("could not find exact merge base"));
   VAR_4 = VAR_10->item;
   FUNC_7(VAR_10);
  } else {
   FUNC_5(FUNC_2("failed to get upstream, if you want to record base commit automatically,\n"
         "please use git branch --set-upstream-to to track a remote branch.\n"
         "Or you could specify base commit by --base=<base-commit-id> manually"));
  }
 }

 FUNC_0(VAR_5, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5[VAR_6] = VAR_2[VAR_6];

 VAR_7 = VAR_3;




 while (VAR_7 > 1) {
  for (VAR_6 = 0; VAR_6 < VAR_7 / 2; VAR_6++) {
   struct commit_list *VAR_13;
   VAR_13 = FUNC_8(VAR_5[2 * VAR_6], VAR_5[2 * VAR_6 + 1]);
   if (!VAR_13 || VAR_13->next)
    FUNC_5(FUNC_2("failed to find exact merge base"));

   VAR_5[VAR_6] = VAR_13->item;
  }

  if (VAR_7 % 2)
   VAR_5[VAR_6] = VAR_5[2 * VAR_6];
  VAR_7 = FUNC_1(VAR_7, 2);
 }

 if (!FUNC_11(VAR_4, VAR_5[0]))
  FUNC_5(FUNC_2("base commit should be the ancestor of revision list"));

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4 == VAR_2[VAR_6])
   FUNC_5(FUNC_2("base commit shouldn't be in revision list"));
 }

 FUNC_6(VAR_5);
 return VAR_4;
}
