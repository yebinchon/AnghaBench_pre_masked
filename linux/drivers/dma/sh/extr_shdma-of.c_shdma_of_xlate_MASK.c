
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct of_dma {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;
struct TYPE_2__ {scalar_t__ hw_req; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct dma_chan* FUNC_2 (int ,int ,void*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_4(struct of_phandle_args *VAR_2,
           struct of_dma *VAR_3)
{
 u32 VAR_4 = VAR_2->args[0];
 dma_cap_mask_t VAR_5;
 struct dma_chan *VAR_6;

 if (VAR_2->args_count != 1)
  return ((void*)0);

 FUNC_1(VAR_5);

 FUNC_0(VAR_0, VAR_5);

 VAR_6 = FUNC_2(VAR_5, VAR_1,
       (void *)(uintptr_t)VAR_4);
 if (VAR_6)
  FUNC_3(VAR_6)->hw_req = VAR_4;

 return VAR_6;
}
