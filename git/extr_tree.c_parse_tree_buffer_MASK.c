
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parsed; } ;
struct tree {unsigned long size; void* buffer; TYPE_1__ object; } ;



int FUNC_0(struct tree *VAR_0, void *VAR_1, unsigned long VAR_2)
{
 if (VAR_0->object.parsed)
  return 0;
 VAR_0->object.parsed = 1;
 VAR_0->buffer = VAR_1;
 VAR_0->size = VAR_2;

 return 0;
}
