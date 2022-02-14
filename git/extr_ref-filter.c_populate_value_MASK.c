
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ push_remote; scalar_t__ push; } ;
struct TYPE_8__ {char const* color; char* head; TYPE_1__ remote_ref; } ;
struct used_atom {char* name; scalar_t__ source; TYPE_2__ u; } ;
struct tag {int dummy; } ;
struct strbuf {int dummy; } ;
struct ref_array_item {int flag; char const* refname; scalar_t__ kind; int objectname; struct atom_value* value; void* symref; } ;
struct object_info {int dummy; } ;
struct object {scalar_t__ type; } ;
struct branch {int dummy; } ;
struct atom_value {int * s; int handler; struct used_atom* atom; } ;
typedef int empty ;
struct TYPE_10__ {int * contentp; } ;
struct TYPE_9__ {int oid; TYPE_5__ info; int content; } ;


 scalar_t__ VAR_0 ;
 struct object_info VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct branch* FUNC_1 (char const*) ;
 char* FUNC_2 (struct branch*,int *) ;
 char* FUNC_3 (struct branch*,int *) ;
 char* FUNC_4 (char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct used_atom*,char const*,struct branch*,int **) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ref_array_item*,int,struct object**,TYPE_3__*,struct strbuf*) ;
 char* FUNC_8 (struct used_atom*,struct ref_array_item*) ;
 char* FUNC_9 (struct used_atom*,struct ref_array_item*) ;
 int * FUNC_10 (struct tag*) ;
 int * FUNC_11 (struct used_atom*,struct ref_array_item*) ;
 scalar_t__ FUNC_12 (char const*,int *,struct atom_value*,struct used_atom*) ;
 int VAR_11 ;
 int FUNC_13 (TYPE_5__*,struct object_info*,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_3__ VAR_14 ;
 TYPE_3__ VAR_15 ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (char const*,int ,int *,int *) ;
 scalar_t__ FUNC_16 (char const*,char*,char const**) ;
 scalar_t__ FUNC_17 (char const*,char*) ;
 int FUNC_18 (struct strbuf*,int,int ,int ,char const*) ;
 int FUNC_19 (char const*,char*) ;
 int VAR_16 ;
 struct used_atom* VAR_17 ;
 int VAR_18 ;
 struct atom_value* FUNC_20 (int,int) ;
 void* FUNC_21 (char const*) ;
 int * FUNC_22 (char*,char const*) ;

__attribute__((used)) static int FUNC_23(struct ref_array_item *VAR_19, struct strbuf *VAR_20)
{
 struct object *VAR_21;
 int VAR_22;
 struct object_info VAR_23 = VAR_1;

 VAR_19->value = FUNC_20(VAR_18, sizeof(struct atom_value));

 if (VAR_12 && (VAR_19->flag & VAR_4) && !VAR_19->symref) {
  VAR_19->symref = FUNC_15(VAR_19->refname, VAR_5,
          ((void*)0), ((void*)0));
  if (!VAR_19->symref)
   VAR_19->symref = FUNC_21("");
 }


 for (VAR_22 = 0; VAR_22 < VAR_18; VAR_22++) {
  struct used_atom *VAR_24 = &VAR_17[VAR_22];
  const char *VAR_25 = VAR_17[VAR_22].name;
  struct atom_value *VAR_26 = &VAR_19->value[VAR_22];
  int VAR_27 = 0;
  const char *VAR_28;
  struct branch *VAR_29 = ((void*)0);

  VAR_26->handler = VAR_8;
  VAR_26->atom = VAR_24;

  if (*VAR_25 == '*') {
   VAR_27 = 1;
   VAR_25++;
  }

  if (FUNC_17(VAR_25, "refname"))
   VAR_28 = FUNC_8(VAR_24, VAR_19);
  else if (!FUNC_19(VAR_25, "worktreepath")) {
   if (VAR_19->kind == VAR_0)
    VAR_26->s = FUNC_11(VAR_24, VAR_19);
   else
    VAR_26->s = FUNC_21("");
   continue;
  }
  else if (FUNC_17(VAR_25, "symref"))
   VAR_28 = FUNC_9(VAR_24, VAR_19);
  else if (FUNC_17(VAR_25, "upstream")) {
   const char *VAR_30;

   if (!FUNC_16(VAR_19->refname, "refs/heads/",
      &VAR_30)) {
    VAR_26->s = FUNC_21("");
    continue;
   }
   VAR_29 = FUNC_1(VAR_30);

   VAR_28 = FUNC_3(VAR_29, ((void*)0));
   if (VAR_28)
    FUNC_5(VAR_24, VAR_28, VAR_29, &VAR_26->s);
   else
    VAR_26->s = FUNC_21("");
   continue;
  } else if (VAR_24->u.remote_ref.push) {
   const char *VAR_31;
   VAR_26->s = FUNC_21("");
   if (!FUNC_16(VAR_19->refname, "refs/heads/",
      &VAR_31))
    continue;
   VAR_29 = FUNC_1(VAR_31);

   if (VAR_24->u.remote_ref.push_remote)
    VAR_28 = ((void*)0);
   else {
    VAR_28 = FUNC_2(VAR_29, ((void*)0));
    if (!VAR_28)
     continue;
   }

   FUNC_6((char *)VAR_26->s);
   FUNC_5(VAR_24, VAR_28, VAR_29, &VAR_26->s);
   continue;
  } else if (FUNC_17(VAR_25, "color:")) {
   VAR_26->s = FUNC_21(VAR_24->u.color);
   continue;
  } else if (!FUNC_19(VAR_25, "flag")) {
   char VAR_32[256], *VAR_33 = VAR_32;
   if (VAR_19->flag & VAR_4)
    VAR_33 = FUNC_4(VAR_33, ",symref");
   if (VAR_19->flag & VAR_3)
    VAR_33 = FUNC_4(VAR_33, ",packed");
   if (VAR_33 == VAR_32)
    VAR_26->s = FUNC_21("");
   else {
    *VAR_33 = '\0';
    VAR_26->s = FUNC_21(VAR_32 + 1);
   }
   continue;
  } else if (!VAR_27 && FUNC_12(VAR_25, &VAR_19->objectname, VAR_26, VAR_24)) {
   continue;
  } else if (!FUNC_19(VAR_25, "HEAD")) {
   if (VAR_24->u.head && !FUNC_19(VAR_19->refname, VAR_24->u.head))
    VAR_26->s = FUNC_21("*");
   else
    VAR_26->s = FUNC_21(" ");
   continue;
  } else if (FUNC_17(VAR_25, "align")) {
   VAR_26->handler = VAR_7;
   VAR_26->s = FUNC_21("");
   continue;
  } else if (!FUNC_19(VAR_25, "end")) {
   VAR_26->handler = VAR_10;
   VAR_26->s = FUNC_21("");
   continue;
  } else if (FUNC_17(VAR_25, "if")) {
   const char *VAR_34;
   if (FUNC_16(VAR_25, "if:", &VAR_34))
    VAR_26->s = FUNC_21(VAR_34);
   else
    VAR_26->s = FUNC_21("");
   VAR_26->handler = VAR_11;
   continue;
  } else if (!FUNC_19(VAR_25, "then")) {
   VAR_26->handler = VAR_16;
   VAR_26->s = FUNC_21("");
   continue;
  } else if (!FUNC_19(VAR_25, "else")) {
   VAR_26->handler = VAR_9;
   VAR_26->s = FUNC_21("");
   continue;
  } else
   continue;

  if (!VAR_27)
   VAR_26->s = FUNC_21(VAR_28);
  else
   VAR_26->s = FUNC_22("%s^{}", VAR_28);
  FUNC_6((char *)VAR_28);
 }

 for (VAR_22 = 0; VAR_22 < VAR_18; VAR_22++) {
  struct atom_value *VAR_35 = &VAR_19->value[VAR_22];
  if (VAR_35->s == ((void*)0) && VAR_17[VAR_22].source == VAR_6)
   return FUNC_18(VAR_20, -1, FUNC_0("missing object %s for %s"),
            FUNC_14(&VAR_19->objectname), VAR_19->refname);
 }

 if (VAR_13)
  VAR_14.info.contentp = &VAR_14.content;
 if (!FUNC_13(&VAR_14.info, &VAR_23, sizeof(VAR_23)) &&
     !FUNC_13(&VAR_15.info, &VAR_23, sizeof(VAR_23)))
  return 0;


 VAR_14.oid = VAR_19->objectname;
 if (FUNC_7(VAR_19, 0, &VAR_21, &VAR_14, VAR_20))
  return -1;





 if (!VAR_13 || (VAR_21->type != VAR_2))
  return 0;





 VAR_15.oid = *FUNC_10((struct tag *)VAR_21);







 return FUNC_7(VAR_19, 1, &VAR_21, &VAR_15, VAR_20);
}
