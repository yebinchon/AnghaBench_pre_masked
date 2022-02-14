
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_4__ {scalar_t__ seq; } ;
struct mp {TYPE_1__ out; scalar_t__ peer_is12bit; } ;
struct mbuf {int dummy; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_6__ {TYPE_2__ fsm; } ;
struct link {int name; TYPE_3__ ccp; } ;
struct bundle {int dummy; } ;


 scalar_t__ FUNC_0 (struct link*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct link*,struct mbuf*,struct bundle*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (struct mbuf*,char*,int,int ) ;
 int FUNC_8 (int*,char*) ;
 int FUNC_9 (int*,char*) ;

__attribute__((used)) static void
FUNC_10(struct mp *VAR_4, struct bundle *VAR_5, struct link *VAR_6,
          struct mbuf *VAR_7, u_int32_t VAR_8, u_int32_t VAR_9)
{
  char VAR_10[4];



  if (VAR_4->peer_is12bit) {
    u_int16_t VAR_11;

    VAR_11 = (VAR_8 << 15) | (VAR_9 << 14) | (u_int16_t)VAR_4->out.seq;
    FUNC_9(&VAR_11, VAR_10);
    VAR_7 = FUNC_7(VAR_7, VAR_10, 2, 0);
  } else {
    u_int32_t VAR_12;

    VAR_12 = (VAR_8 << 31) | (VAR_9 << 30) | (u_int32_t)VAR_4->out.seq;
    FUNC_8(&VAR_12, VAR_10);
    VAR_7 = FUNC_7(VAR_7, VAR_10, 4, 0);
  }
  if (FUNC_4(VAR_0))
    FUNC_5(VAR_0, "MP[frag %d]: Send %zd bytes on link `%s'\n",
               VAR_4->out.seq, FUNC_6(VAR_7), VAR_6->name);
  VAR_4->out.seq = FUNC_2(VAR_4->peer_is12bit, VAR_4->out.seq);

  if (VAR_6->ccp.fsm.state != VAR_3 && FUNC_1(&VAR_6->ccp)) {
    FUNC_5(VAR_1, "%s: Not transmitting... waiting for CCP\n", VAR_6->name);
    return;
  }

  FUNC_3(VAR_6, VAR_7, VAR_5, FUNC_0(VAR_6) - 1, VAR_2);
}
