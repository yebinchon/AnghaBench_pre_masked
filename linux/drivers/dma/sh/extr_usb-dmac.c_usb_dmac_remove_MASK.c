
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_dmac {int n_channels; int engine; int * channels; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct usb_dmac* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct usb_dmac*,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct usb_dmac *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_channels; ++VAR_2)
  FUNC_4(VAR_1, &VAR_1->channels[VAR_2]);
 FUNC_1(VAR_0->dev.of_node);
 FUNC_0(&VAR_1->engine);

 FUNC_3(&VAR_0->dev);

 return 0;
}
