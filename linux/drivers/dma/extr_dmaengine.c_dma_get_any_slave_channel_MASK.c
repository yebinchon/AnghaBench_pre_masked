
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct dma_chan* FUNC_3 (struct dma_device*,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct dma_chan *FUNC_6(struct dma_device *VAR_2)
{
 dma_cap_mask_t VAR_3;
 struct dma_chan *VAR_4;

 FUNC_2(VAR_3);
 FUNC_1(VAR_0, VAR_3);


 FUNC_4(&VAR_1);

 VAR_4 = FUNC_3(VAR_2, &VAR_3, ((void*)0), ((void*)0));

 FUNC_5(&VAR_1);

 return FUNC_0(VAR_4) ? ((void*)0) : VAR_4;
}
