
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (struct device*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct device*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, dma_addr_t VAR_6,
      u32 VAR_7, u32 *VAR_8,
      u32 **VAR_9)
{
 u32 *VAR_10 = *VAR_9;
 u32 VAR_11;


 VAR_11 = (*VAR_8 + VAR_7 / VAR_0 + 1);
 if (VAR_11 > VAR_4) {
  FUNC_3(VAR_5, "Too many mlli entries. current %d max %d\n",
   VAR_11, VAR_4);
  return -VAR_1;
 }


 while (VAR_7 > VAR_0) {
  FUNC_0(VAR_10, VAR_6);
  FUNC_1(VAR_10, VAR_0);
  FUNC_2(VAR_5, "entry[%d]: single_buff=0x%08X size=%08X\n",
   *VAR_8, VAR_10[VAR_2],
   VAR_10[VAR_3]);
  VAR_6 += VAR_0;
  VAR_7 -= VAR_0;
  VAR_10 = VAR_10 + 2;
  (*VAR_8)++;
 }

 FUNC_0(VAR_10, VAR_6);
 FUNC_1(VAR_10, VAR_7);
 FUNC_2(VAR_5, "entry[%d]: single_buff=0x%08X size=%08X\n",
  *VAR_8, VAR_10[VAR_2],
  VAR_10[VAR_3]);
 VAR_10 = VAR_10 + 2;
 *VAR_9 = VAR_10;
 (*VAR_8)++;
 return 0;
}
