
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sun4i_dma_vchan {int is_dedicated; int endpoint; } ;
struct sun4i_dma_dev {int slave; } ;
struct of_phandle_args {int* args; } ;
struct of_dma {struct sun4i_dma_dev* of_dma_data; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dma_chan* FUNC_0 (int *) ;
 struct sun4i_dma_vchan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_2(struct of_phandle_args *VAR_2,
        struct of_dma *VAR_3)
{
 struct sun4i_dma_dev *VAR_4 = VAR_3->of_dma_data;
 struct sun4i_dma_vchan *VAR_5;
 struct dma_chan *VAR_6;
 u8 VAR_7 = VAR_2->args[0];
 u8 VAR_8 = VAR_2->args[1];


 if (VAR_7 != 0 && VAR_7 != 1)
  return ((void*)0);


 if ((VAR_7 && VAR_8 >= VAR_0) ||
     (!VAR_7 && VAR_8 >= VAR_1))
  return ((void*)0);

 VAR_6 = FUNC_0(&VAR_4->slave);
 if (!VAR_6)
  return ((void*)0);


 VAR_5 = FUNC_1(VAR_6);
 VAR_5->is_dedicated = VAR_7;
 VAR_5->endpoint = VAR_8;

 return VAR_6;
}
