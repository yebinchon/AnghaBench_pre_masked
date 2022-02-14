
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {scalar_t__ parsed; } ;
struct tree {struct object object; int buffer; } ;
struct tag {struct object object; } ;
struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit {struct object object; } ;
struct blob {struct object object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct repository*,struct commit*,int *) ;
 struct blob* FUNC_2 (struct repository*,struct object_id const*) ;
 struct commit* FUNC_3 (struct repository*,struct object_id const*) ;
 struct tag* FUNC_4 (struct repository*,struct object_id const*) ;
 struct tree* FUNC_5 (struct repository*,struct object_id const*) ;
 int FUNC_6 (struct object_id const*) ;
 scalar_t__ FUNC_7 (struct blob*,void*,unsigned long) ;
 scalar_t__ FUNC_8 (struct repository*,struct commit*,void*,unsigned long,int) ;
 scalar_t__ FUNC_9 (struct repository*,struct tag*,void*,unsigned long) ;
 scalar_t__ FUNC_10 (struct tree*,void*,unsigned long) ;
 int FUNC_11 (struct repository*,struct commit*,void*,unsigned long) ;
 int FUNC_12 (int ,int ,int) ;

struct object *FUNC_13(struct repository *VAR_4, const struct object_id *VAR_5, enum object_type VAR_6, unsigned long VAR_7, void *VAR_8, int *VAR_9)
{
 struct object *VAR_10;
 *VAR_9 = 0;

 VAR_10 = ((void*)0);
 if (VAR_6 == VAR_0) {
  struct blob *VAR_11 = FUNC_2(VAR_4, VAR_5);
  if (VAR_11) {
   if (FUNC_7(VAR_11, VAR_8, VAR_7))
    return ((void*)0);
   VAR_10 = &VAR_11->object;
  }
 } else if (VAR_6 == VAR_3) {
  struct tree *VAR_12 = FUNC_5(VAR_4, VAR_5);
  if (VAR_12) {
   VAR_10 = &VAR_12->object;
   if (!VAR_12->buffer)
    VAR_12->object.parsed = 0;
   if (!VAR_12->object.parsed) {
    if (FUNC_10(VAR_12, VAR_8, VAR_7))
     return ((void*)0);
    *VAR_9 = 1;
   }
  }
 } else if (VAR_6 == VAR_1) {
  struct commit *VAR_13 = FUNC_3(VAR_4, VAR_5);
  if (VAR_13) {
   if (FUNC_8(VAR_4, VAR_13, VAR_8, VAR_7, 1))
    return ((void*)0);
   if (!FUNC_1(VAR_4, VAR_13, ((void*)0))) {
    FUNC_11(VAR_4, VAR_13, VAR_8, VAR_7);
    *VAR_9 = 1;
   }
   VAR_10 = &VAR_13->object;
  }
 } else if (VAR_6 == VAR_2) {
  struct tag *VAR_14 = FUNC_4(VAR_4, VAR_5);
  if (VAR_14) {
   if (FUNC_9(VAR_4, VAR_14, VAR_8, VAR_7))
          return ((void*)0);
   VAR_10 = &VAR_14->object;
  }
 } else {
  FUNC_12(FUNC_0("object %s has unknown type id %d"), FUNC_6(VAR_5), VAR_6);
  VAR_10 = ((void*)0);
 }
 return VAR_10;
}
