
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct qib_user_sdma_pkt {TYPE_1__* addr; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* dma_length; int addr; void* kvaddr; struct page* page; void* dma_mapped; void* put_page; void* last_desc; void* first_desc; void* length; void* offset; } ;



__attribute__((used)) static void FUNC_0(struct qib_user_sdma_pkt *VAR_0,
        int VAR_1, u16 VAR_2, u16 VAR_3,
        u16 VAR_4, u16 VAR_5,
        u16 VAR_6, u16 VAR_7,
        struct page *VAR_8, void *VAR_9,
        dma_addr_t VAR_10, u16 VAR_11)
{
 VAR_0->addr[VAR_1].offset = VAR_2;
 VAR_0->addr[VAR_1].length = VAR_3;
 VAR_0->addr[VAR_1].first_desc = VAR_4;
 VAR_0->addr[VAR_1].last_desc = VAR_5;
 VAR_0->addr[VAR_1].put_page = VAR_6;
 VAR_0->addr[VAR_1].dma_mapped = VAR_7;
 VAR_0->addr[VAR_1].page = VAR_8;
 VAR_0->addr[VAR_1].kvaddr = VAR_9;
 VAR_0->addr[VAR_1].addr = VAR_10;
 VAR_0->addr[VAR_1].dma_length = VAR_11;
}
