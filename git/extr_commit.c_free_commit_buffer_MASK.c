
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_object_pool {int buffer_slab; } ;
struct commit_buffer {scalar_t__ size; int buffer; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int ) ;
 struct commit_buffer* FUNC_1 (int ,struct commit*) ;

void FUNC_2(struct parsed_object_pool *VAR_0, struct commit *VAR_1)
{
 struct commit_buffer *VAR_2 = FUNC_1(
  VAR_0->buffer_slab, VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_2->buffer);
  VAR_2->size = 0;
 }
}
