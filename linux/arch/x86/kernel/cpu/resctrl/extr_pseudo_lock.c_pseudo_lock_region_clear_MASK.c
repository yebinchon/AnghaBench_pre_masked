
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pseudo_lock_region {int * debugfs_dir; scalar_t__ cbm; TYPE_1__* d; int * r; int * kmem; scalar_t__ line_size; scalar_t__ size; } ;
struct TYPE_2__ {int * plr; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pseudo_lock_region *VAR_0)
{
 VAR_0->size = 0;
 VAR_0->line_size = 0;
 FUNC_0(VAR_0->kmem);
 VAR_0->kmem = ((void*)0);
 VAR_0->r = ((void*)0);
 if (VAR_0->d)
  VAR_0->d->plr = ((void*)0);
 VAR_0->d = ((void*)0);
 VAR_0->cbm = 0;
 VAR_0->debugfs_dir = ((void*)0);
}
