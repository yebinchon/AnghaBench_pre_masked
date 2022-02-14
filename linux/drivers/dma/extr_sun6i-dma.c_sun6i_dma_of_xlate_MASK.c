
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sun6i_vchan {scalar_t__ port; } ;
struct sun6i_dma_dev {scalar_t__ max_request; int slave; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct of_dma {struct sun6i_dma_dev* of_dma_data; } ;
struct dma_chan {int dummy; } ;


 struct dma_chan* FUNC_0 (int *) ;
 struct sun6i_vchan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_2(struct of_phandle_args *VAR_0,
        struct of_dma *VAR_1)
{
 struct sun6i_dma_dev *VAR_2 = VAR_1->of_dma_data;
 struct sun6i_vchan *VAR_3;
 struct dma_chan *VAR_4;
 u8 VAR_5 = VAR_0->args[0];

 if (VAR_5 > VAR_2->max_request)
  return ((void*)0);

 VAR_4 = FUNC_0(&VAR_2->slave);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_4);
 VAR_3->port = VAR_5;

 return VAR_4;
}
