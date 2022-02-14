
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_chan {int lock; int * vd_terminated; int task; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct virt_dma_chan *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->task);

 FUNC_0(&VAR_0->lock, VAR_1);
 if (VAR_0->vd_terminated) {
  FUNC_3(VAR_0->vd_terminated);
  VAR_0->vd_terminated = ((void*)0);
 }
 FUNC_1(&VAR_0->lock, VAR_1);
}
