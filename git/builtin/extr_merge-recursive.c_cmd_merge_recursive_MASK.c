
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct merge_options {char* subtree_shift; char const* branch1; char const* branch2; int verbosity; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct object_id const**) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,struct object_id*) ;
 int FUNC_9 (struct merge_options*,int ) ;
 int FUNC_10 (struct merge_options*,struct object_id*,struct object_id*,unsigned int,struct object_id const**,struct commit**) ;
 scalar_t__ FUNC_11 (struct merge_options*,char const*) ;
 int FUNC_12 (char*,char*,char*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int VAR_1 ;
 int FUNC_15 (int ,char const*) ;
 int FUNC_16 (int ,int,char const*) ;
 struct object_id* FUNC_17 (int) ;

int FUNC_18(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 const struct object_id *VAR_5[21];
 unsigned VAR_6 = 0;
 int VAR_7, VAR_8;
 struct object_id VAR_9, VAR_10;
 struct merge_options VAR_11;
 char *VAR_12, *VAR_13;
 struct commit *VAR_14;

 FUNC_9(&VAR_11, VAR_1);
 if (VAR_3[0] && FUNC_6(VAR_3[0], "-subtree"))
  VAR_11.subtree_shift = "";

 if (VAR_2 < 4)
  FUNC_15(VAR_0, VAR_3[0]);

 for (VAR_7 = 1; VAR_7 < VAR_2; ++VAR_7) {
  const char *VAR_15 = VAR_3[VAR_7];

  if (FUNC_14(VAR_15, "--")) {
   if (!VAR_15[2])
    break;
   if (FUNC_11(&VAR_11, VAR_15 + 2))
    FUNC_4(FUNC_2("unknown option %s"), VAR_15);
   continue;
  }
  if (VAR_6 < FUNC_0(VAR_5)-1) {
   struct object_id *VAR_16 = FUNC_17(sizeof(struct object_id));
   if (FUNC_8(VAR_3[VAR_7], VAR_16))
    FUNC_4(FUNC_2("could not parse object '%s'"), VAR_3[VAR_7]);
   VAR_5[VAR_6++] = VAR_16;
  }
  else
   FUNC_16(FUNC_1("cannot handle more than %d base. "
       "Ignoring %s.",
       "cannot handle more than %d bases. "
       "Ignoring %s.",
        (int)FUNC_0(VAR_5)-1),
    (int)FUNC_0(VAR_5)-1, VAR_3[VAR_7]);
 }
 if (VAR_2 - VAR_7 != 3)
  FUNC_4(FUNC_2("not handling anything other than two heads merge."));

 if (FUNC_13(VAR_1))
  FUNC_5("merge");

 VAR_11.branch1 = VAR_3[++VAR_7];
 VAR_11.branch2 = VAR_3[++VAR_7];

 if (FUNC_8(VAR_11.branch1, &VAR_9))
  FUNC_4(FUNC_2("could not resolve ref '%s'"), VAR_11.branch1);
 if (FUNC_8(VAR_11.branch2, &VAR_10))
  FUNC_4(FUNC_2("could not resolve ref '%s'"), VAR_11.branch2);

 VAR_11.branch1 = VAR_12 = FUNC_3(VAR_11.branch1);
 VAR_11.branch2 = VAR_13 = FUNC_3(VAR_11.branch2);

 if (VAR_11.verbosity >= 3)
  FUNC_12(FUNC_2("Merging %s with %s\n"), VAR_11.branch1, VAR_11.branch2);

 VAR_8 = FUNC_10(&VAR_11, &VAR_9, &VAR_10, VAR_6, VAR_5, &VAR_14);

 FUNC_7(VAR_12);
 FUNC_7(VAR_13);

 if (VAR_8 < 0)
  return 128;
 return VAR_8;
}
