
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mbuf {int m_len; } ;
struct fsmheader {int code; int id; int length; } ;
struct fsmcodedesc {int (* recv ) (struct fsm*,struct fsmheader*,struct mbuf*) ;scalar_t__ check_reqid; scalar_t__ inc_reqid; int name; } ;
struct fsm {int min_code; int max_code; int reqid; int bundle; int state; TYPE_1__* link; int LogLevel; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct fsmcodedesc* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fsm*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ,size_t,int,...) ;
 int FUNC_5 (struct mbuf*) ;
 size_t FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (struct mbuf*,struct fsmheader*,int,int ) ;
 struct mbuf* FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (struct mbuf*,struct fsmheader*,int) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (struct fsm*,struct fsmheader*,struct mbuf*) ;

void
FUNC_12(struct fsm *VAR_5, struct mbuf *VAR_6)
{
  size_t VAR_7;
  struct fsmheader VAR_8;
  const struct fsmcodedesc *VAR_9;

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7 < sizeof(struct fsmheader)) {
    FUNC_5(VAR_6);
    return;
  }
  VAR_6 = FUNC_9(VAR_6, &VAR_8, sizeof VAR_8);

  if (FUNC_10(VAR_8.length) > VAR_7) {
    FUNC_4(VAR_2, "%s: Oops: Got %zu bytes but %d byte payload "
               "- dropped\n", VAR_5->link->name, VAR_7, (int)FUNC_10(VAR_8.length));
    FUNC_5(VAR_6);
    return;
  }

  if (VAR_8.code < VAR_5->min_code || VAR_8.code > VAR_5->max_code ||
      VAR_8.code > sizeof VAR_1 / sizeof *VAR_1) {




    static u_char VAR_10;

    VAR_6 = FUNC_7(VAR_6, &VAR_8, sizeof VAR_8, 0);
    VAR_6 = FUNC_8(VAR_6);
    FUNC_3(VAR_5, VAR_0, VAR_10++, FUNC_1(VAR_6), VAR_6->m_len, VAR_3);
    FUNC_5(VAR_6);
    return;
  }

  VAR_9 = VAR_1 + VAR_8.code - 1;
  if (VAR_8.id != VAR_5->reqid && VAR_9->check_reqid &&
      FUNC_0(VAR_5->bundle, VAR_4)) {
    FUNC_4(VAR_5->LogLevel, "%s: Recv%s(%d), dropped (expected %d)\n",
               VAR_5->link->name, VAR_9->name, VAR_8.id, VAR_5->reqid);
    return;
  }

  FUNC_4(VAR_5->LogLevel, "%s: Recv%s(%d) state = %s\n",
             VAR_5->link->name, VAR_9->name, VAR_8.id, FUNC_2(VAR_5->state));

  if (VAR_9->inc_reqid && (VAR_8.id == VAR_5->reqid ||
      (!FUNC_0(VAR_5->bundle, VAR_4) && VAR_9->check_reqid)))
    VAR_5->reqid++;

  (*VAR_9->recv)(VAR_5, &VAR_8, VAR_6);
}
