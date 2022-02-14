
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcm2835_desc {size_t frames; TYPE_2__* cb_list; TYPE_1__* c; } ;
struct TYPE_4__ {int paddr; int cb; } ;
struct TYPE_3__ {int cb_pool; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct bcm2835_desc*) ;

__attribute__((used)) static void FUNC_2(struct bcm2835_desc *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->frames; VAR_1++)
  FUNC_0(VAR_0->c->cb_pool, VAR_0->cb_list[VAR_1].cb,
         VAR_0->cb_list[VAR_1].paddr);

 FUNC_1(VAR_0);
}
