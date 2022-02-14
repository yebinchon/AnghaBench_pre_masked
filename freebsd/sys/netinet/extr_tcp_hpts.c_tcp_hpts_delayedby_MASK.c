
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct inpcb {size_t inp_hpts_cpu; } ;
struct TYPE_4__ {TYPE_1__** rp_ent; } ;
struct TYPE_3__ {int p_delayed_by; } ;


 TYPE_2__ VAR_0 ;

uint16_t
FUNC_0(struct inpcb *VAR_1){
 return (VAR_0.rp_ent[VAR_1->inp_hpts_cpu]->p_delayed_by);
}
