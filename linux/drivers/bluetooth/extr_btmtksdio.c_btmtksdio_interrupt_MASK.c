
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sdio_func {int dummy; } ;
struct btmtksdio_dev {int dev; TYPE_2__* hdev; int tx_work; int func; } ;
struct TYPE_5__ {int err_rx; } ;
struct TYPE_6__ {TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_3 (struct btmtksdio_dev*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct btmtksdio_dev* FUNC_9 (struct sdio_func*) ;
 int FUNC_10 (struct sdio_func*,int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sdio_func*,int,int ,int *) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct sdio_func *VAR_9)
{
 struct btmtksdio_dev *VAR_10 = FUNC_9(VAR_9);
 u32 VAR_11;
 u16 VAR_12;







 FUNC_11(VAR_10->func);

 FUNC_4(VAR_10->dev);

 FUNC_8(VAR_10->func);


 FUNC_12(VAR_9, VAR_0, VAR_4, 0);

 VAR_11 = FUNC_10(VAR_9, VAR_3, ((void*)0));
 FUNC_12(VAR_9, VAR_11, VAR_3, ((void*)0));

 if (FUNC_13(!VAR_11))
  FUNC_1(VAR_10->hdev, "CHISR is 0");

 if (VAR_11 & VAR_2)
  FUNC_0(VAR_10->hdev, "Get fw own back");

 if (VAR_11 & VAR_7)
  FUNC_7(&VAR_10->tx_work);
 else if (FUNC_13(VAR_11 & VAR_8))
  FUNC_2(VAR_10->hdev, "Tx fifo overflow");

 if (VAR_11 & VAR_5) {
  VAR_12 = (VAR_11 & VAR_6) >> 16;

  if (FUNC_3(VAR_10, VAR_12) < 0)
   VAR_10->hdev->stat.err_rx++;
 }


 FUNC_12(VAR_9, VAR_1, VAR_4, 0);

 FUNC_5(VAR_10->dev);
 FUNC_6(VAR_10->dev);
}
