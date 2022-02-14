
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_sg_table {int mode; TYPE_2__* sgt; int addrs; int pages; int num_pages; } ;
struct TYPE_3__ {int base; } ;
struct vmw_piter {unsigned long i; TYPE_1__ iter; int * dma_address; int * next; int addrs; int pages; int * page; int num_pages; } ;
struct TYPE_4__ {int orig_nents; int sgl; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





void FUNC_2(struct vmw_piter *VAR_6, const struct vmw_sg_table *VAR_7,
       unsigned long VAR_8)
{
 VAR_6->i = VAR_8 - 1;
 VAR_6->num_pages = VAR_7->num_pages;
 VAR_6->page = &VAR_2;
 VAR_6->pages = VAR_7->pages;
 switch (VAR_7->mode) {
 case 128:
  VAR_6->next = &VAR_1;
  VAR_6->dma_address = &VAR_3;
  break;
 case 131:
  VAR_6->next = &VAR_1;
  VAR_6->dma_address = &VAR_0;
  VAR_6->addrs = VAR_7->addrs;
  break;
 case 129:
 case 130:
  VAR_6->next = &VAR_5;
  VAR_6->dma_address = &VAR_4;
  FUNC_1(&VAR_6->iter.base, VAR_7->sgt->sgl,
         VAR_7->sgt->orig_nents, VAR_8);
  break;
 default:
  FUNC_0();
 }
}
