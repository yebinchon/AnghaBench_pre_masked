
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msgdma_device {int idle; scalar_t__ csr; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct msgdma_device *VAR_8)
{
 u32 VAR_9;
 int VAR_10;


 FUNC_1(VAR_6, VAR_8->csr + VAR_5);
 FUNC_1(VAR_2, VAR_8->csr + VAR_0);

 VAR_10 = FUNC_2(VAR_8->csr + VAR_5, VAR_9,
     (VAR_9 & VAR_7) == 0,
     1, 10000);
 if (VAR_10)
  FUNC_0(VAR_8->dev, "DMA channel did not reset\n");


 FUNC_1(VAR_6, VAR_8->csr + VAR_5);


 FUNC_1(VAR_4 | VAR_3 |
    VAR_1, VAR_8->csr + VAR_0);

 VAR_8->idle = 1;
}
