
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_6__ {int unknownproto; } ;
struct TYPE_5__ {int ifInDiscards; } ;
struct TYPE_7__ {TYPE_2__ stats; TYPE_1__ lqm; } ;
struct physical {TYPE_3__ hdlc; } ;
struct mbuf {int m_len; } ;
struct link {int lcp; } ;
struct bundle {int dummy; } ;
struct TYPE_8__ {struct mbuf* (* fn ) (struct bundle*,struct link*,struct mbuf*) ;int proto; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct physical* FUNC_3 (struct link*) ;
 int FUNC_4 (int ,char*,char*,int ,int ) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (int ) ;
 int FUNC_7 (struct mbuf*,int ,int ,int ) ;
 struct mbuf* FUNC_8 (struct bundle*,struct link*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_9(struct bundle *VAR_3, struct link *VAR_4, struct mbuf *VAR_5, u_short VAR_6)
{
  unsigned VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    if (VAR_2[VAR_7].proto == VAR_6) {
      VAR_5 = (*VAR_2[VAR_7].fn)(VAR_3, VAR_4, VAR_5);
      break;
    }

  if (VAR_5) {
    struct physical *VAR_8 = FUNC_3(VAR_4);

    FUNC_4(VAR_1, "%s protocol 0x%04x (%s)\n",
               VAR_7 == VAR_0 ? "Unknown" : "Unexpected", VAR_6,
               FUNC_1(VAR_6));
    VAR_5 = FUNC_6(FUNC_7(VAR_5, VAR_6, 0, 0));
    FUNC_2(&VAR_4->lcp, FUNC_0(VAR_5), VAR_5->m_len);
    if (VAR_8) {
      VAR_8->hdlc.lqm.ifInDiscards++;
      VAR_8->hdlc.stats.unknownproto++;
    }
    FUNC_5(VAR_5);
  }
}
