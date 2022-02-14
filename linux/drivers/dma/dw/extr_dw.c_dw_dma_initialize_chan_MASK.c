
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int hs_polarity; int src_id; int dst_id; } ;
struct TYPE_5__ {int device; } ;
struct dw_dma_chan {TYPE_3__ dws; int priority; TYPE_2__ chan; } ;
struct dw_dma {TYPE_1__* pdata; } ;
struct TYPE_4__ {int protctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct dw_dma_chan*,int ,int) ;
 struct dw_dma* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dw_dma_chan *VAR_5)
{
 struct dw_dma *VAR_6 = FUNC_5(VAR_5->chan.device);
 u32 VAR_7 = VAR_2;
 u32 VAR_8 = FUNC_3(VAR_5->priority);
 bool VAR_9 = VAR_5->dws.hs_polarity;

 VAR_7 |= FUNC_0(VAR_5->dws.dst_id);
 VAR_7 |= FUNC_2(VAR_5->dws.src_id);
 VAR_7 |= FUNC_1(VAR_6->pdata->protctl);


 VAR_8 |= VAR_9 ? VAR_3 | VAR_4 : 0;

 FUNC_4(VAR_5, VAR_1, VAR_8);
 FUNC_4(VAR_5, VAR_0, VAR_7);
}
