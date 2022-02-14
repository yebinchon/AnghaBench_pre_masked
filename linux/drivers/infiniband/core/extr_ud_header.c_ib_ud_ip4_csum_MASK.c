
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iphdr {int ihl; int version; int daddr; int saddr; scalar_t__ check; int protocol; int ttl; int frag_off; int id; int tot_len; int tos; } ;
struct TYPE_2__ {int daddr; int saddr; int protocol; int ttl; int frag_off; int id; int tot_len; int tos; } ;
struct ib_ud_header {TYPE_1__ ip4; } ;
typedef int __sum16 ;


 int FUNC_0 (int *,int) ;

__sum16 FUNC_1(struct ib_ud_header *VAR_0)
{
 struct iphdr VAR_1;

 VAR_1.ihl = 5;
 VAR_1.version = 4;
 VAR_1.tos = VAR_0->ip4.tos;
 VAR_1.tot_len = VAR_0->ip4.tot_len;
 VAR_1.id = VAR_0->ip4.id;
 VAR_1.frag_off = VAR_0->ip4.frag_off;
 VAR_1.ttl = VAR_0->ip4.ttl;
 VAR_1.protocol = VAR_0->ip4.protocol;
 VAR_1.check = 0;
 VAR_1.saddr = VAR_0->ip4.saddr;
 VAR_1.daddr = VAR_0->ip4.daddr;

 return FUNC_0((u8 *)&VAR_1, VAR_1.ihl);
}
