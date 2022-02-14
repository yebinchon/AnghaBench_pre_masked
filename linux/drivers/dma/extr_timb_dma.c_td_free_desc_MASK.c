
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phys; int chan; } ;
struct timb_dma_desc {struct timb_dma_desc* desc_list; int desc_list_len; TYPE_1__ txd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,struct timb_dma_desc*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct timb_dma_desc*) ;

__attribute__((used)) static void FUNC_5(struct timb_dma_desc *VAR_1)
{
 FUNC_2(FUNC_0(VAR_1->txd.chan), "Freeing desc: %p\n", VAR_1);
 FUNC_3(FUNC_1(VAR_1->txd.chan), VAR_1->txd.phys,
  VAR_1->desc_list_len, VAR_0);

 FUNC_4(VAR_1->desc_list);
 FUNC_4(VAR_1);
}
