
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safe_stats {int st_ibytes; int st_ipackets; int st_obytes; int st_opackets; int st_invalid; int st_badsession; int st_badflags; int st_nodesc; int st_badalg; int st_ringfull; int st_peoperr; int st_dmaerr; int st_bypasstoobig; int st_skipmismatch; int st_lenmismatch; int st_coffmisaligned; int st_cofftoobig; int st_iovmisaligned; int st_iovnotuniform; int st_noicvcopy; int st_unaligned; int st_notuniform; int st_nomap; int st_noload; int st_nomcl; int st_nombuf; int st_maxqchip; int st_rng; int st_rngalarm; } ;
typedef int stats ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int,int,...) ;
 scalar_t__ FUNC_2 (char*,struct safe_stats*,size_t*,int *,int ) ;

int
FUNC_3(int VAR_0, char *VAR_1[])
{
 struct safe_stats VAR_2;
 size_t VAR_3;

 VAR_3 = sizeof (VAR_2);
 if (FUNC_2("hw.safe.stats", &VAR_2, &VAR_3, ((void*)0), 0) < 0)
  FUNC_0(1, "hw.safe.stats");

 FUNC_1("input %llu bytes %u packets\n",
  VAR_2.st_ibytes, VAR_2.st_ipackets);
 FUNC_1("output %llu bytes %u packets\n",
  VAR_2.st_obytes, VAR_2.st_opackets);
 FUNC_1("invalid %u badsession %u badflags %u\n",
  VAR_2.st_invalid, VAR_2.st_badsession, VAR_2.st_badflags);
 FUNC_1("nodesc %u badalg %u ringfull %u\n",
  VAR_2.st_nodesc, VAR_2.st_badalg, VAR_2.st_ringfull);
 FUNC_1("peoperr %u dmaerr %u bypasstoobig %u\n",
  VAR_2.st_peoperr, VAR_2.st_dmaerr, VAR_2.st_bypasstoobig);
 FUNC_1("skipmismatch %u lenmismatch %u coffmisaligned %u cofftoobig %u\n",
  VAR_2.st_skipmismatch, VAR_2.st_lenmismatch,
  VAR_2.st_coffmisaligned, VAR_2.st_cofftoobig);
 FUNC_1("iovmisaligned %u iovnotuniform %u noicvcopy %u\n",
  VAR_2.st_iovmisaligned, VAR_2.st_iovnotuniform,
  VAR_2.st_noicvcopy);
 FUNC_1("unaligned %u notuniform %u nomap %u noload %u\n",
  VAR_2.st_unaligned, VAR_2.st_notuniform, VAR_2.st_nomap,
  VAR_2.st_noload);
 FUNC_1("nomcl %u mbuf %u maxqchip %u\n",
  VAR_2.st_nomcl, VAR_2.st_nombuf, VAR_2.st_maxqchip);
 FUNC_1("rng %u rngalarm %u\n",
  VAR_2.st_rng, VAR_2.st_rngalarm);
 return 0;
}
