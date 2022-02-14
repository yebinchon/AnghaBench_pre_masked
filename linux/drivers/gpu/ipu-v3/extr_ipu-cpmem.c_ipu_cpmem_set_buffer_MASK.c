
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipuv3_channel {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ipuv3_channel*,int ,int) ;

void FUNC_2(struct ipuv3_channel *VAR_2, int VAR_3, dma_addr_t VAR_4)
{
 FUNC_0(VAR_4 & 0x7);

 if (VAR_3)
  FUNC_1(VAR_2, VAR_1, VAR_4 >> 3);
 else
  FUNC_1(VAR_2, VAR_0, VAR_4 >> 3);
}
