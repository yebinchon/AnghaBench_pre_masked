
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ tx_block; } ;
struct TYPE_3__ {int dev; } ;
struct slimpro_i2c_dev {int dev; int rd_complete; TYPE_2__ mbox_client; int dma_buffer; TYPE_1__ adapter; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ,int,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int,int ) ;
 int FUNC_7 (int ,void*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct slimpro_i2c_dev*,int*,int*) ;

__attribute__((used)) static int FUNC_10(struct slimpro_i2c_dev *VAR_5, u32 VAR_6,
        u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10,
        void *VAR_11)
{
 dma_addr_t VAR_12;
 u32 VAR_13[3];
 int VAR_14;

 FUNC_7(VAR_5->dma_buffer, VAR_11, VAR_10);
 VAR_12 = FUNC_4(VAR_5->dev, VAR_5->dma_buffer, VAR_10,
          VAR_0);
 if (FUNC_5(VAR_5->dev, VAR_12)) {
  FUNC_3(&VAR_5->adapter.dev, "Error in mapping dma buffer %p\n",
   VAR_5->dma_buffer);
  return -VAR_1;
 }

 VAR_13[0] = FUNC_1(VAR_2, VAR_6, VAR_4,
     VAR_9, VAR_8, VAR_10);
 VAR_13[1] = VAR_3 |
   FUNC_2(VAR_12) |
   FUNC_0(VAR_7);
 VAR_13[2] = (u32)VAR_12;

 if (VAR_5->mbox_client.tx_block)
  FUNC_8(&VAR_5->rd_complete);

 VAR_14 = FUNC_9(VAR_5, VAR_13, VAR_13);

 FUNC_6(VAR_5->dev, VAR_12, VAR_10, VAR_0);
 return VAR_14;
}
