
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubsec_stats {int hst_invalid; int hst_badsession; int hst_badflags; int hst_nodesc; int hst_badalg; int hst_nomem; int hst_queuefull; int hst_dmaerr; int hst_mcrerr; int hst_nodmafree; int hst_lenmismatch; int hst_skipmismatch; int hst_iovmisaligned; int hst_noirq; int hst_unaligned; int hst_nomap; int hst_noload; int hst_nomcl; int hst_totbatch; int hst_maxbatch; int hst_maxqueue; int hst_maxqchip; int hst_mcr1full; int hst_rng; int hst_modexp; int hst_modexpcrt; int hst_opackets; int hst_obytes; int hst_ipackets; int hst_ibytes; } ;
typedef int stats ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int,int,...) ;
 scalar_t__ FUNC_2 (char*,struct ubsec_stats*,size_t*,int *,int ) ;

int
FUNC_3(int VAR_0, char *VAR_1[])
{
 struct ubsec_stats VAR_2;
 size_t VAR_3;

 VAR_3 = sizeof (VAR_2);
 if (FUNC_2("hw.ubsec.stats", &VAR_2, &VAR_3, ((void*)0), 0) < 0)
  FUNC_0(1, "kern.ubsec_stats");

 FUNC_1("input %llu bytes %u packets\n",
  VAR_2.hst_ibytes, VAR_2.hst_ipackets);
 FUNC_1("output %llu bytes %u packets\n",
  VAR_2.hst_obytes, VAR_2.hst_opackets);
 FUNC_1("invalid %u badsession %u badflags %u\n",
  VAR_2.hst_invalid, VAR_2.hst_badsession, VAR_2.hst_badflags);
 FUNC_1("nodesc %u badalg %u nomem %u queuefull %u\n",
  VAR_2.hst_nodesc, VAR_2.hst_badalg, VAR_2.hst_nomem,
  VAR_2.hst_queuefull);
 FUNC_1("dmaerr %u mcrerr %u nodmafree %u\n",
  VAR_2.hst_dmaerr, VAR_2.hst_mcrerr, VAR_2.hst_nodmafree);
 FUNC_1("lenmismatch %u skipmisatch %u iovmisalined %u\n",
  VAR_2.hst_lenmismatch, VAR_2.hst_skipmismatch,
  VAR_2.hst_iovmisaligned);
 FUNC_1("noirq %u unaligned %u nomap %u noload %u nomcl %u\n",
  VAR_2.hst_noirq, VAR_2.hst_unaligned, VAR_2.hst_nomap,
  VAR_2.hst_noload, VAR_2.hst_nomcl);
 FUNC_1("totbatch %u maxbatch %u\n",
  VAR_2.hst_totbatch, VAR_2.hst_maxbatch);
 FUNC_1("maxqueue %u maxqchip %u mcr1full %u\n",
  VAR_2.hst_maxqueue, VAR_2.hst_maxqchip, VAR_2.hst_mcr1full);
 FUNC_1("rng %u modexp %u moexpcrt %u\n",
  VAR_2.hst_rng, VAR_2.hst_modexp, VAR_2.hst_modexpcrt);
 return 0;
}
