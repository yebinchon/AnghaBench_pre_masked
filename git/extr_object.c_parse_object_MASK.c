
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; scalar_t__ parsed; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct object_id const*,void*,unsigned long,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct repository*,struct object_id const*) ;
 struct object* FUNC_5 (struct repository*,struct object_id const*) ;
 struct object_id* FUNC_6 (struct repository*,struct object_id const*) ;
 scalar_t__ FUNC_7 (struct repository*,struct object_id const*,int *) ;
 int FUNC_8 (struct object_id const*) ;
 int FUNC_9 (int ,int *,int ) ;
 struct object* FUNC_10 (struct repository*,struct object_id const*,int,unsigned long,void*,int*) ;
 scalar_t__ FUNC_11 (struct repository*,struct object_id const*) ;
 void* FUNC_12 (struct repository*,struct object_id const*,int*,unsigned long*) ;
 int * FUNC_13 (int) ;

struct object *FUNC_14(struct repository *VAR_1, const struct object_id *VAR_2)
{
 unsigned long VAR_3;
 enum object_type VAR_4;
 int VAR_5;
 const struct object_id *VAR_6 = FUNC_6(VAR_1, VAR_2);
 void *VAR_7;
 struct object *VAR_8;

 VAR_8 = FUNC_5(VAR_1, VAR_2);
 if (VAR_8 && VAR_8->parsed)
  return VAR_8;

 if ((VAR_8 && VAR_8->type == VAR_0 && FUNC_11(VAR_1, VAR_2)) ||
     (!VAR_8 && FUNC_11(VAR_1, VAR_2) &&
      FUNC_7(VAR_1, VAR_2, ((void*)0)) == VAR_0)) {
  if (FUNC_1(VAR_6, ((void*)0), 0, ((void*)0)) < 0) {
   FUNC_2(FUNC_0("hash mismatch %s"), FUNC_8(VAR_2));
   return ((void*)0);
  }
  FUNC_9(FUNC_4(VAR_1, VAR_2), ((void*)0), 0);
  return FUNC_5(VAR_1, VAR_2);
 }

 VAR_7 = FUNC_12(VAR_1, VAR_2, &VAR_4, &VAR_3);
 if (VAR_7) {
  if (FUNC_1(VAR_6, VAR_7, VAR_3, FUNC_13(VAR_4)) < 0) {
   FUNC_3(VAR_7);
   FUNC_2(FUNC_0("hash mismatch %s"), FUNC_8(VAR_6));
   return ((void*)0);
  }

  VAR_8 = FUNC_10(VAR_1, VAR_2, VAR_4, VAR_3,
       VAR_7, &VAR_5);
  if (!VAR_5)
   FUNC_3(VAR_7);
  return VAR_8;
 }
 return ((void*)0);
}
