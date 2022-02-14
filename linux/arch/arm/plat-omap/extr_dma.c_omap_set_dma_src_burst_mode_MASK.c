
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum omap_dma_burst_mode { ____Placeholder_omap_dma_burst_mode } omap_dma_burst_mode ;
struct TYPE_2__ {int (* dma_read ) (int ,int) ;int (* dma_write ) (int,int ,int) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;




 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ,int) ;

void FUNC_4(int VAR_2, enum omap_dma_burst_mode VAR_3)
{
 unsigned int VAR_4 = 0;
 u32 VAR_5;

 VAR_5 = VAR_1->dma_read(VAR_0, VAR_2);
 VAR_5 &= ~(0x03 << 7);

 switch (VAR_3) {
 case 128:
  break;
 case 130:
  if (FUNC_1())
   VAR_4 = 0x1;
  else
   VAR_4 = 0x2;
  break;
 case 129:
  if (FUNC_1()) {
   VAR_4 = 0x2;
   break;
  }





 case 131:
  if (FUNC_1()) {
   VAR_4 = 0x3;
   break;
  }


 default:
  FUNC_0();
 }

 VAR_5 |= (VAR_4 << 7);
 VAR_1->dma_write(VAR_5, VAR_0, VAR_2);
}
