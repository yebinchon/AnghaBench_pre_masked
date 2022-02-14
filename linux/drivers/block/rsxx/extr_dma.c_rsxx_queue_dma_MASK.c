
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int off; unsigned int cnt; } ;
struct rsxx_dma {unsigned int laddr; unsigned int pg_off; int list; struct page* page; TYPE_1__ sub_page; void* cb_data; int cb; int cmd; } ;
struct rsxx_cardinfo {int dummy; } ;
struct page {int dummy; } ;
struct list_head {int dummy; } ;
typedef int rsxx_dma_cb ;
typedef int blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char,unsigned int,unsigned int,unsigned int,struct page*,unsigned int) ;
 struct rsxx_dma* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int VAR_4 ;

__attribute__((used)) static blk_status_t FUNC_4(struct rsxx_cardinfo *VAR_5,
         struct list_head *VAR_6,
         int VAR_7,
         unsigned int VAR_8,
         unsigned int VAR_9,
         unsigned int VAR_10,
         struct page *VAR_11,
         unsigned int VAR_12,
         rsxx_dma_cb VAR_13,
         void *VAR_14)
{
 struct rsxx_dma *VAR_15;

 VAR_15 = FUNC_2(VAR_4, VAR_1);
 if (!VAR_15)
  return VAR_0;

 VAR_15->cmd = VAR_7 ? VAR_3 : VAR_2;
 VAR_15->laddr = VAR_10;
 VAR_15->sub_page.off = (VAR_8 >> 9);
 VAR_15->sub_page.cnt = (VAR_9 >> 9);
 VAR_15->page = VAR_11;
 VAR_15->pg_off = VAR_12;
 VAR_15->cb = VAR_13;
 VAR_15->cb_data = VAR_14;

 FUNC_1(FUNC_0(VAR_5),
  "Queuing[%c] laddr %x off %d cnt %d page %p pg_off %d\n",
  VAR_7 ? 'W' : 'R', VAR_15->laddr, VAR_15->sub_page.off,
  VAR_15->sub_page.cnt, VAR_15->page, VAR_15->pg_off);


 FUNC_3(&VAR_15->list, VAR_6);

 return 0;
}
