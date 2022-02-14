
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct fsl_re_cmpnd_frame {int efrl32; int addr_low; int addr_high; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fsl_re_cmpnd_frame *VAR_2, u8 VAR_3,
      size_t VAR_4, dma_addr_t VAR_5, bool VAR_6)
{
 u32 VAR_7 = VAR_4 & VAR_1;

 VAR_7 |= VAR_6 << VAR_0;
 VAR_2[VAR_3].efrl32 = VAR_7;
 VAR_2[VAR_3].addr_high = FUNC_1(VAR_5);
 VAR_2[VAR_3].addr_low = FUNC_0(VAR_5);
}
