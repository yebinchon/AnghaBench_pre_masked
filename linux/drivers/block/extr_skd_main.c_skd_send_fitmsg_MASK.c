
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct skd_fitmsg_context {int length; int mb_dma_address; scalar_t__ msg_buf; } ;
struct skd_device {int dbg_level; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct skd_device*,int ,int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (struct skd_device*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct skd_device *VAR_7,
       struct skd_fitmsg_context *VAR_8)
{
 u64 VAR_9;

 FUNC_1(&VAR_7->pdev->dev, "dma address %pad, busy=%d\n",
  VAR_8->mb_dma_address, FUNC_3(VAR_7));
 FUNC_1(&VAR_7->pdev->dev, "msg_buf %p\n", VAR_8->msg_buf);

 VAR_9 = VAR_8->mb_dma_address;
 VAR_9 |= VAR_5;

 if (FUNC_5(VAR_7->dbg_level > 1)) {
  u8 *VAR_10 = (u8 *)VAR_8->msg_buf;
  int VAR_11;
  for (VAR_11 = 0; VAR_11 < VAR_8->length; VAR_11 += 8) {
   FUNC_1(&VAR_7->pdev->dev, "msg[%2d] %8ph\n", VAR_11,
    &VAR_10[VAR_11]);
   if (VAR_11 == 0)
    VAR_11 = 64 - 8;
  }
 }

 if (VAR_8->length > 256)
  VAR_9 |= VAR_3;
 else if (VAR_8->length > 128)
  VAR_9 |= VAR_2;
 else if (VAR_8->length > 64)
  VAR_9 |= VAR_1;
 else





  VAR_9 |= VAR_4;

 FUNC_2(&VAR_7->pdev->dev, VAR_8->mb_dma_address,
       VAR_8->length, VAR_0);


 FUNC_4();

 FUNC_0(VAR_7, VAR_9, VAR_6);
}
