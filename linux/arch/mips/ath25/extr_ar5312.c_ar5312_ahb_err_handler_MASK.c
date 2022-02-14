
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_2);
 u32 VAR_8 = FUNC_0(VAR_3);
 u32 VAR_9 = FUNC_0(VAR_0);
 u32 VAR_10 = FUNC_0(VAR_1);

 FUNC_2("AHB interrupt: PROCADDR=0x%8.8x PROC1=0x%8.8x DMAADDR=0x%8.8x DMA1=0x%8.8x\n",
   VAR_8, VAR_7, VAR_10, VAR_9);

 FUNC_1("AHB error");
 return VAR_4;
}
