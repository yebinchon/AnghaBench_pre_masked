
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int type; } ;
struct obj_buffer {int size; int buffer; } ;


 struct object* FUNC_0 (int ,struct object_id const*) ;
 struct obj_buffer* FUNC_1 (struct object*) ;
 int FUNC_2 (unsigned int,int ,int ,int ,void*,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(unsigned VAR_1, const struct object_id *VAR_2,
    void *VAR_3, unsigned long VAR_4)
{
 struct object *VAR_5;
 struct obj_buffer *VAR_6;
 VAR_5 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_5)
  return 0;
 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  return 0;
 FUNC_2(VAR_1, VAR_5->type, VAR_6->buffer,
        VAR_6->size, VAR_3, VAR_4);
 return 1;
}
