
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct auth_portal {int dummy; } ;
struct auth_name {int dummy; } ;
struct auth_group {int dummy; } ;
struct TYPE_13__ {int conf_default_ag_defined; } ;


 scalar_t__ VAR_0 ;
 struct auth_group* FUNC_0 (TYPE_9__*,char const*) ;
 struct auth_group* FUNC_1 (TYPE_9__*,char const*) ;
 int FUNC_2 (struct auth_group*,char const*) ;
 struct auth_name* FUNC_3 (struct auth_group*,char const*) ;
 struct auth_portal* FUNC_4 (struct auth_group*,char const*) ;
 TYPE_9__* VAR_1 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 TYPE_1__* FUNC_7 (TYPE_1__ const*,int **,int) ;
 char* FUNC_8 (TYPE_1__ const*) ;
 char* FUNC_9 (TYPE_1__ const*) ;
 scalar_t__ FUNC_10 (struct auth_group*,TYPE_1__ const*) ;
 scalar_t__ FUNC_11 (struct auth_group*,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_2, const ucl_object_t *VAR_3)
{
 struct auth_group *VAR_4;
 const struct auth_name *VAR_5;
 const struct auth_portal *VAR_6;
 ucl_object_iter_t VAR_7 = ((void*)0), VAR_8 = ((void*)0);
 const ucl_object_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 const char *VAR_11;
 int VAR_12;

 if (!FUNC_6(VAR_2, "default") &&
     VAR_1->conf_default_ag_defined == 0) {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  VAR_1->conf_default_ag_defined = 1;
 } else {
  VAR_4 = FUNC_1(VAR_1, VAR_2);
 }

 if (VAR_4 == ((void*)0))
  return (1);

 while ((VAR_9 = FUNC_7(VAR_3, &VAR_7, 1))) {
  VAR_11 = FUNC_8(VAR_9);

  if (!FUNC_6(VAR_11, "auth-type")) {
   const char *VAR_13 = FUNC_9(VAR_9);

   VAR_12 = FUNC_2(VAR_4, VAR_13);
   if (VAR_12)
    return (1);
  }

  if (!FUNC_6(VAR_11, "chap")) {
   if (VAR_9->type != VAR_0) {
    FUNC_5("\"chap\" property of "
        "auth-group \"%s\" is not an array",
        VAR_2);
    return (1);
   }

   VAR_8 = ((void*)0);
   while ((VAR_10 = FUNC_7(VAR_9, &VAR_8, 1))) {
    if (FUNC_10(VAR_4, VAR_10) != 0)
     return (1);
   }
  }

  if (!FUNC_6(VAR_11, "chap-mutual")) {
   if (VAR_9->type != VAR_0) {
    FUNC_5("\"chap-mutual\" property of "
        "auth-group \"%s\" is not an array",
        VAR_2);
    return (1);
   }

   VAR_8 = ((void*)0);
   while ((VAR_10 = FUNC_7(VAR_9, &VAR_8, 1))) {
    if (FUNC_11(VAR_4, VAR_10) != 0)
     return (1);
   }
  }

  if (!FUNC_6(VAR_11, "initiator-name")) {
   if (VAR_9->type != VAR_0) {
    FUNC_5("\"initiator-name\" property of "
        "auth-group \"%s\" is not an array",
        VAR_2);
    return (1);
   }

   VAR_8 = ((void*)0);
   while ((VAR_10 = FUNC_7(VAR_9, &VAR_8, 1))) {
    const char *VAR_14 = FUNC_9(VAR_10);

    VAR_5 = FUNC_3(VAR_4, VAR_14);
    if (VAR_5 == ((void*)0))
     return (1);
   }
  }

  if (!FUNC_6(VAR_11, "initiator-portal")) {
   if (VAR_9->type != VAR_0) {
    FUNC_5("\"initiator-portal\" property of "
        "auth-group \"%s\" is not an array",
        VAR_2);
    return (1);
   }

   VAR_8 = ((void*)0);
   while ((VAR_10 = FUNC_7(VAR_9, &VAR_8, 1))) {
    const char *VAR_15 = FUNC_9(VAR_10);

    VAR_6 = FUNC_4(VAR_4, VAR_15);
    if (VAR_6 == ((void*)0))
     return (1);
   }
  }
 }

 return (0);
}
