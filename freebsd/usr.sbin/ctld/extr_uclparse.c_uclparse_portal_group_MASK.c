
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct portal_group {int pg_options; int pg_name; int * pg_discovery_auth_group; } ;
struct TYPE_13__ {int conf_default_pg_defined; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_8__*,int ) ;
 TYPE_8__* VAR_3 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (struct portal_group*,int ,int) ;
 struct portal_group* FUNC_4 (TYPE_8__*,char const*) ;
 struct portal_group* FUNC_5 (TYPE_8__*,char const*) ;
 scalar_t__ FUNC_6 (struct portal_group*,int ) ;
 scalar_t__ FUNC_7 (struct portal_group*,int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 TYPE_1__* FUNC_9 (TYPE_1__ const*,int **,int) ;
 char* FUNC_10 (TYPE_1__ const*) ;
 int FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_4, const ucl_object_t *VAR_5)
{
 struct portal_group *VAR_6;
 ucl_object_iter_t VAR_7 = ((void*)0), VAR_8 = ((void*)0);
 const ucl_object_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 const char *VAR_11;

 if (FUNC_8(VAR_4, "default") == 0 &&
     VAR_3->conf_default_pg_defined == 0) {
  VAR_6 = FUNC_4(VAR_3, VAR_4);
  VAR_3->conf_default_pg_defined = 1;
 } else {
  VAR_6 = FUNC_5(VAR_3, VAR_4);
 }

 if (VAR_6 == ((void*)0))
  return (1);

 while ((VAR_9 = FUNC_9(VAR_5, &VAR_7, 1))) {
  VAR_11 = FUNC_10(VAR_9);

  if (!FUNC_8(VAR_11, "discovery-auth-group")) {
   VAR_6->pg_discovery_auth_group =
       FUNC_0(VAR_3, FUNC_11(VAR_9));
   if (VAR_6->pg_discovery_auth_group == ((void*)0)) {
    FUNC_1("unknown discovery-auth-group \"%s\" "
        "for portal-group \"%s\"",
        FUNC_11(VAR_9),
        VAR_6->pg_name);
    return (1);
   }
  }

  if (!FUNC_8(VAR_11, "discovery-filter")) {
   if (VAR_9->type != VAR_2) {
    FUNC_1("\"discovery-filter\" property of "
        "portal-group \"%s\" is not a string",
        VAR_6->pg_name);
    return (1);
   }

   if (FUNC_6(VAR_6,
       FUNC_11(VAR_9)) != 0)
    return (1);
  }

  if (!FUNC_8(VAR_11, "listen")) {
   if (VAR_9->type == VAR_2) {
    if (FUNC_3(VAR_6,
        FUNC_11(VAR_9), 0) != 0)
     return (1);
   } else if (VAR_9->type == VAR_0) {
    while ((VAR_10 = FUNC_9(VAR_9, &VAR_8,
        1))) {
     if (FUNC_3(
         VAR_6,
         FUNC_11(VAR_10),
         0) != 0)
      return (1);
    }
   } else {
    FUNC_1("\"listen\" property of "
        "portal-group \"%s\" is not a string",
        VAR_6->pg_name);
    return (1);
   }
  }

  if (!FUNC_8(VAR_11, "listen-iser")) {
   if (VAR_9->type == VAR_2) {
    if (FUNC_3(VAR_6,
        FUNC_11(VAR_9), 1) != 0)
     return (1);
   } else if (VAR_9->type == VAR_0) {
    while ((VAR_10 = FUNC_9(VAR_9, &VAR_8,
        1))) {
     if (FUNC_3(
         VAR_6,
         FUNC_11(VAR_10),
         1) != 0)
      return (1);
    }
   } else {
    FUNC_1("\"listen\" property of "
        "portal-group \"%s\" is not a string",
        VAR_6->pg_name);
    return (1);
   }
  }

  if (!FUNC_8(VAR_11, "redirect")) {
   if (VAR_9->type != VAR_2) {
    FUNC_1("\"listen\" property of "
        "portal-group \"%s\" is not a string",
        VAR_6->pg_name);
    return (1);
   }

   if (FUNC_7(VAR_6,
       FUNC_11(VAR_9)) != 0)
    return (1);
  }

  if (!FUNC_8(VAR_11, "options")) {
   if (VAR_9->type != VAR_1) {
    FUNC_1("\"options\" property of portal group "
        "\"%s\" is not an object", VAR_6->pg_name);
    return (1);
   }

   while ((VAR_10 = FUNC_9(VAR_9, &VAR_8,
       1))) {
    FUNC_2(&VAR_6->pg_options,
        FUNC_10(VAR_10),
        FUNC_12(VAR_10));
   }
  }
 }

 return (0);
}
