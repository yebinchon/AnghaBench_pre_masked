
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int * args; } ;
struct of_dma {int of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct coh901318_filter_args {int ch_nr; int base; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct dma_chan* FUNC_2 (int ,int ,struct coh901318_filter_args*) ;

__attribute__((used)) static struct dma_chan *FUNC_3(struct of_phandle_args *VAR_2,
     struct of_dma *VAR_3)
{
 struct coh901318_filter_args VAR_4 = {
  .base = VAR_3->of_dma_data,
  .ch_nr = VAR_2->args[0],
 };
 dma_cap_mask_t VAR_5;
 FUNC_1(VAR_5);
 FUNC_0(VAR_0, VAR_5);

 return FUNC_2(VAR_5, VAR_1, &VAR_4);
}
