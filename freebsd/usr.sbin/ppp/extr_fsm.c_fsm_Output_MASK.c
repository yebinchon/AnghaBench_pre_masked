
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct fsmheader {int code; int id; int length; } ;
typedef struct fsmheader u_char ;
struct mbuf {int dummy; } ;
struct fsm_opt_hdr {int dummy; } ;
struct fsm {TYPE_2__* link; int proto; int bundle; int LogLevel; TYPE_1__* fn; int state; } ;
struct TYPE_5__ {int lcp; int name; } ;
struct TYPE_4__ {int (* DecodeConfig ) (struct fsm*,struct fsmheader*,struct fsmheader*,int ,int *) ;} ;






 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,struct mbuf*,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,char*,struct mbuf*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 struct mbuf* FUNC_10 (int,int) ;
 int FUNC_11 (scalar_t__,struct fsmheader*,unsigned int) ;
 int FUNC_12 (struct fsm*,struct fsmheader*,struct fsmheader*,int ,int *) ;

void
FUNC_13(struct fsm *VAR_2, u_int VAR_3, u_int VAR_4, u_char *VAR_5, unsigned VAR_6,
           int VAR_7)
{
  int VAR_8;
  struct fsmheader VAR_9;
  struct mbuf *VAR_10;

  if (FUNC_8(VAR_2->LogLevel)) {
    FUNC_9(VAR_2->LogLevel, "%s: Send%s(%d) state = %s\n",
              VAR_2->link->name, FUNC_0(VAR_3), VAR_4, FUNC_3(VAR_2->state));
    switch (VAR_3) {
      case 128:
      case 131:
      case 129:
      case 130:
        (*VAR_2->fn->DecodeConfig)(VAR_2, VAR_5, VAR_5 + VAR_6, VAR_1, ((void*)0));
        if (VAR_6 < sizeof(struct fsm_opt_hdr))
          FUNC_9(VAR_2->LogLevel, "  [EMPTY]\n");
        break;
    }
  }

  VAR_8 = sizeof(struct fsmheader) + VAR_6;
  VAR_9.code = VAR_3;
  VAR_9.id = VAR_4;
  VAR_9.length = FUNC_4(VAR_8);
  VAR_10 = FUNC_10(VAR_8, VAR_7);
  FUNC_11(FUNC_2(VAR_10), &VAR_9, sizeof(struct fsmheader));
  if (VAR_6)
    FUNC_11(FUNC_2(VAR_10) + sizeof(struct fsmheader), VAR_5, VAR_6);
  FUNC_7(VAR_0, "fsm_Output", VAR_10);
  FUNC_6(VAR_2->link, VAR_10, VAR_2->bundle, FUNC_1(VAR_2->link) - 1,
                  VAR_2->proto);

  if (VAR_3 == 129)
    FUNC_5(&VAR_2->link->lcp);
}
