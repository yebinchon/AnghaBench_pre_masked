
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; int type; } ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6(struct object *VAR_2)
{






 switch (VAR_0) {
 case 129:
  FUNC_1("missing %s object '%s'",
      FUNC_5(VAR_2->type), FUNC_3(&VAR_2->oid));
  return;

 case 131:
  return;

 case 128:
  FUNC_4(&VAR_1, &VAR_2->oid);
  return;

 case 130:
  if (FUNC_2(&VAR_2->oid))
   return;
  FUNC_1("unexpected missing %s object '%s'",
      FUNC_5(VAR_2->type), FUNC_3(&VAR_2->oid));
  return;

 default:
  FUNC_0("unhandled missing_action");
  return;
 }
}
