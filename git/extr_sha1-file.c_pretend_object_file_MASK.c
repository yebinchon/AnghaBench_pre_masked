
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct cached_object {unsigned long size; int type; int oid; int buf; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (struct cached_object*,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cached_object* VAR_2 ;
 scalar_t__ FUNC_1 (struct object_id*) ;
 scalar_t__ FUNC_2 (struct object_id*) ;
 int FUNC_3 (void*,unsigned long,int ,struct object_id*) ;
 int FUNC_4 (int ,void*,unsigned long) ;
 int FUNC_5 (int *,struct object_id*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned long) ;

int FUNC_8(void *VAR_3, unsigned long VAR_4, enum object_type VAR_5,
   struct object_id *VAR_6)
{
 struct cached_object *VAR_7;

 FUNC_3(VAR_3, VAR_4, FUNC_6(VAR_5), VAR_6);
 if (FUNC_2(VAR_6) || FUNC_1(VAR_6))
  return 0;
 FUNC_0(VAR_2, VAR_1 + 1, VAR_0);
 VAR_7 = &VAR_2[VAR_1++];
 VAR_7->size = VAR_4;
 VAR_7->type = VAR_5;
 VAR_7->buf = FUNC_7(VAR_4);
 FUNC_4(VAR_7->buf, VAR_3, VAR_4);
 FUNC_5(&VAR_7->oid, VAR_6);
 return 0;
}
