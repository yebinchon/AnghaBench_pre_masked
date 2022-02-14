
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args_count; } ;
struct of_dma {int of_node; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 struct dma_chan* FUNC_0 (int *,int ,struct of_phandle_args*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static struct dma_chan *FUNC_3(struct of_phandle_args *VAR_2,
       struct of_dma *VAR_3)
{
 struct dma_chan *VAR_4;
 dma_cap_mask_t VAR_5;

 if (VAR_2->args_count != 1)
  return ((void*)0);


 FUNC_2(VAR_5);
 FUNC_1(VAR_0, VAR_5);

 VAR_4 = FUNC_0(&VAR_5, VAR_1, VAR_2,
         VAR_3->of_node);
 if (!VAR_4)
  return ((void*)0);

 return VAR_4;
}
