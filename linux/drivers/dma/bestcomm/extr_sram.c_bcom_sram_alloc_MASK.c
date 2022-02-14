
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {void* base_virt; scalar_t__ base_phys; int lock; int rh; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 unsigned long FUNC_1 (int ,int,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void* FUNC_4(int VAR_1, int VAR_2, phys_addr_t *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_0->lock);
 VAR_4 = FUNC_1(VAR_0->rh, VAR_1, VAR_2, ((void*)0));
 FUNC_3(&VAR_0->lock);

 if (FUNC_0(VAR_4))
  return ((void*)0);

 *VAR_3 = VAR_0->base_phys + VAR_4;
 return VAR_0->base_virt + VAR_4;
}
