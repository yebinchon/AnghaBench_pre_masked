
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct object_id {int dummy; } ;
struct notes_tree {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (int ,char*,char const**,int ,int ) ;
 struct option FUNC_5 (int*,int ,int ) ;
 int VAR_1 ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct notes_tree*,struct object_id*,struct object_id const*,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ,struct notes_tree*,char*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (struct notes_tree*) ;
 struct object_id* FUNC_13 (struct notes_tree*,struct object_id*) ;
 scalar_t__ FUNC_14 (char const*,struct object_id*) ;
 int VAR_3 ;
 struct notes_tree* FUNC_15 (char*,int ) ;
 int FUNC_16 (int,char const*) ;
 char* FUNC_17 (struct object_id*) ;
 int FUNC_18 (int,char const**,char const*,struct option*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_19 (int ,struct option*) ;

__attribute__((used)) static int FUNC_20(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 const struct object_id *VAR_12, *VAR_13;
 const char *VAR_14;
 struct object_id VAR_15, VAR_16;
 struct notes_tree *VAR_17;
 const char *VAR_18 = ((void*)0);
 struct option VAR_19[] = {
  FUNC_5(&VAR_10, FUNC_1("replace existing notes"), VAR_1),
  FUNC_2(0, "stdin", &VAR_11, FUNC_1("read objects from stdin")),
  FUNC_4(0, "for-rewrite", &VAR_18, FUNC_1("command"),
      FUNC_1("load rewriting config for <command> (implies "
         "--stdin)")),
  FUNC_3()
 };

 VAR_6 = FUNC_18(VAR_6, VAR_7, VAR_8, VAR_19, VAR_3,
        0);

 if (VAR_11 || VAR_18) {
  if (VAR_6) {
   FUNC_10(FUNC_6("too many parameters"));
   FUNC_19(VAR_3, VAR_19);
  } else {
   return FUNC_16(VAR_10, VAR_18);
  }
 }

 if (VAR_6 < 1) {
  FUNC_10(FUNC_6("too few parameters"));
  FUNC_19(VAR_3, VAR_19);
 }
 if (2 < VAR_6) {
  FUNC_10(FUNC_6("too many parameters"));
  FUNC_19(VAR_3, VAR_19);
 }

 if (FUNC_14(VAR_7[0], &VAR_16))
  FUNC_9(FUNC_6("failed to resolve '%s' as a valid ref."), VAR_7[0]);

 VAR_14 = 1 < VAR_6 ? VAR_7[1] : "HEAD";

 if (FUNC_14(VAR_14, &VAR_15))
  FUNC_9(FUNC_6("failed to resolve '%s' as a valid ref."), VAR_14);

 VAR_17 = FUNC_15("copy", VAR_0);
 VAR_13 = FUNC_13(VAR_17, &VAR_15);

 if (VAR_13) {
  if (!VAR_10) {
   VAR_9 = FUNC_10(FUNC_6("Cannot copy notes. Found existing "
           "notes for object %s. Use '-f' to "
           "overwrite existing notes"),
           FUNC_17(&VAR_15));
   goto out;
  }
  FUNC_11(VAR_4, FUNC_6("Overwriting existing notes for object %s\n"),
   FUNC_17(&VAR_15));
 }

 VAR_12 = FUNC_13(VAR_17, &VAR_16);
 if (!VAR_12) {
  VAR_9 = FUNC_10(FUNC_6("missing notes on source object %s. Cannot "
          "copy."), FUNC_17(&VAR_16));
  goto out;
 }

 if (FUNC_7(VAR_17, &VAR_15, VAR_12, VAR_2))
  FUNC_0("combine_notes_overwrite failed");
 FUNC_8(VAR_5, VAR_17,
       "Notes added by 'git notes copy'");
out:
 FUNC_12(VAR_17);
 return VAR_9;
}
