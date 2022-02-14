
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_dmac {int n_channels; int channels_mask; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rcar_dmac *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->of_node;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, "dma-channels", &VAR_3->n_channels);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2, "unable to read dma-channels property\n");
  return VAR_5;
 }


 if (VAR_3->n_channels <= 0 ||
     VAR_3->n_channels >= VAR_1) {
  FUNC_1(VAR_2, "invalid number of channels %u\n",
   VAR_3->n_channels);
  return -VAR_0;
 }

 VAR_3->channels_mask = FUNC_0(VAR_3->n_channels - 1, 0);

 return 0;
}
