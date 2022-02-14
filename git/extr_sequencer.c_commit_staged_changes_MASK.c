
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct todo_list {int dummy; } ;
struct strbuf {int buf; } ;
struct repository {int dummy; } ;
struct TYPE_3__ {char* buf; int len; } ;
struct replay_opts {scalar_t__ current_fixup_count; TYPE_1__ current_fixups; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (struct commit*,int *) ;
 scalar_t__ FUNC_5 (char*,struct object_id*) ;
 scalar_t__ FUNC_6 (int ,struct object_id*) ;
 char* FUNC_7 (struct repository*) ;
 char const* FUNC_8 (struct repository*) ;
 int FUNC_9 (struct repository*,int ) ;
 scalar_t__ FUNC_10 (struct repository*,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct object_id*,struct object_id*) ;
 scalar_t__ FUNC_13 (struct repository*,struct commit**) ;
 int FUNC_14 (struct todo_list*,int ) ;
 int FUNC_15 (struct strbuf*,char const*,int ) ;
 char const* FUNC_16 () ;
 char const* FUNC_17 () ;
 char const* FUNC_18 () ;
 int * FUNC_19 () ;
 char const* FUNC_20 () ;
 char const* FUNC_21 () ;
 scalar_t__ FUNC_22 (struct repository*,int *,struct replay_opts*,unsigned int) ;
 int FUNC_23 (char const*,char*) ;
 int FUNC_24 (struct strbuf*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*,int) ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (char const*,char*) ;
 scalar_t__ FUNC_29 (char const*) ;
 int FUNC_30 (struct commit*,char const*) ;
 scalar_t__ FUNC_31 (char const*,int,char const*,int ) ;

__attribute__((used)) static int FUNC_32(struct repository *VAR_5,
     struct replay_opts *VAR_6,
     struct todo_list *VAR_7)
{
 unsigned int VAR_8 = VAR_0 | VAR_3;
 unsigned int VAR_9 = 0, VAR_10;

 if (FUNC_10(VAR_5, 1))
  return FUNC_2(FUNC_1("cannot rebase: You have unstaged changes."));

 VAR_10 = !FUNC_9(VAR_5, 0);

 if (FUNC_3(FUNC_16())) {
  struct strbuf VAR_11 = VAR_4;
  struct object_id VAR_12, VAR_13;

  if (FUNC_5("HEAD", &VAR_12))
   return FUNC_2(FUNC_1("cannot amend non-existing commit"));
  if (!FUNC_15(&VAR_11, FUNC_16(), 0))
   return FUNC_2(FUNC_1("invalid file: '%s'"), FUNC_16());
  if (FUNC_6(VAR_11.buf, &VAR_13))
   return FUNC_2(FUNC_1("invalid contents: '%s'"),
    FUNC_16());
  if (!VAR_10 && !FUNC_12(&VAR_12, &VAR_13))
   return FUNC_2(FUNC_1("\nYou have uncommitted changes in your "
           "working tree. Please, commit them\n"
           "first and then run 'git rebase "
           "--continue' again."));







  if (!VAR_10 || !VAR_6->current_fixup_count)
   ;
  else if (!FUNC_12(&VAR_12, &VAR_13) ||
    !FUNC_3(FUNC_21())) {

   if (!FUNC_11(FUNC_14(VAR_7, 0))) {
    FUNC_29(FUNC_18());
    FUNC_29(FUNC_20());
    FUNC_29(FUNC_17());
    FUNC_25(&VAR_6->current_fixups);
    VAR_6->current_fixup_count = 0;
   }
  } else {

   const char *VAR_14 = VAR_6->current_fixups.buf;
   int VAR_15 = VAR_6->current_fixups.len;

   VAR_6->current_fixup_count--;
   if (!VAR_15)
    FUNC_0("Incorrect current_fixups:\n%s", VAR_14);
   while (VAR_15 && VAR_14[VAR_15 - 1] != '\n')
    VAR_15--;
   FUNC_26(&VAR_6->current_fixups, VAR_15);
   if (FUNC_31(VAR_14, VAR_15, FUNC_17(),
       0) < 0)
    return FUNC_2(FUNC_1("could not write file: '%s'"),
          FUNC_17());
   if (VAR_6->current_fixup_count > 0 &&
       !FUNC_11(FUNC_14(VAR_7, 0))) {
    VAR_9 = 1;






    if (!FUNC_23(VAR_14, "squash ") &&
        !FUNC_28(VAR_14, "\nsquash "))
     VAR_8 = (VAR_8 & ~VAR_3) | VAR_2;
   } else if (FUNC_11(FUNC_14(VAR_7, 0))) {




    struct commit *VAR_16;
    const char *VAR_17 = FUNC_20();

    if (FUNC_13(VAR_5, &VAR_16) ||
        !(VAR_14 = FUNC_4(VAR_16, ((void*)0))) ||
        FUNC_31(VAR_14, FUNC_27(VAR_14), VAR_17, 0)) {
     FUNC_30(VAR_16, VAR_14);
     return FUNC_2(FUNC_1("could not write file: "
             "'%s'"), VAR_17);
    }
    FUNC_30(VAR_16, VAR_14);
   }
  }

  FUNC_24(&VAR_11);
  VAR_8 |= VAR_1;
 }

 if (VAR_10) {
  const char *VAR_18 = FUNC_7(VAR_5);

  if (FUNC_3(VAR_18) && FUNC_29(VAR_18))
   return FUNC_2(FUNC_1("could not remove CHERRY_PICK_HEAD"));
  if (!VAR_9)
   return 0;
 }

 if (FUNC_22(VAR_5, VAR_9 ? ((void*)0) : FUNC_19(),
      VAR_6, VAR_8))
  return FUNC_2(FUNC_1("could not commit staged changes."));
 FUNC_29(FUNC_16());
 FUNC_29(FUNC_8(VAR_5));
 if (VAR_9) {
  FUNC_29(FUNC_18());
  FUNC_29(FUNC_20());
 }
 if (VAR_6->current_fixup_count > 0) {




  FUNC_29(FUNC_17());
  FUNC_25(&VAR_6->current_fixups);
  VAR_6->current_fixup_count = 0;
 }
 return 0;
}
