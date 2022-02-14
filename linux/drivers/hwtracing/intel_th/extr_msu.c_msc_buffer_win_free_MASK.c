
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msc_window {int sgt; int entry; scalar_t__ nr_blocks; } ;
struct msc {int mbuf_priv; TYPE_1__* mbuf; scalar_t__ base_addr; int * base; int win_list; int nr_pages; } ;
struct TYPE_2__ {int (* free_window ) (int ,int ) ;} ;


 int FUNC_0 (struct msc*,struct msc_window*) ;
 int FUNC_1 (struct msc_window*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct msc_window*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct msc *VAR_0, struct msc_window *VAR_1)
{
 VAR_0->nr_pages -= VAR_1->nr_blocks;

 FUNC_2(&VAR_1->entry);
 if (FUNC_3(&VAR_0->win_list)) {
  VAR_0->base = ((void*)0);
  VAR_0->base_addr = 0;
 }

 FUNC_4(VAR_1);

 if (VAR_0->mbuf && VAR_0->mbuf->free_window)
  VAR_0->mbuf->free_window(VAR_0->mbuf_priv, VAR_1->sgt);
 else
  FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_1);
}
