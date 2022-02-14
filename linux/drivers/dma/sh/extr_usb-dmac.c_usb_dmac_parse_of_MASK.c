
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dmac {int n_channels; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct usb_dmac *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->of_node;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, "dma-channels", &VAR_2->n_channels);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1, "unable to read dma-channels property\n");
  return VAR_4;
 }

 if (VAR_2->n_channels <= 0 || VAR_2->n_channels >= 100) {
  FUNC_0(VAR_1, "invalid number of channels %u\n",
   VAR_2->n_channels);
  return -VAR_0;
 }

 return 0;
}
