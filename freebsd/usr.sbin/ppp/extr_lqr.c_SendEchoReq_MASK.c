
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int link; } ;
struct lcp {TYPE_4__ fsm; int want_magic; } ;
struct TYPE_5__ {int seq_sent; } ;
struct TYPE_6__ {TYPE_1__ echo; } ;
struct hdlc {TYPE_2__ lqm; } ;
struct echolqr {void* sequence; void* signature; void* magic; } ;
struct TYPE_7__ {struct hdlc hdlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int *,int,int ) ;
 void* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct lcp *VAR_3)
{
  struct hdlc *VAR_4 = &FUNC_2(VAR_3->fsm.link)->hdlc;
  struct echolqr VAR_5;

  VAR_5.magic = FUNC_1(VAR_3->want_magic);
  VAR_5.signature = FUNC_1(VAR_2);
  VAR_5.sequence = FUNC_1(VAR_4->lqm.echo.seq_sent);
  FUNC_0(&VAR_3->fsm, VAR_0, VAR_4->lqm.echo.seq_sent++,
            (u_char *)&VAR_5, sizeof VAR_5, VAR_1);
}
