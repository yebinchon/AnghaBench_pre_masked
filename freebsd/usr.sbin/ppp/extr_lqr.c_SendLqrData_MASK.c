
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int m_len; int m_offset; } ;
struct lqrdata {int dummy; } ;
struct TYPE_2__ {int link; int bundle; } ;
struct lcp {TYPE_1__ fsm; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct lcp*,int ) ;
 int FUNC_2 (int ,struct mbuf*,int ,scalar_t__,int ) ;
 struct mbuf* FUNC_3 (int,int ) ;
 int FUNC_4 (struct lcp*,int ) ;

__attribute__((used)) static void
FUNC_5(struct lcp *VAR_2)
{
  struct mbuf *VAR_3;
  int VAR_4;

  VAR_4 = FUNC_4(VAR_2, VAR_1) +
          FUNC_1(VAR_2, VAR_1);
  VAR_3 = FUNC_3(sizeof(struct lqrdata) + VAR_4, VAR_0);
  VAR_3->m_len -= VAR_4;
  VAR_3->m_offset += VAR_4;
  FUNC_2(VAR_2->fsm.link, VAR_3, VAR_2->fsm.bundle,
                  FUNC_0(VAR_2->fsm.link) - 1, VAR_1);
}
