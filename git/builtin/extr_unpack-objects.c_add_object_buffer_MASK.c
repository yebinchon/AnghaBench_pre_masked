
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; } ;
struct obj_buffer {char* buffer; unsigned long size; } ;


 scalar_t__ FUNC_0 (int *,struct object*,struct obj_buffer*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct obj_buffer* FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct object *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 struct obj_buffer *VAR_4;
 VAR_4 = FUNC_3(1, sizeof(struct obj_buffer));
 VAR_4->buffer = VAR_2;
 VAR_4->size = VAR_3;
 if (FUNC_0(&VAR_0, VAR_1, VAR_4))
  FUNC_1("object %s tried to add buffer twice!", FUNC_2(&VAR_1->oid));
}
