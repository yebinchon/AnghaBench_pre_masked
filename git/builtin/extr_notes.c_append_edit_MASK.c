
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct option {char member_1; char* member_2; int member_7; int member_6; int member_5; int member_4; struct note_data* member_3; int member_0; } ;
struct object_id {int hash; } ;
struct notes_tree {int dummy; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct note_data {TYPE_1__ buf; scalar_t__ given; int member_3; int * member_2; int member_1; int member_0; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct notes_tree*,struct object_id*,struct object_id*,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,struct notes_tree*,char*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct note_data*) ;
 int FUNC_12 (struct notes_tree*) ;
 struct object_id* FUNC_13 (struct notes_tree*,struct object_id*) ;
 scalar_t__ FUNC_14 (char const*,struct object_id*) ;
 char** VAR_6 ;
 char** VAR_7 ;
 struct notes_tree* FUNC_15 (char const*,int ) ;
 char* FUNC_16 (struct object_id*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_18 (struct object_id*,struct note_data*,struct object_id const*) ;
 char* FUNC_19 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_20 (struct notes_tree*,int ) ;
 int VAR_12 ;
 int FUNC_21 (TYPE_1__*,unsigned long) ;
 int FUNC_22 (TYPE_1__*,int ,char*,unsigned long) ;
 int FUNC_23 (char const*,char*) ;
 int VAR_13 ;
 int FUNC_24 (char const* const*,struct option*) ;
 int FUNC_25 (struct note_data*,struct object_id*) ;
 char* FUNC_26 (char*,char const*) ;

__attribute__((used)) static int FUNC_27(int VAR_14, const char **VAR_15, const char *VAR_16)
{
 int VAR_17 = 0;
 const char *VAR_18;
 struct notes_tree *VAR_19;
 struct object_id VAR_20, VAR_21;
 const struct object_id *VAR_22;
 char *VAR_23;
 const char * const *VAR_24;
 struct note_data VAR_25 = { 0, 0, ((void*)0), &VAR_4 };
 struct option VAR_26[] = {
  { VAR_1, 'm', "message", &VAR_25, FUNC_1("message"),
   FUNC_1("note contents as a string"), VAR_3,
   VAR_9},
  { VAR_1, 'F', "file", &VAR_25, FUNC_1("file"),
   FUNC_1("note contents in a file"), VAR_3,
   VAR_8},
  { VAR_1, 'c', "reedit-message", &VAR_25, FUNC_1("object"),
   FUNC_1("reuse and edit specified note object"), VAR_3,
   VAR_10},
  { VAR_1, 'C', "reuse-message", &VAR_25, FUNC_1("object"),
   FUNC_1("reuse specified note object"), VAR_3,
   VAR_11},
  FUNC_2(0, "allow-empty", &VAR_17,
   FUNC_1("allow storing empty note")),
  FUNC_3()
 };
 int VAR_27 = !FUNC_23(VAR_15[0], "edit");

 VAR_24 = VAR_27 ? VAR_7 : VAR_6;
 VAR_14 = FUNC_17(VAR_14, VAR_15, VAR_16, VAR_26, VAR_24,
        VAR_2);

 if (2 < VAR_14) {
  FUNC_8(FUNC_4("too many parameters"));
  FUNC_24(VAR_24, VAR_26);
 }

 if (VAR_25.given && VAR_27)
  FUNC_9(VAR_12, "%s", FUNC_4("The -m/-F/-c/-C options have been deprecated "
   "for the 'edit' subcommand.\n"
   "Please use 'git notes add -f -m/-F/-c/-C' instead.\n"));

 VAR_18 = 1 < VAR_14 ? VAR_15[1] : "HEAD";

 if (FUNC_14(VAR_18, &VAR_20))
  FUNC_7(FUNC_4("failed to resolve '%s' as a valid ref."), VAR_18);

 VAR_19 = FUNC_15(VAR_15[0], VAR_0);
 VAR_22 = FUNC_13(VAR_19, &VAR_20);

 FUNC_18(&VAR_20, &VAR_25, VAR_27 && VAR_22 ? VAR_22 : ((void*)0));

 if (VAR_22 && !VAR_27) {

  unsigned long VAR_28;
  enum object_type VAR_29;
  char *VAR_30 = FUNC_19(VAR_22, &VAR_29, &VAR_28);

  FUNC_21(&VAR_25.buf, VAR_28 + 1);
  if (VAR_25.buf.len && VAR_30 && VAR_28)
   FUNC_22(&VAR_25.buf, 0, "\n", 1);
  if (VAR_30 && VAR_28)
   FUNC_22(&VAR_25.buf, 0, VAR_30, VAR_28);
  FUNC_10(VAR_30);
 }

 if (VAR_25.buf.len || VAR_17) {
  FUNC_25(&VAR_25, &VAR_21);
  if (FUNC_5(VAR_19, &VAR_20, &VAR_21, VAR_5))
   FUNC_0("combine_notes_overwrite failed");
  VAR_23 = FUNC_26("Notes added by 'git notes %s'", VAR_15[0]);
 } else {
  FUNC_9(VAR_12, FUNC_4("Removing note for object %s\n"),
   FUNC_16(&VAR_20));
  FUNC_20(VAR_19, VAR_20.hash);
  VAR_23 = FUNC_26("Notes removed by 'git notes %s'", VAR_15[0]);
 }
 FUNC_6(VAR_13, VAR_19, VAR_23);

 FUNC_10(VAR_23);
 FUNC_11(&VAR_25);
 FUNC_12(VAR_19);
 return 0;
}
