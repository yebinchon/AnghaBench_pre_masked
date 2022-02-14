
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct checkout_opts {char* new_branch; int count_checkout_paths; scalar_t__ accept_pathspec; int prefix; int source_tree; int quiet; } ;
struct branch_info {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct branch_info*,struct checkout_opts*,struct object_id*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char const*,struct object_id*,int*) ;
 int FUNC_8 (int ,char const*) ;

__attribute__((used)) static int FUNC_9(int VAR_0, const char **VAR_1,
    int VAR_2,
    struct branch_info *VAR_3,
    struct checkout_opts *VAR_4,
    struct object_id *VAR_5,
    int *VAR_6)
{
 const char **VAR_7 = &VAR_4->new_branch;
 int VAR_8 = 0;
 const char *VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 if (!VAR_0)
  return 0;

 if (!VAR_4->accept_pathspec) {
  if (VAR_0 > 1)
   FUNC_2(FUNC_0("only one reference expected"));
  VAR_11 = 1;
 }

 VAR_9 = VAR_1[0];
 VAR_10 = -1;
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_4->accept_pathspec && !FUNC_6(VAR_1[VAR_12], "--")) {
   VAR_10 = VAR_12;
   break;
  }
 }
 if (VAR_10 == 0)
  return 1;
 else if (VAR_10 == 1)
  VAR_11 = 1;
 else if (VAR_10 >= 2)
  FUNC_2(FUNC_0("only one reference expected, %d given."), VAR_10);
 VAR_4->count_checkout_paths = !VAR_4->quiet && !VAR_11;

 if (!FUNC_6(VAR_9, "-"))
  VAR_9 = "@{-1}";

 if (FUNC_3(VAR_9, VAR_5)) {
  int VAR_13 = VAR_2;

  int VAR_14 = !VAR_11 &&
   FUNC_1(VAR_4->prefix, VAR_9);

  if (!VAR_11 && !FUNC_4(VAR_9))
   VAR_13 = 0;





  if (!(VAR_0 == 1 && !VAR_11) &&
      !(VAR_0 == 2 && VAR_11) &&
      VAR_4->accept_pathspec)
   VAR_13 = 0;

  if (VAR_13) {
   const char *VAR_15 = FUNC_7(VAR_9, VAR_5,
          VAR_6);
   if (VAR_15) {
    if (VAR_14)
     FUNC_2(FUNC_0("'%s' could be both a local file and a tracking branch.\n"
           "Please use -- (and optionally --no-guess) to disambiguate"),
         VAR_9);
    *VAR_7 = VAR_9;
    VAR_9 = VAR_15;

   } else {
    VAR_13 = 0;
   }
  }

  if (!VAR_13) {
   if (VAR_11)
    FUNC_2(FUNC_0("invalid reference: %s"), VAR_9);
   return VAR_8;
  }
 }


 VAR_8++;
 VAR_1++;
 VAR_0--;

 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_9);

 if (!VAR_4->source_tree)
  FUNC_2(FUNC_0("reference is not a tree: %s"), VAR_9);

 if (!VAR_11) {






  if (VAR_0)
   FUNC_8(VAR_4->prefix, VAR_9);
 } else if (VAR_4->accept_pathspec) {
  VAR_8++;
  VAR_1++;
  VAR_0--;
 }

 return VAR_8;
}
