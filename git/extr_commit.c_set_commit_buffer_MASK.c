
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct commit_buffer {unsigned long size; void* buffer; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int buffer_slab; } ;


 struct commit_buffer* FUNC_0 (int ,struct commit*) ;

void FUNC_1(struct repository *VAR_0, struct commit *VAR_1, void *VAR_2, unsigned long VAR_3)
{
 struct commit_buffer *VAR_4 = FUNC_0(
  VAR_0->parsed_objects->buffer_slab, VAR_1);
 VAR_4->buffer = VAR_2;
 VAR_4->size = VAR_3;
}
