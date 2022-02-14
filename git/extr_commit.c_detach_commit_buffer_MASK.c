
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_buffer {unsigned long size; int * buffer; } ;
struct commit {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parsed_objects; } ;
struct TYPE_3__ {int buffer_slab; } ;


 struct commit_buffer* FUNC_0 (int ,struct commit*) ;
 TYPE_2__* VAR_0 ;

const void *FUNC_1(struct commit *VAR_1, unsigned long *VAR_2)
{
 struct commit_buffer *VAR_3 = FUNC_0(
  VAR_0->parsed_objects->buffer_slab, VAR_1);
 void *VAR_4;

 if (!VAR_3) {
  if (VAR_2)
   *VAR_2 = 0;
  return ((void*)0);
 }
 VAR_4 = VAR_3->buffer;
 if (VAR_2)
  *VAR_2 = VAR_3->size;

 VAR_3->buffer = ((void*)0);
 VAR_3->size = 0;
 return VAR_4;
}
