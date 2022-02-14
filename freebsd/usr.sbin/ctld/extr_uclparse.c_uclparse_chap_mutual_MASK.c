
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct auth_group {int ag_name; } ;
struct auth {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct auth* FUNC_0 (struct auth_group*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,char*) ;
 int FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_4(struct auth_group *VAR_1, const ucl_object_t *VAR_2)
{
 const struct auth *VAR_3;
 const ucl_object_t *VAR_4, *VAR_5, *VAR_6;
 const ucl_object_t *VAR_7;

 VAR_4 = FUNC_2(VAR_2, "user");
 if (!VAR_4 || VAR_4->type != VAR_0) {
  FUNC_1("chap-mutual section in auth-group \"%s\" is missing "
      "\"user\" string key", VAR_1->ag_name);
  return (1);
 }

 VAR_5 = FUNC_2(VAR_2, "secret");
 if (!VAR_5 || VAR_5->type != VAR_0) {
  FUNC_1("chap-mutual section in auth-group \"%s\" is missing "
      "\"secret\" string key", VAR_1->ag_name);
  return (1);
 }

 VAR_6 = FUNC_2(VAR_2, "mutual-user");
 if (!VAR_4 || VAR_4->type != VAR_0) {
  FUNC_1("chap-mutual section in auth-group \"%s\" is missing "
      "\"mutual-user\" string key", VAR_1->ag_name);
  return (1);
 }

 VAR_7 = FUNC_2(VAR_2, "mutual-secret");
 if (!VAR_5 || VAR_5->type != VAR_0) {
  FUNC_1("chap-mutual section in auth-group \"%s\" is missing "
      "\"mutual-secret\" string key", VAR_1->ag_name);
  return (1);
 }

 VAR_3 = FUNC_0(VAR_1,
     FUNC_3(VAR_4),
     FUNC_3(VAR_5),
     FUNC_3(VAR_6),
     FUNC_3(VAR_7));

 if (VAR_3 == ((void*)0))
  return (1);

 return (0);
}
