
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhyvegc {int raw; TYPE_1__* gc_image; } ;
struct TYPE_2__ {void* data; } ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct bhyvegc *VAR_0, void *VAR_1)
{
 VAR_0->raw = 1;
 if (VAR_0->gc_image->data && VAR_0->gc_image->data != VAR_1)
  FUNC_0(VAR_0->gc_image->data);
 VAR_0->gc_image->data = VAR_1;
}
