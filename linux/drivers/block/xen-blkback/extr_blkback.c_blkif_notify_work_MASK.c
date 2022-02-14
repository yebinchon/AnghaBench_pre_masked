
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int waiting_reqs; int wq; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct xen_blkif_ring *VAR_0)
{
 VAR_0->waiting_reqs = 1;
 FUNC_0(&VAR_0->wq);
}
