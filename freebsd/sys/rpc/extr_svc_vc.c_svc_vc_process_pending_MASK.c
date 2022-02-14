
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int sb_lowat; int sb_hiwat; } ;
struct socket {TYPE_1__ so_rcv; } ;
struct mbuf {scalar_t__ m_len; struct mbuf* m_next; } ;
struct cf_conn {int resid; int eor; struct mbuf* mpending; struct mbuf* mreq; } ;
typedef int header ;
struct TYPE_7__ {struct mbuf* m_next; } ;
struct TYPE_6__ {struct socket* xp_socket; scalar_t__ xp_p1; } ;
typedef TYPE_2__ SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct mbuf*,int) ;
 int FUNC_3 (struct mbuf*,int ,int,char*) ;
 TYPE_4__* FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (struct mbuf*,scalar_t__,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(SVCXPRT *VAR_4)
{
 struct cf_conn *VAR_5 = (struct cf_conn *) VAR_4->xp_p1;
 struct socket *VAR_6 = VAR_4->xp_socket;
 struct mbuf *VAR_7;






 if (!VAR_5->resid && VAR_5->mpending) {






  size_t VAR_8 = 0;
  uint32_t VAR_9;

  VAR_7 = VAR_5->mpending;
  while (VAR_8 < sizeof(uint32_t) && VAR_7) {
   VAR_8 += VAR_7->m_len;
   VAR_7 = VAR_7->m_next;
  }
  if (VAR_8 < sizeof(uint32_t)) {
   VAR_6->so_rcv.sb_lowat = sizeof(uint32_t) - VAR_8;
   return (VAR_0);
  }
  FUNC_3(VAR_5->mpending, 0, sizeof(VAR_9),
      (char *)&VAR_9);
  VAR_9 = FUNC_6(VAR_9);
  VAR_5->eor = (VAR_9 & 0x80000000) != 0;
  VAR_5->resid = VAR_9 & 0x7fffffff;
  FUNC_2(VAR_5->mpending, sizeof(uint32_t));
 }
 while (VAR_5->mpending && VAR_5->resid) {
  VAR_7 = VAR_5->mpending;
  if (VAR_5->mpending->m_next
      || VAR_5->mpending->m_len > VAR_5->resid)
   VAR_5->mpending = FUNC_5(VAR_5->mpending,
       VAR_5->resid, VAR_2);
  else
   VAR_5->mpending = ((void*)0);
  if (VAR_5->mreq)
   FUNC_4(VAR_5->mreq)->m_next = VAR_7;
  else
   VAR_5->mreq = VAR_7;
  while (VAR_7) {
   VAR_5->resid -= VAR_7->m_len;
   VAR_7 = VAR_7->m_next;
  }
 }





 if (VAR_5->mpending)
  VAR_6->so_rcv.sb_lowat = VAR_1;
 else
  VAR_6->so_rcv.sb_lowat =
      FUNC_0(1, FUNC_1(VAR_5->resid, VAR_6->so_rcv.sb_hiwat / 2));
 return (VAR_3);
}
