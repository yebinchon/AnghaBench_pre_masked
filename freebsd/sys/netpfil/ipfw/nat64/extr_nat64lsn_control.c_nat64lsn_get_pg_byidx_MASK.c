
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union nat64lsn_pgidx {int addr; int port; int proto; } ;
struct nat64lsn_pg {int dummy; } ;
struct nat64lsn_cfg {int plen4; struct nat64lsn_alias* aliases; } ;
struct nat64lsn_alias {int addr; TYPE_3__** udp; int * udp_pgmask; TYPE_2__** tcp; int * tcp_pgmask; TYPE_1__** icmp; int * icmp_pgmask; } ;
struct TYPE_6__ {struct nat64lsn_pg** pgptr; } ;
struct TYPE_5__ {struct nat64lsn_pg** pgptr; } ;
struct TYPE_4__ {struct nat64lsn_pg** pgptr; } ;





 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static struct nat64lsn_pg*
FUNC_2(struct nat64lsn_cfg *VAR_1, union nat64lsn_pgidx *VAR_2)
{
 struct nat64lsn_alias *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_1->aliases[VAR_2->addr & ((1 << (32 - VAR_1->plen4)) - 1)];
 FUNC_1(VAR_3->addr == VAR_2->addr);

 VAR_4 = (VAR_2->port - VAR_0) / 64;
 switch (VAR_2->proto) {
 case 130:
  if (FUNC_0(VAR_3->icmp_pgmask[VAR_4 / 32], VAR_4 % 32))
   return (VAR_3->icmp[VAR_4 / 32]->pgptr[VAR_4 % 32]);
  break;
 case 129:
  if (FUNC_0(VAR_3->tcp_pgmask[VAR_4 / 32], VAR_4 % 32))
   return (VAR_3->tcp[VAR_4 / 32]->pgptr[VAR_4 % 32]);
  break;
 case 128:
  if (FUNC_0(VAR_3->udp_pgmask[VAR_4 / 32], VAR_4 % 32))
   return (VAR_3->udp[VAR_4 / 32]->pgptr[VAR_4 % 32]);
  break;
 }
 return (((void*)0));
}
