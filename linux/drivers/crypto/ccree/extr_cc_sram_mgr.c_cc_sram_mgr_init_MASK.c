
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_sram_ctx {int sram_free_offset; } ;
struct cc_drvdata {scalar_t__ hw_rev; struct cc_sram_ctx* sram_mgr_handle; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct cc_drvdata*,int ) ;
 int FUNC_2 (struct device*,char*,int*) ;
 struct cc_sram_ctx* FUNC_3 (struct device*,int,int ) ;
 struct device* FUNC_4 (struct cc_drvdata*) ;

int FUNC_5(struct cc_drvdata *VAR_5)
{
 struct cc_sram_ctx *VAR_6;
 dma_addr_t VAR_7 = 0;
 struct device *VAR_8 = FUNC_4(VAR_5);

 if (VAR_5->hw_rev < VAR_0) {

  VAR_7 = (dma_addr_t)FUNC_1(VAR_5,
           FUNC_0(VAR_4));

  if ((VAR_7 & 0x3) != 0) {
   FUNC_2(VAR_8, "Invalid SRAM offset %pad\n", &VAR_7);
   return -VAR_1;
  }
 }


 VAR_6 = FUNC_3(VAR_8, sizeof(*VAR_6), VAR_3);

 if (!VAR_6)
  return -VAR_2;

 VAR_6->sram_free_offset = VAR_7;
 VAR_5->sram_mgr_handle = VAR_6;

 return 0;
}
