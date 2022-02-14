
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct target {int t_name; } ;
struct portal_group {int dummy; } ;
struct port {struct auth_group* p_auth_group; } ;
struct auth_group {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct auth_group* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,...) ;
 struct port* FUNC_2 (int ,struct target*,struct portal_group*) ;
 struct portal_group* FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,char*) ;
 int FUNC_5 (TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_6(struct target *VAR_2, const ucl_object_t *VAR_3)
{
 struct portal_group *VAR_4;
 struct auth_group *VAR_5 = ((void*)0);
 struct port *VAR_6;
 const ucl_object_t *VAR_7, *VAR_8;

 VAR_7 = FUNC_4(VAR_3, "name");
 if (!VAR_7 || VAR_7->type != VAR_0) {
  FUNC_1("portal-group section in target \"%s\" is missing "
      "\"name\" string key", VAR_2->t_name);
  return (1);
 }

 VAR_8 = FUNC_4(VAR_3, "auth-group-name");
 if (VAR_8 && VAR_8->type != VAR_0) {
  FUNC_1("portal-group section in target \"%s\" is missing "
      "\"auth-group-name\" string key", VAR_2->t_name);
  return (1);
 }


 VAR_4 = FUNC_3(VAR_1, FUNC_5(VAR_7));
 if (VAR_4 == ((void*)0)) {
  FUNC_1("unknown portal-group \"%s\" for target "
      "\"%s\"", FUNC_5(VAR_7), VAR_2->t_name);
  return (1);
 }

 if (VAR_8) {
  VAR_5 = FUNC_0(VAR_1, FUNC_5(VAR_8));
  if (VAR_5 == ((void*)0)) {
   FUNC_1("unknown auth-group \"%s\" for target "
       "\"%s\"", FUNC_5(VAR_8),
       VAR_2->t_name);
   return (1);
  }
 }

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_1("can't link portal-group \"%s\" to target "
      "\"%s\"", FUNC_5(VAR_7), VAR_2->t_name);
  return (1);
 }
 VAR_6->p_auth_group = VAR_5;

 return (0);
}
