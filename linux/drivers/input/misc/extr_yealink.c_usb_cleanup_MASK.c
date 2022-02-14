
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yealink_dev {int irq_dma; int irq_data; int udev; int ctl_dma; int ctl_data; struct yealink_dev* ctl_req; int urb_ctl; int urb_irq; scalar_t__ idev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct yealink_dev*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct yealink_dev *VAR_1, int VAR_2)
{
 if (VAR_1 == ((void*)0))
  return VAR_2;

        if (VAR_1->idev) {
  if (VAR_2)
   FUNC_0(VAR_1->idev);
  else
   FUNC_1(VAR_1->idev);
 }

 FUNC_4(VAR_1->urb_irq);
 FUNC_4(VAR_1->urb_ctl);

 FUNC_2(VAR_1->ctl_req);
 FUNC_3(VAR_1->udev, VAR_0, VAR_1->ctl_data, VAR_1->ctl_dma);
 FUNC_3(VAR_1->udev, VAR_0, VAR_1->irq_data, VAR_1->irq_dma);

 FUNC_2(VAR_1);
 return VAR_2;
}
