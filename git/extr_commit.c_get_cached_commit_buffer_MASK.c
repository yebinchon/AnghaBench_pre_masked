
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct commit_buffer {unsigned long size; void const* buffer; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int buffer_slab; } ;


 struct commit_buffer* FUNC_0 (int ,struct commit const*) ;

const void *FUNC_1(struct repository *VAR_0, const struct commit *VAR_1, unsigned long *VAR_2)
{
 struct commit_buffer *VAR_3 = FUNC_0(
  VAR_0->parsed_objects->buffer_slab, VAR_1);
 if (!VAR_3) {
  if (VAR_2)
   *VAR_2 = 0;
  return ((void*)0);
 }
 if (VAR_2)
  *VAR_2 = VAR_3->size;
 return VAR_3->buffer;
}
