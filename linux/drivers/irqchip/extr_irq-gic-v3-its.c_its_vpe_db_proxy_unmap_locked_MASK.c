
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_vpe {int vpe_proxy_event; } ;
struct TYPE_2__ {size_t next_victim; int ** vpes; int dev; } ;


 int FUNC_0 (int ,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct its_vpe *VAR_1)
{

 if (VAR_1->vpe_proxy_event == -1)
  return;

 FUNC_0(VAR_0.dev, VAR_1->vpe_proxy_event);
 VAR_0.vpes[VAR_1->vpe_proxy_event] = ((void*)0);
 if (VAR_0.vpes[VAR_0.next_victim])
  VAR_0.next_victim = VAR_1->vpe_proxy_event;

 VAR_1->vpe_proxy_event = -1;
}
