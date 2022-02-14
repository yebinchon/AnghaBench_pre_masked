
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct its_vpe {int vpe_proxy_event; int vpe_db_lpi; int col_idx; } ;
struct TYPE_4__ {int * col_map; } ;
struct TYPE_6__ {int nr_ites; TYPE_1__ event_map; } ;
struct TYPE_5__ {size_t next_victim; TYPE_3__* dev; struct its_vpe** vpes; } ;


 int FUNC_0 (TYPE_3__*,int ,size_t) ;
 int FUNC_1 (struct its_vpe*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct its_vpe *VAR_1)
{

 if (VAR_1->vpe_proxy_event != -1)
  return;


 if (VAR_0.vpes[VAR_0.next_victim])
  FUNC_1(VAR_0.vpes[VAR_0.next_victim]);


 VAR_0.vpes[VAR_0.next_victim] = VAR_1;
 VAR_1->vpe_proxy_event = VAR_0.next_victim;
 VAR_0.next_victim = (VAR_0.next_victim + 1) % VAR_0.dev->nr_ites;

 VAR_0.dev->event_map.col_map[VAR_1->vpe_proxy_event] = VAR_1->col_idx;
 FUNC_0(VAR_0.dev, VAR_1->vpe_db_lpi, VAR_1->vpe_proxy_event);
}
