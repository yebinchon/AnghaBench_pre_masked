
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef long u_long ;
typedef int u_int32_t ;
struct mbuf {int dummy; } ;
struct lcp {scalar_t__ his_magic; scalar_t__ want_magic; } ;
struct TYPE_5__ {int seq_recv; } ;
struct TYPE_6__ {TYPE_1__ echo; } ;
struct hdlc {TYPE_2__ lqm; } ;
struct fsm {TYPE_4__* link; } ;
struct echolqr {scalar_t__ magic; scalar_t__ signature; scalar_t__ sequence; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {struct hdlc hdlc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lcp* FUNC_0 (struct fsm*) ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,long,long,...) ;
 int FUNC_3 (int ) ;
 long FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct mbuf*,struct echolqr*,int) ;
 void* FUNC_6 (scalar_t__) ;

struct mbuf *
FUNC_7(struct fsm *VAR_2, struct mbuf *VAR_3)
{
  struct hdlc *VAR_4 = &FUNC_1(VAR_2->link)->hdlc;
  struct lcp *VAR_5 = FUNC_0(VAR_2);
  struct echolqr VAR_6;

  if (FUNC_4(VAR_3) >= sizeof VAR_6) {
    FUNC_3(FUNC_5(VAR_3, &VAR_6, sizeof VAR_6));
    VAR_3 = ((void*)0);
    VAR_6.magic = FUNC_6(VAR_6.magic);
    VAR_6.signature = FUNC_6(VAR_6.signature);
    VAR_6.sequence = FUNC_6(VAR_6.sequence);


    if (VAR_6.magic != 0 && VAR_6.magic != VAR_5->his_magic &&
        VAR_6.magic != VAR_5->want_magic) {
      FUNC_2(VAR_0, "%s: lqr_RecvEcho: Bad magic: expected 0x%08x,"
                 " got 0x%08x\n", VAR_2->link->name, VAR_5->his_magic, VAR_6.magic);




    }
    if (VAR_6.signature == VAR_1
 || VAR_6.signature == VAR_5->want_magic) {

      if ((VAR_4->lqm.echo.seq_recv > (u_int32_t)0 - 5 && VAR_6.sequence < 5) ||
          (VAR_4->lqm.echo.seq_recv <= (u_int32_t)0 - 5 &&
           VAR_6.sequence > VAR_4->lqm.echo.seq_recv))
        VAR_4->lqm.echo.seq_recv = VAR_6.sequence;
    } else
      FUNC_2(VAR_0, "lqr_RecvEcho: Got sig 0x%08lx, not 0x%08lx !\n",
                (u_long)VAR_6.signature, (u_long)VAR_1);
  } else
    FUNC_2(VAR_0, "lqr_RecvEcho: Got packet size %zd, expecting %ld !\n",
              FUNC_4(VAR_3), (long)sizeof(struct echolqr));
  return VAR_3;
}
