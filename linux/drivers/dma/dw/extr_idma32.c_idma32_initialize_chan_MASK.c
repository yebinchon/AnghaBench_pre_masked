
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dst_id; int src_id; } ;
struct dw_dma_chan {TYPE_1__ dws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct dw_dma_chan*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct dw_dma_chan *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;


 VAR_6 |= VAR_2 | VAR_3;


 VAR_5 |= FUNC_0(VAR_4->dws.dst_id & 0xf);
 VAR_5 |= FUNC_2(VAR_4->dws.src_id & 0xf);


 VAR_5 |= FUNC_1(VAR_4->dws.dst_id >> 4 & 0x3);
 VAR_5 |= FUNC_3(VAR_4->dws.src_id >> 4 & 0x3);

 FUNC_4(VAR_4, VAR_1, VAR_6);
 FUNC_4(VAR_4, VAR_0, VAR_5);
}
