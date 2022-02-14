
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct slimpro_i2c_dev {int dev; int dma_buffer; TYPE_1__ adapter; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int,int ) ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (struct slimpro_i2c_dev*,int*,int*) ;

__attribute__((used)) static int FUNC_10(struct slimpro_i2c_dev *VAR_5, u32 VAR_6, u32 VAR_7,
        u32 VAR_8, u32 VAR_9, u32 VAR_10,
        u32 VAR_11, void *VAR_12)
{
 dma_addr_t VAR_13;
 u32 VAR_14[3];
 int VAR_15;

 VAR_13 = FUNC_5(VAR_5->dev, VAR_5->dma_buffer, VAR_10, VAR_0);
 if (FUNC_6(VAR_5->dev, VAR_13)) {
  FUNC_4(&VAR_5->adapter.dev, "Error in mapping dma buffer %p\n",
   VAR_5->dma_buffer);
  return -VAR_1;
 }

 VAR_14[0] = FUNC_2(VAR_2, VAR_6, VAR_4,
     VAR_9, VAR_8, VAR_10);
 VAR_14[1] = VAR_3 |
   FUNC_1(VAR_11) |
   FUNC_3(VAR_13) |
   FUNC_0(VAR_7);
 VAR_14[2] = (u32)VAR_13;

 VAR_15 = FUNC_9(VAR_5, VAR_14, VAR_14);


 FUNC_8(VAR_12, VAR_5->dma_buffer, VAR_10);

 FUNC_7(VAR_5->dev, VAR_13, VAR_10, VAR_0);
 return VAR_15;
}
