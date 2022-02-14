
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_w_ctx {int ppa; int lba; } ;
struct TYPE_2__ {int ppa; int lba; } ;
struct pblk_rb_entry {TYPE_1__ w_ctx; int data; } ;
struct pblk_rb {int seg_size; } ;


 int FUNC_0 (int ,void*,int ) ;

__attribute__((used)) static void FUNC_1(struct pblk_rb *VAR_0, void *VAR_1,
      struct pblk_w_ctx VAR_2,
      struct pblk_rb_entry *VAR_3)
{
 FUNC_0(VAR_3->data, VAR_1, VAR_0->seg_size);

 VAR_3->w_ctx.lba = VAR_2.lba;
 VAR_3->w_ctx.ppa = VAR_2.ppa;
}
