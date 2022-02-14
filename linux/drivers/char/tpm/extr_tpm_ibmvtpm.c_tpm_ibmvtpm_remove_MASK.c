
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dev; int unit_address; int irq; } ;
struct tpm_chip {int dev; } ;
struct TYPE_2__ {scalar_t__ crq_addr; } ;
struct ibmvtpm_dev {struct ibmvtpm_dev* rtce_buf; int rtce_size; int rtce_dma_handle; int dev; TYPE_1__ crq_queue; int crq_dma_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct ibmvtpm_dev*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct ibmvtpm_dev*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct tpm_chip*) ;

__attribute__((used)) static int FUNC_10(struct vio_dev *VAR_4)
{
 struct tpm_chip *VAR_5 = FUNC_1(&VAR_4->dev);
 struct ibmvtpm_dev *VAR_6 = FUNC_1(&VAR_5->dev);
 int VAR_7 = 0;

 FUNC_9(VAR_5);

 FUNC_4(VAR_4->irq, VAR_6);

 do {
  if (VAR_7)
   FUNC_7(100);
  VAR_7 = FUNC_8(VAR_3, VAR_4->unit_address);
 } while (VAR_7 == VAR_2 || FUNC_0(VAR_7));

 FUNC_3(VAR_6->dev, VAR_6->crq_dma_handle,
    VAR_0, VAR_1);
 FUNC_5((unsigned long)VAR_6->crq_queue.crq_addr);

 if (VAR_6->rtce_buf) {
  FUNC_3(VAR_6->dev, VAR_6->rtce_dma_handle,
     VAR_6->rtce_size, VAR_1);
  FUNC_6(VAR_6->rtce_buf);
 }

 FUNC_6(VAR_6);

 FUNC_2(&VAR_4->dev, ((void*)0));

 return 0;
}
