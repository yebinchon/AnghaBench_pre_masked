
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tcphdr {int seq; } ;
struct iphdr {int tot_len; } ;
struct TYPE_2__ {scalar_t__ va; } ;
struct i40iw_puda_buf {int maclen; int tcphlen; scalar_t__ ipv4; TYPE_1__ mem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(struct i40iw_puda_buf *VAR_0, u16 VAR_1, u32 VAR_2)
{
 struct tcphdr *VAR_3;
 struct iphdr *VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 u8 *VAR_7 = (u8 *)VAR_0->mem.va;

 VAR_5 = (VAR_0->ipv4) ? 20 : 40;
 VAR_4 = (struct iphdr *)(VAR_7 + VAR_0->maclen);
 VAR_3 = (struct tcphdr *)(VAR_7 + VAR_0->maclen + VAR_5);
 VAR_6 = VAR_1 + VAR_0->tcphlen + VAR_5;

 VAR_4->tot_len = FUNC_1(VAR_6);
 VAR_3->seq = FUNC_0(VAR_2);
}
