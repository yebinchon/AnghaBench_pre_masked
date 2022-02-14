
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u_int32_t ;
struct mqueue {scalar_t__ top; } ;
struct mbuf {int dummy; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_8__ {TYPE_2__ fsm; } ;
struct link {int name; TYPE_4__ ccp; } ;
struct TYPE_5__ {scalar_t__ state; struct bundle* bundle; } ;
struct ipv6cp {struct mqueue* Queue; TYPE_1__ fsm; } ;
struct TYPE_7__ {int alive; } ;
struct bundle {TYPE_3__ filter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,unsigned int*) ;
 int FUNC_1 (struct ipv6cp*) ;
 int VAR_1 ;
 int FUNC_2 (struct mbuf*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct bundle*,unsigned int) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct ipv6cp*,int) ;
 int FUNC_6 (struct link*,struct mbuf*,struct bundle*,int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 struct mbuf* FUNC_8 (struct mqueue*) ;
 int FUNC_9 (struct mbuf*) ;
 struct mbuf* FUNC_10 (struct mbuf*) ;
 struct mbuf* FUNC_11 (struct mbuf*,unsigned int*,int) ;

int
FUNC_12(struct ipv6cp *VAR_4, struct link *VAR_5)
{
  struct bundle *VAR_6 = VAR_4->fsm.bundle;
  struct mqueue *VAR_7;
  struct mbuf *VAR_8;
  int VAR_9;
  u_int32_t VAR_10 = 0;
  unsigned VAR_11 = 0;

  if (VAR_4->fsm.state != VAR_3)
    return 0;




  if (VAR_5->ccp.fsm.state != VAR_3 && FUNC_4(&VAR_5->ccp)) {
    FUNC_7(VAR_1, "%s: Not transmitting... waiting for CCP\n", VAR_5->name);
    return 0;
  }

  VAR_7 = VAR_4->Queue + FUNC_1(VAR_4) - 1;
  do {
    if (VAR_7->top) {
      VAR_8 = FUNC_8(VAR_7);
      VAR_8 = FUNC_11(VAR_8, &VAR_10, sizeof VAR_10);
      VAR_8 = FUNC_10(VAR_8);
      VAR_9 = FUNC_9(VAR_8);
      if (!FUNC_0(FUNC_2(VAR_8), VAR_0, &VAR_6->filter.alive,
                       &VAR_11)) {
        if (VAR_10 == 0)
          VAR_10 = VAR_11;
        FUNC_3(VAR_6, VAR_10);
      }
      FUNC_6(VAR_5, VAR_8, VAR_6, 0, VAR_2);
      FUNC_5(VAR_4, VAR_9);
      return 1;
    }
  } while (VAR_7-- != VAR_4->Queue);

  return 0;
}
