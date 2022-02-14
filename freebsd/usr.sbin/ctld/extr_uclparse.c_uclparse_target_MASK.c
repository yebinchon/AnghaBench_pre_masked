
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct target {int t_name; TYPE_5__* t_auth_group; int t_alias; } ;
struct pport {int pp_ports; } ;
struct port {int dummy; } ;
struct auth_portal {int dummy; } ;
struct auth_name {int dummy; } ;
struct TYPE_18__ {struct target* ag_target; int * ag_name; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 struct auth_name* FUNC_4 (TYPE_5__*,char*) ;
 struct auth_portal* FUNC_5 (TYPE_5__*,char*) ;
 int VAR_3 ;
 int FUNC_6 (char*,char const*,...) ;
 struct port* FUNC_7 (int ,struct target*,int,int) ;
 struct port* FUNC_8 (int ,struct target*,struct pport*) ;
 struct pport* FUNC_9 (int ,char const*) ;
 int FUNC_10 (char const*,char*,int*,int*) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*) ;
 struct target* FUNC_13 (int ,char const*) ;
 scalar_t__ FUNC_14 (struct target*,char*) ;
 TYPE_1__* FUNC_15 (TYPE_1__ const*,int **,int) ;
 char* FUNC_16 (TYPE_1__ const*) ;
 char* FUNC_17 (TYPE_1__ const*) ;
 scalar_t__ FUNC_18 (TYPE_5__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_19 (TYPE_5__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_20 (struct target*,TYPE_1__ const*) ;
 scalar_t__ FUNC_21 (struct target*,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_22(const char *VAR_4, const ucl_object_t *VAR_5)
{
 struct target *VAR_6;
 ucl_object_iter_t VAR_7 = ((void*)0), VAR_8 = ((void*)0);
 const ucl_object_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 const char *VAR_11;

 VAR_6 = FUNC_13(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return (1);

 while ((VAR_9 = FUNC_15(VAR_5, &VAR_7, 1))) {
  VAR_11 = FUNC_16(VAR_9);

  if (!FUNC_11(VAR_11, "alias")) {
   if (VAR_9->type != VAR_2) {
    FUNC_6("\"alias\" property of target "
        "\"%s\" is not a string", VAR_6->t_name);
    return (1);
   }

   VAR_6->t_alias = FUNC_12(FUNC_17(VAR_9));
  }

  if (!FUNC_11(VAR_11, "auth-group")) {
   if (VAR_6->t_auth_group != ((void*)0)) {
    if (VAR_6->t_auth_group->ag_name != ((void*)0))
     FUNC_6("auth-group for target \"%s\" "
         "specified more than once",
         VAR_6->t_name);
    else
     FUNC_6("cannot use both auth-group "
         "and explicit authorisations for "
         "target \"%s\"", VAR_6->t_name);
    return (1);
   }
   VAR_6->t_auth_group = FUNC_1(VAR_3,
       FUNC_17(VAR_9));
   if (VAR_6->t_auth_group == ((void*)0)) {
    FUNC_6("unknown auth-group \"%s\" for target "
        "\"%s\"", FUNC_17(VAR_9),
        VAR_6->t_name);
    return (1);
   }
  }

  if (!FUNC_11(VAR_11, "auth-type")) {
   int VAR_12;

   if (VAR_6->t_auth_group != ((void*)0)) {
    if (VAR_6->t_auth_group->ag_name != ((void*)0)) {
     FUNC_6("cannot use both auth-group and "
         "auth-type for target \"%s\"",
         VAR_6->t_name);
     return (1);
    }
   } else {
    VAR_6->t_auth_group = FUNC_2(VAR_3, ((void*)0));
    if (VAR_6->t_auth_group == ((void*)0))
     return (1);

    VAR_6->t_auth_group->ag_target = VAR_6;
   }
   VAR_12 = FUNC_3(VAR_6->t_auth_group,
       FUNC_17(VAR_9));
   if (VAR_12 != 0)
    return (1);
  }

  if (!FUNC_11(VAR_11, "chap")) {
   if (FUNC_18(VAR_6->t_auth_group, VAR_9) != 0)
    return (1);
  }

  if (!FUNC_11(VAR_11, "chap-mutual")) {
   if (FUNC_19(VAR_6->t_auth_group, VAR_9) != 0)
    return (1);
  }

  if (!FUNC_11(VAR_11, "initiator-name")) {
   const struct auth_name *VAR_13;

   if (VAR_6->t_auth_group != ((void*)0)) {
    if (VAR_6->t_auth_group->ag_name != ((void*)0)) {
     FUNC_6("cannot use both auth-group and "
         "initiator-name for target \"%s\"",
         VAR_6->t_name);
     return (1);
    }
   } else {
    VAR_6->t_auth_group = FUNC_2(VAR_3, ((void*)0));
    if (VAR_6->t_auth_group == ((void*)0))
     return (1);

    VAR_6->t_auth_group->ag_target = VAR_6;
   }
   VAR_13 = FUNC_4(VAR_6->t_auth_group,
       FUNC_17(VAR_9));
   if (VAR_13 == ((void*)0))
    return (1);
  }

  if (!FUNC_11(VAR_11, "initiator-portal")) {
   const struct auth_portal *VAR_14;

   if (VAR_6->t_auth_group != ((void*)0)) {
    if (VAR_6->t_auth_group->ag_name != ((void*)0)) {
     FUNC_6("cannot use both auth-group and "
         "initiator-portal for target \"%s\"",
         VAR_6->t_name);
     return (1);
    }
   } else {
    VAR_6->t_auth_group = FUNC_2(VAR_3, ((void*)0));
    if (VAR_6->t_auth_group == ((void*)0))
     return (1);

    VAR_6->t_auth_group->ag_target = VAR_6;
   }
   VAR_14 = FUNC_5(VAR_6->t_auth_group,
       FUNC_17(VAR_9));
   if (VAR_14 == ((void*)0))
    return (1);
  }

  if (!FUNC_11(VAR_11, "portal-group")) {
   if (VAR_9->type == VAR_1) {
    if (FUNC_21(VAR_6, VAR_9) != 0)
     return (1);
   }

   if (VAR_9->type == VAR_0) {
    while ((VAR_10 = FUNC_15(VAR_9, &VAR_8,
        1))) {
     if (FUNC_21(VAR_6,
         VAR_10) != 0)
      return (1);
    }
   }
  }

  if (!FUNC_11(VAR_11, "port")) {
   struct pport *VAR_15;
   struct port *VAR_16;
   const char *VAR_17 = FUNC_17(VAR_9);
   int VAR_18, VAR_19, VAR_20 = 0;

   VAR_18 = FUNC_10(VAR_17, "ioctl/%d/%d", &VAR_19, &VAR_20);
   if (VAR_18 > 0) {
    VAR_16 = FUNC_7(VAR_3, VAR_6, VAR_19, VAR_20);
    if (VAR_16 == ((void*)0)) {
     FUNC_6("can't create new ioctl port "
         "for target \"%s\"", VAR_6->t_name);
     return (1);
    }

    return (0);
   }

   VAR_15 = FUNC_9(VAR_3, VAR_17);
   if (VAR_15 == ((void*)0)) {
    FUNC_6("unknown port \"%s\" for target \"%s\"",
        VAR_17, VAR_6->t_name);
    return (1);
   }
   if (!FUNC_0(&VAR_15->pp_ports)) {
    FUNC_6("can't link port \"%s\" to target \"%s\", "
        "port already linked to some target",
        VAR_17, VAR_6->t_name);
    return (1);
   }
   VAR_16 = FUNC_8(VAR_3, VAR_6, VAR_15);
   if (VAR_16 == ((void*)0)) {
    FUNC_6("can't link port \"%s\" to target \"%s\"",
        VAR_17, VAR_6->t_name);
    return (1);
   }
  }

  if (!FUNC_11(VAR_11, "redirect")) {
   if (VAR_9->type != VAR_2) {
    FUNC_6("\"redirect\" property of target "
        "\"%s\" is not a string", VAR_6->t_name);
    return (1);
   }

   if (FUNC_14(VAR_6,
       FUNC_17(VAR_9)) != 0)
    return (1);
  }

  if (!FUNC_11(VAR_11, "lun")) {
   while ((VAR_10 = FUNC_15(VAR_9, &VAR_8, 1))) {
    if (FUNC_20(VAR_6, VAR_10) != 0)
     return (1);
   }
  }
 }

 return (0);
}
