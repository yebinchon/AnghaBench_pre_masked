
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct transport {TYPE_3__* remote; int url; TYPE_2__* vtable; int push_options; TYPE_1__* smart_options; int verbose; } ;
struct string_list {int dummy; } ;
struct repository {int dummy; } ;
struct refspec {int dummy; } ;
struct ref {int status; struct ref* next; int new_oid; } ;
struct oid_array {int dummy; } ;
struct argv_array {int dummy; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int (* push_refs ) (struct transport*,struct ref*,int) ;struct ref* (* get_refs_list ) (struct transport*,int,struct argv_array*) ;} ;
struct TYPE_6__ {scalar_t__ cas; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct oid_array VAR_6 ;
 int VAR_7 ;



 struct string_list VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,TYPE_3__*,struct ref*) ;
 int FUNC_2 (struct argv_array*) ;
 scalar_t__ FUNC_3 (struct ref*,struct refspec*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct string_list*) ;
 scalar_t__ FUNC_6 (struct repository*,struct oid_array*,int ,struct string_list*) ;
 int FUNC_7 (int ,char*) ;
 struct ref* FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct ref*,struct ref**,struct refspec*,int) ;
 int FUNC_13 (struct oid_array*,int *) ;
 int FUNC_14 (struct oid_array*) ;
 int FUNC_15 (struct ref*) ;
 int FUNC_16 (struct repository*,struct oid_array*,TYPE_3__*,struct refspec*,int ,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct refspec*,struct argv_array*) ;
 scalar_t__ FUNC_19 (struct transport*,struct ref*) ;
 int FUNC_20 (struct ref*,int,int) ;
 int FUNC_21 (struct transport*,struct ref*,int) ;
 int VAR_22 ;
 int FUNC_22 (struct string_list*,int ) ;
 struct ref* FUNC_23 (struct transport*,int,struct argv_array*) ;
 int FUNC_24 (struct transport*,struct ref*,int) ;
 int FUNC_25 (char*,char*,struct repository*) ;
 int FUNC_26 (char*,char*,struct repository*) ;
 scalar_t__ FUNC_27 () ;
 int FUNC_28 (int ,struct ref*,int,int,unsigned int*) ;
 int FUNC_29 (struct ref*) ;
 int FUNC_30 (TYPE_3__*,struct ref*,int) ;

int FUNC_31(struct repository *VAR_23,
     struct transport *VAR_24,
     struct refspec *VAR_25, int VAR_26,
     unsigned int *VAR_27)
{
 *VAR_27 = 0;

 if (FUNC_27() < 0)
  return -1;

 if (VAR_24->vtable->push_refs) {
  struct ref *VAR_28;
  struct ref *VAR_29 = FUNC_8();
  int VAR_30 = VAR_4;
  int VAR_31 = (VAR_24->verbose > 0);
  int VAR_32 = (VAR_24->verbose < 0);
  int VAR_33 = VAR_26 & VAR_16;
  int VAR_34 = VAR_26 & VAR_11;
  int VAR_35, VAR_36, VAR_37;
  struct argv_array VAR_38 = VAR_0;

  if (FUNC_3(VAR_29, VAR_25) < 0)
   return -1;

  FUNC_18(VAR_25, &VAR_38);

  FUNC_25("transport_push", "get_refs_list", VAR_23);
  VAR_28 = VAR_24->vtable->get_refs_list(VAR_24, 1,
              &VAR_38);
  FUNC_26("transport_push", "get_refs_list", VAR_23);

  FUNC_2(&VAR_38);

  if (VAR_26 & VAR_9)
   VAR_30 |= VAR_1;
  if (VAR_26 & VAR_14)
   VAR_30 |= VAR_3;
  if (VAR_26 & VAR_17)
   VAR_30 |= VAR_5;
  if (VAR_26 & VAR_12)
   VAR_30 |= VAR_2;

  if (FUNC_12(VAR_29, &VAR_28, VAR_25, VAR_30))
   return -1;

  if (VAR_24->smart_options &&
      VAR_24->smart_options->cas &&
      !FUNC_10(VAR_24->smart_options->cas))
   FUNC_1(VAR_24->smart_options->cas,
           VAR_24->remote, VAR_28);

  FUNC_20(VAR_28,
   VAR_26 & VAR_14,
   VAR_26 & VAR_13);

  if (!(VAR_26 & VAR_15))
   if (FUNC_19(VAR_24, VAR_28))
    return -1;

  if ((VAR_26 & (VAR_21 |
         VAR_20)) &&
      !FUNC_9()) {
   struct ref *VAR_39 = VAR_28;
   struct oid_array VAR_40 = VAR_6;

   FUNC_25("transport_push", "push_submodules", VAR_23);
   for (; VAR_39; VAR_39 = VAR_39->next)
    if (!FUNC_11(&VAR_39->new_oid))
     FUNC_13(&VAR_40,
         &VAR_39->new_oid);

   if (!FUNC_16(VAR_23,
            &VAR_40,
            VAR_24->remote,
            VAR_25,
            VAR_24->push_options,
            VAR_34)) {
    FUNC_14(&VAR_40);
    FUNC_26("transport_push", "push_submodules", VAR_23);
    FUNC_4(FUNC_0("failed to push all needed submodules"));
   }
   FUNC_14(&VAR_40);
   FUNC_26("transport_push", "push_submodules", VAR_23);
  }

  if (((VAR_26 & VAR_19) ||
       ((VAR_26 & (VAR_21 |
    VAR_20)) &&
        !VAR_34)) && !FUNC_9()) {
   struct ref *VAR_41 = VAR_28;
   struct string_list VAR_42 = VAR_8;
   struct oid_array VAR_43 = VAR_6;

   FUNC_25("transport_push", "check_submodules", VAR_23);
   for (; VAR_41; VAR_41 = VAR_41->next)
    if (!FUNC_11(&VAR_41->new_oid))
     FUNC_13(&VAR_43,
         &VAR_41->new_oid);

   if (FUNC_6(VAR_23,
           &VAR_43,
           VAR_24->remote->name,
           &VAR_42)) {
    FUNC_14(&VAR_43);
    FUNC_26("transport_push", "check_submodules", VAR_23);
    FUNC_5(&VAR_42);
   }
   FUNC_22(&VAR_42, 0);
   FUNC_14(&VAR_43);
   FUNC_26("transport_push", "check_submodules", VAR_23);
  }

  if (!(VAR_26 & VAR_20)) {
   FUNC_25("transport_push", "push_refs", VAR_23);
   VAR_35 = VAR_24->vtable->push_refs(VAR_24, VAR_28, VAR_26);
   FUNC_26("transport_push", "push_refs", VAR_23);
  } else
   VAR_35 = 0;
  VAR_37 = FUNC_15(VAR_28);
  VAR_36 = VAR_35 | VAR_37;

  if ((VAR_26 & VAR_10) && VAR_37) {
   struct ref *VAR_44;
   for (VAR_44 = VAR_28; VAR_44; VAR_44 = VAR_44->next)
    switch (VAR_44->status) {
    case 130:
    case 128:
    case 129:
     VAR_44->status = VAR_7;
     break;
    default:
     break;
    }
  }

  if (!VAR_32 || VAR_37)
   FUNC_28(VAR_24->url, VAR_28,
     VAR_31 | VAR_33, VAR_33,
     VAR_27);

  if (VAR_26 & VAR_18)
   FUNC_21(VAR_24, VAR_28, VAR_34);

  if (!(VAR_26 & (VAR_11 |
          VAR_20))) {
   struct ref *VAR_45;
   for (VAR_45 = VAR_28; VAR_45; VAR_45 = VAR_45->next)
    FUNC_30(VAR_24->remote, VAR_45, VAR_31);
  }

  if (VAR_33 && !VAR_35)
   FUNC_17("Done");
  else if (!VAR_32 && !VAR_36 && !FUNC_29(VAR_28))
   FUNC_7(VAR_22, "Everything up-to-date\n");

  return VAR_36;
 }
 return 1;
}
