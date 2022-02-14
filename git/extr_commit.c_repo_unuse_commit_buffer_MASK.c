
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct commit_buffer {void const* buffer; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int buffer_slab; } ;


 struct commit_buffer* FUNC_0 (int ,struct commit const*) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct repository *VAR_0,
         const struct commit *VAR_1,
         const void *VAR_2)
{
 struct commit_buffer *VAR_3 = FUNC_0(
  VAR_0->parsed_objects->buffer_slab, VAR_1);
 if (!(VAR_3 && VAR_3->buffer == VAR_2))
  FUNC_1((void *)VAR_2);
}
