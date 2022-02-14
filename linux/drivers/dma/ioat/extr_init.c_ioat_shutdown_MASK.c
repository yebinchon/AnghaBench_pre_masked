
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ioatdma_device {struct ioatdma_chan** idx; } ;
struct ioatdma_chan {int timer; int prep_lock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ioatdma_device*) ;
 int FUNC_2 (struct ioatdma_chan*) ;
 struct ioatdma_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_2)
{
 struct ioatdma_device *VAR_3 = FUNC_3(VAR_2);
 struct ioatdma_chan *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_3->idx[VAR_5];
  if (!VAR_4)
   continue;

  FUNC_5(&VAR_4->prep_lock);
  FUNC_4(VAR_0, &VAR_4->state);
  FUNC_6(&VAR_4->prep_lock);






  FUNC_0(&VAR_4->timer);


  FUNC_2(VAR_4);
 }

 FUNC_1(VAR_3);
}
