
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpack_trees_options {char** msgs; int show_all_errors; TYPE_1__* unpack_rejects; int msgs_to_free; } ;
struct TYPE_2__ {int strdup_strings; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,char const*,char const*,char const*) ;
 int FUNC_4 (char const*,char*) ;

void FUNC_5(struct unpack_trees_options *VAR_11,
      const char *VAR_12)
{
 int VAR_13;
 const char **VAR_14 = VAR_11->msgs;
 const char *VAR_15;

 FUNC_2(&VAR_11->msgs_to_free);

 if (!FUNC_4(VAR_12, "checkout"))
  VAR_15 = VAR_10
        ? FUNC_1("Your local changes to the following files would be overwritten by checkout:\n%%s"
     "Please commit your changes or stash them before you switch branches.")
        : FUNC_1("Your local changes to the following files would be overwritten by checkout:\n%%s");
 else if (!FUNC_4(VAR_12, "merge"))
  VAR_15 = VAR_10
        ? FUNC_1("Your local changes to the following files would be overwritten by merge:\n%%s"
     "Please commit your changes or stash them before you merge.")
        : FUNC_1("Your local changes to the following files would be overwritten by merge:\n%%s");
 else
  VAR_15 = VAR_10
        ? FUNC_1("Your local changes to the following files would be overwritten by %s:\n%%s"
     "Please commit your changes or stash them before you %s.")
        : FUNC_1("Your local changes to the following files would be overwritten by %s:\n%%s");
 VAR_14[VAR_9] = VAR_14[VAR_2] =
  FUNC_3(&VAR_11->msgs_to_free, VAR_15, VAR_12, VAR_12);

 VAR_14[VAR_1] =
  FUNC_1("Updating the following directories would lose untracked files in them:\n%s");

 if (!FUNC_4(VAR_12, "checkout"))
  VAR_15 = VAR_10
        ? FUNC_1("The following untracked working tree files would be removed by checkout:\n%%s"
     "Please move or remove them before you switch branches.")
        : FUNC_1("The following untracked working tree files would be removed by checkout:\n%%s");
 else if (!FUNC_4(VAR_12, "merge"))
  VAR_15 = VAR_10
        ? FUNC_1("The following untracked working tree files would be removed by merge:\n%%s"
     "Please move or remove them before you merge.")
        : FUNC_1("The following untracked working tree files would be removed by merge:\n%%s");
 else
  VAR_15 = VAR_10
        ? FUNC_1("The following untracked working tree files would be removed by %s:\n%%s"
     "Please move or remove them before you %s.")
        : FUNC_1("The following untracked working tree files would be removed by %s:\n%%s");
 VAR_14[VAR_8] =
  FUNC_3(&VAR_11->msgs_to_free, VAR_15, VAR_12, VAR_12);

 if (!FUNC_4(VAR_12, "checkout"))
  VAR_15 = VAR_10
        ? FUNC_1("The following untracked working tree files would be overwritten by checkout:\n%%s"
     "Please move or remove them before you switch branches.")
        : FUNC_1("The following untracked working tree files would be overwritten by checkout:\n%%s");
 else if (!FUNC_4(VAR_12, "merge"))
  VAR_15 = VAR_10
        ? FUNC_1("The following untracked working tree files would be overwritten by merge:\n%%s"
     "Please move or remove them before you merge.")
        : FUNC_1("The following untracked working tree files would be overwritten by merge:\n%%s");
 else
  VAR_15 = VAR_10
        ? FUNC_1("The following untracked working tree files would be overwritten by %s:\n%%s"
     "Please move or remove them before you %s.")
        : FUNC_1("The following untracked working tree files would be overwritten by %s:\n%%s");
 VAR_14[VAR_7] =
  FUNC_3(&VAR_11->msgs_to_free, VAR_15, VAR_12, VAR_12);





 VAR_14[VAR_0] = FUNC_1("Entry '%s' overlaps with '%s'.  Cannot bind.");

 VAR_14[VAR_3] =
  FUNC_1("Cannot update sparse checkout: the following entries are not up to date:\n%s");
 VAR_14[VAR_4] =
  FUNC_1("The following working tree files would be overwritten by sparse checkout update:\n%s");
 VAR_14[VAR_5] =
  FUNC_1("The following working tree files would be removed by sparse checkout update:\n%s");
 VAR_14[VAR_6] =
  FUNC_1("Cannot update submodule:\n%s");

 VAR_11->show_all_errors = 1;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_11->unpack_rejects); VAR_13++)
  VAR_11->unpack_rejects[VAR_13].strdup_strings = 1;
}
