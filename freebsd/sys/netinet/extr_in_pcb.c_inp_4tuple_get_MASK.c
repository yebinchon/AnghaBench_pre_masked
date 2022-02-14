
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct inpcb {int inp_fport; int inp_lport; TYPE_2__ inp_faddr; TYPE_1__ inp_laddr; } ;


 int FUNC_0 (struct inpcb*) ;

void
FUNC_1(struct inpcb *VAR_0, uint32_t *VAR_1, uint16_t *VAR_2,
    uint32_t *VAR_3, uint16_t *VAR_4)
{

 FUNC_0(VAR_0);
 *VAR_1 = VAR_0->inp_laddr.s_addr;
 *VAR_3 = VAR_0->inp_faddr.s_addr;
 *VAR_2 = VAR_0->inp_lport;
 *VAR_4 = VAR_0->inp_fport;
}
