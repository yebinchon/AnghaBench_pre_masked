
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {char member_1; char* member_2; int member_7; int member_6; int member_5; int member_4; struct note_data* member_3; int member_0; } ;
struct object_id {int hash; } ;
struct notes_tree {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct note_data {TYPE_1__ buf; scalar_t__ given; int member_3; int * member_2; int member_1; int member_0; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (int*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct notes_tree*,struct object_id*,struct object_id*,int ) ;
 int FUNC_7 (int,char const**,char const*) ;
 int VAR_6 ;
 int FUNC_8 (int ,struct notes_tree*,char*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (struct note_data*) ;
 int FUNC_13 (struct notes_tree*) ;
 struct object_id* FUNC_14 (struct notes_tree*,struct object_id*) ;
 scalar_t__ FUNC_15 (char const*,struct object_id*) ;
 int VAR_7 ;
 struct notes_tree* FUNC_16 (char*,int ) ;
 char* FUNC_17 (struct object_id*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (int,char const**,char const*,struct option*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (struct object_id*,struct note_data*,struct object_id const*) ;
 int FUNC_20 (struct notes_tree*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (int ,struct option*) ;
 int FUNC_22 (struct note_data*,struct object_id*) ;

__attribute__((used)) static int FUNC_23(int VAR_14, const char **VAR_15, const char *VAR_16)
{
 int VAR_17 = 0, VAR_18 = 0;
 const char *VAR_19;
 struct notes_tree *VAR_20;
 struct object_id VAR_21, VAR_22;
 const struct object_id *VAR_23;
 struct note_data VAR_24 = { 0, 0, ((void*)0), &VAR_5 };
 struct option VAR_25[] = {
  { VAR_1, 'm', "message", &VAR_24, FUNC_1("message"),
   FUNC_1("note contents as a string"), VAR_4,
   VAR_9},
  { VAR_1, 'F', "file", &VAR_24, FUNC_1("file"),
   FUNC_1("note contents in a file"), VAR_4,
   VAR_8},
  { VAR_1, 'c', "reedit-message", &VAR_24, FUNC_1("object"),
   FUNC_1("reuse and edit specified note object"), VAR_4,
   VAR_10},
  { VAR_1, 'C', "reuse-message", &VAR_24, FUNC_1("object"),
   FUNC_1("reuse specified note object"), VAR_4,
   VAR_11},
  FUNC_2(0, "allow-empty", &VAR_18,
   FUNC_1("allow storing empty note")),
  FUNC_4(&VAR_17, FUNC_1("replace existing notes"), VAR_3),
  FUNC_3()
 };

 VAR_14 = FUNC_18(VAR_14, VAR_15, VAR_16, VAR_25, VAR_7,
        VAR_2);

 if (2 < VAR_14) {
  FUNC_10(FUNC_5("too many parameters"));
  FUNC_21(VAR_7, VAR_25);
 }

 VAR_19 = VAR_14 > 1 ? VAR_15[1] : "HEAD";

 if (FUNC_15(VAR_19, &VAR_21))
  FUNC_9(FUNC_5("failed to resolve '%s' as a valid ref."), VAR_19);

 VAR_20 = FUNC_16("add", VAR_0);
 VAR_23 = FUNC_14(VAR_20, &VAR_21);

 if (VAR_23) {
  if (!VAR_17) {
   FUNC_13(VAR_20);
   if (VAR_24.given) {
    FUNC_12(&VAR_24);
    return FUNC_10(FUNC_5("Cannot add notes. "
     "Found existing notes for object %s. "
     "Use '-f' to overwrite existing notes"),
     FUNC_17(&VAR_21));
   }







   VAR_15[0] = "edit";
   return FUNC_7(VAR_14, VAR_15, VAR_16);
  }
  FUNC_11(VAR_12, FUNC_5("Overwriting existing notes for object %s\n"),
   FUNC_17(&VAR_21));
 }

 FUNC_19(&VAR_21, &VAR_24, VAR_23);
 if (VAR_24.buf.len || VAR_18) {
  FUNC_22(&VAR_24, &VAR_22);
  if (FUNC_6(VAR_20, &VAR_21, &VAR_22, VAR_6))
   FUNC_0("combine_notes_overwrite failed");
  FUNC_8(VAR_13, VAR_20,
        "Notes added by 'git notes add'");
 } else {
  FUNC_11(VAR_12, FUNC_5("Removing note for object %s\n"),
   FUNC_17(&VAR_21));
  FUNC_20(VAR_20, VAR_21.hash);
  FUNC_8(VAR_13, VAR_20,
        "Notes removed by 'git notes add'");
 }

 FUNC_12(&VAR_24);
 FUNC_13(VAR_20);
 return 0;
}
