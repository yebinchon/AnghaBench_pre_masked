
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_chan {int desc_completed; int desc_issued; int desc_submitted; int desc_allocated; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;

__attribute__((used)) static inline void FUNC_1(struct virt_dma_chan *VAR_0,
 struct list_head *VAR_1)
{
 FUNC_0(&VAR_0->desc_allocated, VAR_1);
 FUNC_0(&VAR_0->desc_submitted, VAR_1);
 FUNC_0(&VAR_0->desc_issued, VAR_1);
 FUNC_0(&VAR_0->desc_completed, VAR_1);
}
