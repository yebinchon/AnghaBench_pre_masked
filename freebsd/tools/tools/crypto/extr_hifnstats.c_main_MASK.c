
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_stats {int hst_invalid; int hst_nomem; int hst_abort; int hst_noirq; int hst_unaligned; int hst_totbatch; int hst_maxbatch; int hst_nomem_map; int hst_nomem_load; int hst_nomem_mbuf; int hst_nomem_mcl; int hst_nomem_cr; int hst_nomem_sd; int hst_opackets; int hst_obytes; int hst_ipackets; int hst_ibytes; } ;
typedef int stats ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int,int,...) ;
 scalar_t__ FUNC_2 (char*,struct hifn_stats*,size_t*,int *,int ) ;

int
FUNC_3(int VAR_0, char *VAR_1[])
{
 struct hifn_stats VAR_2;
 size_t VAR_3;

 VAR_3 = sizeof (VAR_2);
 if (FUNC_2("hw.hifn.stats", &VAR_2, &VAR_3, ((void*)0), 0) < 0)
  FUNC_0(1, "kern.hifn.stats");

 FUNC_1("input %llu bytes %u packets\n",
  VAR_2.hst_ibytes, VAR_2.hst_ipackets);
 FUNC_1("output %llu bytes %u packets\n",
  VAR_2.hst_obytes, VAR_2.hst_opackets);
 FUNC_1("invalid %u nomem %u abort %u\n",
  VAR_2.hst_invalid, VAR_2.hst_nomem, VAR_2.hst_abort);
 FUNC_1("noirq %u unaligned %u\n",
  VAR_2.hst_noirq, VAR_2.hst_unaligned);
 FUNC_1("totbatch %u maxbatch %u\n",
  VAR_2.hst_totbatch, VAR_2.hst_maxbatch);
 FUNC_1("nomem: map %u load %u mbuf %u mcl %u cr %u sd %u\n",
  VAR_2.hst_nomem_map, VAR_2.hst_nomem_load,
  VAR_2.hst_nomem_mbuf, VAR_2.hst_nomem_mcl,
  VAR_2.hst_nomem_cr, VAR_2.hst_nomem_sd);
 return 0;
}
