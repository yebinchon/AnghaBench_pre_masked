
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pata_macio_priv {struct macio_dev* mdev; TYPE_2__* dev; int node; } ;
struct of_device_id {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_5__ {TYPE_2__ dev; } ;
struct macio_dev {int media_bay; TYPE_1__ ofdev; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct pata_macio_priv* FUNC_2 (TYPE_2__*,int,int ) ;
 unsigned long FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct macio_dev*) ;
 unsigned long FUNC_6 (struct macio_dev*,int ) ;
 scalar_t__ FUNC_7 (struct macio_dev*) ;
 scalar_t__ FUNC_8 (struct macio_dev*,int,char*) ;
 int FUNC_9 (struct macio_dev*) ;
 int FUNC_10 (struct macio_dev*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct pata_macio_priv*,int ,int ,int ,unsigned long) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct macio_dev *VAR_4,
        const struct of_device_id *VAR_5)
{
 struct pata_macio_priv *VAR_6;
 resource_size_t VAR_7, VAR_8 = 0;
 unsigned long VAR_9;
 int VAR_10;


 if (FUNC_9(VAR_4) == 0) {
  FUNC_0(&VAR_4->ofdev.dev,
   "No addresses for controller\n");
  return -VAR_2;
 }


 FUNC_5(VAR_4);


 VAR_6 = FUNC_2(&VAR_4->ofdev.dev,
       sizeof(struct pata_macio_priv), VAR_3);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->node = FUNC_11(VAR_4->ofdev.dev.of_node);
 VAR_6->mdev = VAR_4;
 VAR_6->dev = &VAR_4->ofdev.dev;


 if (FUNC_8(VAR_4, 0, "pata-macio")) {
  FUNC_0(&VAR_4->ofdev.dev,
   "Cannot obtain taskfile resource\n");
  return -VAR_0;
 }
 VAR_7 = FUNC_10(VAR_4, 0);


 if (FUNC_9(VAR_4) >= 2) {
  if (FUNC_8(VAR_4, 1, "pata-macio-dma"))
   FUNC_0(&VAR_4->ofdev.dev,
    "Cannot obtain DMA resource\n");
  else
   VAR_8 = FUNC_10(VAR_4, 1);
 }
 if (FUNC_7(VAR_4) == 0) {
  FUNC_1(&VAR_4->ofdev.dev,
    "No interrupts for controller, using 13\n");
  VAR_9 = FUNC_3(((void*)0), 13);
 } else
  VAR_9 = FUNC_6(VAR_4, 0);


 FUNC_4(VAR_6->mdev->media_bay);


 VAR_10 = FUNC_12(VAR_6,
        VAR_7,
        VAR_8,
        0,
        VAR_9);
 FUNC_13(VAR_6->mdev->media_bay);

 return VAR_10;
}
