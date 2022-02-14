
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cnt; scalar_t__ off; } ;
struct rsxx_dma {unsigned int laddr; int list; void* cb_data; int cb; scalar_t__ pg_off; int * page; TYPE_1__ sub_page; scalar_t__ dma_addr; int cmd; } ;
struct rsxx_cardinfo {int dummy; } ;
struct list_head {int dummy; } ;
typedef int rsxx_dma_cb ;
typedef int blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct rsxx_dma* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int VAR_3 ;

__attribute__((used)) static blk_status_t FUNC_4(struct rsxx_cardinfo *VAR_4,
      struct list_head *VAR_5,
      unsigned int VAR_6,
      rsxx_dma_cb VAR_7,
      void *VAR_8)
{
 struct rsxx_dma *VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_9)
  return VAR_0;

 VAR_9->cmd = VAR_2;
 VAR_9->laddr = VAR_6;
 VAR_9->dma_addr = 0;
 VAR_9->sub_page.off = 0;
 VAR_9->sub_page.cnt = 0;
 VAR_9->page = ((void*)0);
 VAR_9->pg_off = 0;
 VAR_9->cb = VAR_7;
 VAR_9->cb_data = VAR_8;

 FUNC_1(FUNC_0(VAR_4), "Queuing[D] laddr %x\n", VAR_9->laddr);

 FUNC_3(&VAR_9->list, VAR_5);

 return 0;
}
