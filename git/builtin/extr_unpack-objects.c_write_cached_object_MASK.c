
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; int oid; int type; } ;
struct obj_buffer {int size; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct object_id*) ;

__attribute__((used)) static void FUNC_4(struct object *VAR_1, struct obj_buffer *VAR_2)
{
 struct object_id VAR_3;

 if (FUNC_3(VAR_2->buffer, VAR_2->size,
         FUNC_2(VAR_1->type), &VAR_3) < 0)
  FUNC_0("failed to write object %s", FUNC_1(&VAR_1->oid));
 VAR_1->flags |= VAR_0;
}
