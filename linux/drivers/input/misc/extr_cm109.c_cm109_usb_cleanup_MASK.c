
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm109_dev {int urb_ctl; int urb_irq; int irq_dma; scalar_t__ irq_data; int udev; int ctl_dma; scalar_t__ ctl_data; struct cm109_dev* ctl_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct cm109_dev*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cm109_dev *VAR_1)
{
 FUNC_0(VAR_1->ctl_req);
 if (VAR_1->ctl_data)
  FUNC_1(VAR_1->udev, VAR_0,
      VAR_1->ctl_data, VAR_1->ctl_dma);
 if (VAR_1->irq_data)
  FUNC_1(VAR_1->udev, VAR_0,
      VAR_1->irq_data, VAR_1->irq_dma);

 FUNC_2(VAR_1->urb_irq);
 FUNC_2(VAR_1->urb_ctl);
 FUNC_0(VAR_1);
}
