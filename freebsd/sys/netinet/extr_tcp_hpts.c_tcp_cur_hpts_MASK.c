
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_hpts_entry {int dummy; } ;
struct inpcb {size_t inp_hpts_cpu; } ;
typedef size_t int32_t ;
struct TYPE_2__ {struct tcp_hpts_entry** rp_ent; } ;


 TYPE_1__ VAR_0 ;

struct tcp_hpts_entry *
FUNC_0(struct inpcb *VAR_1)
{
 int32_t VAR_2;
 struct tcp_hpts_entry *VAR_3;

 VAR_2 = VAR_1->inp_hpts_cpu;
 VAR_3 = VAR_0.rp_ent[VAR_2];
 return (VAR_3);
}
