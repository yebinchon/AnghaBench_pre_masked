
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_chan {int desc_issued; int desc_submitted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct virt_dma_chan *VAR_0)
{
 FUNC_1(&VAR_0->desc_submitted, &VAR_0->desc_issued);
 return !FUNC_0(&VAR_0->desc_issued);
}
