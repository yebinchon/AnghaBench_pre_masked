
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dmac_chan {scalar_t__ index; } ;
struct of_phandle_args {scalar_t__* args; } ;
struct dma_chan {int dummy; } ;


 struct usb_dmac_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct usb_dmac_chan *VAR_2 = FUNC_0(VAR_0);
 struct of_phandle_args *VAR_3 = VAR_1;


 if (VAR_2->index != VAR_3->args[0])
  return 0;

 return 1;
}
