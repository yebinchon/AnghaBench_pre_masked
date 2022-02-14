
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int32_t ;
typedef int u_char ;
struct mbuf {int dummy; } ;
struct lcp {scalar_t__ his_magic; int want_magic; } ;
struct fsmheader {int length; int id; } ;
struct fsm {scalar_t__ state; TYPE_1__* link; int LogLevel; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int * FUNC_0 (struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct lcp* FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*,int ,int ,int *,int,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,scalar_t__*) ;

__attribute__((used)) static void
FUNC_10(struct fsm *VAR_4, struct fsmheader *VAR_5, struct mbuf *VAR_6)
{
  struct lcp *VAR_7 = FUNC_1(VAR_4);
  u_char *VAR_8;
  u_int32_t VAR_9;

  VAR_6 = FUNC_5(VAR_6);
  FUNC_6(VAR_6, VAR_1);

  if (VAR_7 && FUNC_7(VAR_5->length) - sizeof *VAR_5 >= 4) {
    VAR_8 = FUNC_0(VAR_6);
    FUNC_9(VAR_8, &VAR_9);
    if (VAR_9 != VAR_7->his_magic) {
      FUNC_3(VAR_4->LogLevel, "%s: RecvEchoReq: magic 0x%08lx is wrong,"
                 " expecting 0x%08lx\n", VAR_4->link->name, (u_long)VAR_9,
                 (u_long)VAR_7->his_magic);

    }
    if (VAR_4->state == VAR_3) {
      FUNC_8(&VAR_7->want_magic, VAR_8);
      FUNC_2(VAR_4, VAR_0, VAR_5->id, VAR_8,
                 FUNC_7(VAR_5->length) - sizeof *VAR_5, VAR_2);
    }
  }
  FUNC_4(VAR_6);
}
