
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char* u_long ;
struct TYPE_5__ {int maxreq; int maxtrm; int timeout; } ;
struct TYPE_6__ {char* max_mru; char* max_mtu; char* lqrperiod; char* openmode; char* ident; int protocomp; int pap; scalar_t__ echo; int lqr; int chap81; int chap80lm; int chap80nt; int chap05; int acfcomp; TYPE_2__ fsm; scalar_t__ accmap; scalar_t__ mtu; scalar_t__ mru; } ;
struct TYPE_4__ {int state; int name; } ;
struct lcp {TYPE_3__ cfg; int my_reject; scalar_t__ want_shortseq; int want_mrru; scalar_t__ want_magic; scalar_t__ want_acfcomp; scalar_t__ want_protocomp; scalar_t__ want_accmap; int want_mru; int his_reject; scalar_t__ his_shortseq; int his_mrru; scalar_t__ his_magic; scalar_t__ his_acfcomp; scalar_t__ his_protocomp; scalar_t__ his_accmap; int his_mru; TYPE_1__ fsm; } ;
struct link {int name; struct lcp lcp; } ;
struct cmdargs {int prompt; } ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 struct link* FUNC_1 (struct cmdargs const*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;

int
FUNC_4(struct cmdargs const *VAR_1)
{
  struct link *VAR_2;
  struct lcp *VAR_3;

  VAR_2 = FUNC_1(VAR_1);
  VAR_3 = &VAR_2->lcp;

  FUNC_3(VAR_1->prompt, "%s: %s [%s]\n", VAR_2->name, VAR_3->fsm.name,
                FUNC_0(VAR_3->fsm.state));
  FUNC_3(VAR_1->prompt,
                " his side: MRU %d, ACCMAP %08lx, PROTOCOMP %s, ACFCOMP %s,\n"
                "           MAGIC %08lx, MRRU %u, SHORTSEQ %s, REJECT %04x\n",
                VAR_3->his_mru, (u_long)VAR_3->his_accmap,
                VAR_3->his_protocomp ? "on" : "off",
                VAR_3->his_acfcomp ? "on" : "off",
                (u_long)VAR_3->his_magic, VAR_3->his_mrru,
                VAR_3->his_shortseq ? "on" : "off", VAR_3->his_reject);
  FUNC_3(VAR_1->prompt,
                " my  side: MRU %d, ACCMAP %08lx, PROTOCOMP %s, ACFCOMP %s,\n"
                "           MAGIC %08lx, MRRU %u, SHORTSEQ %s, REJECT %04x\n",
                VAR_3->want_mru, (u_long)VAR_3->want_accmap,
                VAR_3->want_protocomp ? "on" : "off",
                VAR_3->want_acfcomp ? "on" : "off",
                (u_long)VAR_3->want_magic, VAR_3->want_mrru,
                VAR_3->want_shortseq ? "on" : "off", VAR_3->my_reject);

  if (VAR_3->cfg.mru)
    FUNC_3(VAR_1->prompt, "\n Defaults: MRU = %d (max %d), ",
                  VAR_3->cfg.mru, VAR_3->cfg.max_mru);
  else
    FUNC_3(VAR_1->prompt, "\n Defaults: MRU = any (max %d), ",
                  VAR_3->cfg.max_mru);
  if (VAR_3->cfg.mtu)
    FUNC_3(VAR_1->prompt, "MTU = %d (max %d), ",
                  VAR_3->cfg.mtu, VAR_3->cfg.max_mtu);
  else
    FUNC_3(VAR_1->prompt, "MTU = any (max %d), ", VAR_3->cfg.max_mtu);
  FUNC_3(VAR_1->prompt, "ACCMAP = %08lx\n", (u_long)VAR_3->cfg.accmap);
  FUNC_3(VAR_1->prompt, "           LQR period = %us, ",
                VAR_3->cfg.lqrperiod);
  FUNC_3(VAR_1->prompt, "Open Mode = %s",
                VAR_3->cfg.openmode == VAR_0 ? "passive" : "active");
  if (VAR_3->cfg.openmode > 0)
    FUNC_3(VAR_1->prompt, " (delay %ds)", VAR_3->cfg.openmode);
  FUNC_3(VAR_1->prompt, "\n           FSM retry = %us, max %u Config"
                " REQ%s, %u Term REQ%s\n", VAR_3->cfg.fsm.timeout,
                VAR_3->cfg.fsm.maxreq, VAR_3->cfg.fsm.maxreq == 1 ? "" : "s",
                VAR_3->cfg.fsm.maxtrm, VAR_3->cfg.fsm.maxtrm == 1 ? "" : "s");
  FUNC_3(VAR_1->prompt, "    Ident: %s\n", VAR_3->cfg.ident);
  FUNC_3(VAR_1->prompt, "\n Negotiation:\n");
  FUNC_3(VAR_1->prompt, "           ACFCOMP =   %s\n",
                FUNC_2(VAR_3->cfg.acfcomp));
  FUNC_3(VAR_1->prompt, "           CHAP =      %s\n",
                FUNC_2(VAR_3->cfg.chap05));

  FUNC_3(VAR_1->prompt, "           CHAP80 =    %s\n",
                FUNC_2(VAR_3->cfg.chap80nt));
  FUNC_3(VAR_1->prompt, "           LANMan =    %s\n",
                FUNC_2(VAR_3->cfg.chap80lm));
  FUNC_3(VAR_1->prompt, "           CHAP81 =    %s\n",
                FUNC_2(VAR_3->cfg.chap81));

  FUNC_3(VAR_1->prompt, "           LQR =       %s\n",
                FUNC_2(VAR_3->cfg.lqr));
  FUNC_3(VAR_1->prompt, "           LCP ECHO =  %s\n",
                VAR_3->cfg.echo ? "enabled" : "disabled");
  FUNC_3(VAR_1->prompt, "           PAP =       %s\n",
                FUNC_2(VAR_3->cfg.pap));
  FUNC_3(VAR_1->prompt, "           PROTOCOMP = %s\n",
                FUNC_2(VAR_3->cfg.protocomp));

  return 0;
}
