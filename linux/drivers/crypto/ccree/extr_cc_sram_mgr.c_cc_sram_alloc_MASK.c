
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cc_sram_ctx {int sram_free_offset; } ;
struct cc_drvdata {struct cc_sram_ctx* sram_mgr_handle; } ;
typedef int cc_sram_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,unsigned int) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 struct device* FUNC_2 (struct cc_drvdata*) ;

cc_sram_addr_t FUNC_3(struct cc_drvdata *VAR_2, u32 VAR_3)
{
 struct cc_sram_ctx *VAR_4 = VAR_2->sram_mgr_handle;
 struct device *VAR_5 = FUNC_2(VAR_2);
 cc_sram_addr_t VAR_6;

 if ((VAR_3 & 0x3)) {
  FUNC_1(VAR_5, "Requested buffer size (%u) is not multiple of 4",
   VAR_3);
  return VAR_1;
 }
 if (VAR_3 > (VAR_0 - VAR_4->sram_free_offset)) {
  FUNC_1(VAR_5, "Not enough space to allocate %u B (at offset %llu)\n",
   VAR_3, VAR_4->sram_free_offset);
  return VAR_1;
 }

 VAR_6 = VAR_4->sram_free_offset;
 VAR_4->sram_free_offset += VAR_3;
 FUNC_0(VAR_5, "Allocated %u B @ %u\n", VAR_3, (unsigned int)VAR_6);
 return VAR_6;
}
