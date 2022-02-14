
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {scalar_t__ type; int oid; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,struct object*,int,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_1 ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static const char *FUNC_4(struct object *VAR_2)
{
 const char *VAR_3;

 if (VAR_2->type == VAR_0) {
  enum object_type VAR_4 = FUNC_2(VAR_1,
       &VAR_2->oid, ((void*)0));
  if (VAR_4 > 0)
   FUNC_1(VAR_1, VAR_2, VAR_4, 0);
 }

 VAR_3 = FUNC_3(VAR_2->type);
 if (!VAR_3)
  VAR_3 = FUNC_0("unknown");

 return VAR_3;
}
