
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgem_file {int dummy; } ;
struct dma_fence {int dummy; } ;
struct vgem_fence {struct dma_fence base; int timer; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_fence*,int *,int *,int ,int) ;
 scalar_t__ VAR_2 ;
 struct vgem_fence* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct dma_fence *FUNC_6(struct vgem_file *VAR_5,
        unsigned int VAR_6)
{
 struct vgem_fence *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 FUNC_4(&VAR_7->lock);
 FUNC_1(&VAR_7->base, &VAR_3, &VAR_7->lock,
         FUNC_0(1), 1);

 FUNC_5(&VAR_7->timer, VAR_4, 0);


 FUNC_3(&VAR_7->timer, VAR_2 + VAR_1);

 return &VAR_7->base;
}
