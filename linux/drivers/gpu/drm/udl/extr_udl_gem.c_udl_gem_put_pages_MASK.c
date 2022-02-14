
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ import_attach; } ;
struct udl_gem_object {int * pages; TYPE_1__ base; } ;


 int FUNC_0 (TYPE_1__*,int *,int,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct udl_gem_object *VAR_0)
{
 if (VAR_0->base.import_attach) {
  FUNC_1(VAR_0->pages);
  VAR_0->pages = ((void*)0);
  return;
 }

 FUNC_0(&VAR_0->base, VAR_0->pages, 0, 0);
 VAR_0->pages = ((void*)0);
}
