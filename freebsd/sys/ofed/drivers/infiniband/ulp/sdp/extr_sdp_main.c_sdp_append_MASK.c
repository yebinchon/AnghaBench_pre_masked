
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockbuf {struct mbuf* sb_mbtail; struct mbuf* sb_sndptr; struct mbuf* sb_lastrecord; struct mbuf* sb_mb; } ;
struct sdp_sock {scalar_t__ xmit_size_goal; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct mbuf {int m_flags; struct mbuf* m_next; struct mbuf* m_nextpkt; TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 int FUNC_2 (struct sockbuf*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct sockbuf*) ;
 int FUNC_4 (struct mbuf*,scalar_t__) ;
 int FUNC_5 (struct mbuf*,int,int ) ;
 int FUNC_6 (struct sockbuf*,struct mbuf*) ;
 int FUNC_7 (struct sockbuf*,struct mbuf*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_8(struct sdp_sock *VAR_5, struct sockbuf *VAR_6, struct mbuf *VAR_7, int VAR_8)
{
 struct mbuf *VAR_9;
 int VAR_10;

 FUNC_3(VAR_6);
 FUNC_2(VAR_6);
 FUNC_0(VAR_7->m_flags & VAR_0,
  ("sdp_append: %p Missing packet header.\n", VAR_7));
 VAR_9 = VAR_6->sb_lastrecord;



 if (VAR_9 == ((void*)0)) {
  VAR_6->sb_lastrecord = VAR_6->sb_mb = VAR_6->sb_sndptr = VAR_7;
  for (; VAR_7; VAR_7 = VAR_7->m_next) {
                 VAR_6->sb_mbtail = VAR_7;
   FUNC_6(VAR_6, VAR_7);
  }
  return;
 }



 for (VAR_10 = 0; VAR_9->m_next; VAR_9 = VAR_9->m_next)
  VAR_10++;
 VAR_9 = VAR_6->sb_lastrecord;






 if (FUNC_1(VAR_9) && VAR_10 + VAR_8 < VAR_4 &&
     VAR_9->m_pkthdr.len + VAR_7->m_pkthdr.len - VAR_3 <
     VAR_5->xmit_size_goal) {
  FUNC_4(VAR_7, VAR_3);
  VAR_9->m_pkthdr.len += VAR_7->m_pkthdr.len;
  VAR_9->m_flags |= VAR_7->m_flags & (VAR_1 | VAR_2);
  FUNC_5(VAR_7, 1, 0);
  FUNC_7(VAR_6, VAR_7, VAR_6->sb_mbtail);
  return;
 }



 VAR_6->sb_lastrecord->m_flags |= VAR_1;
 VAR_6->sb_lastrecord->m_nextpkt = VAR_7;
 VAR_6->sb_lastrecord = VAR_7;
 if (VAR_6->sb_sndptr == ((void*)0))
  VAR_6->sb_sndptr = VAR_7;
 for (; VAR_7; VAR_7 = VAR_7->m_next) {
  VAR_6->sb_mbtail = VAR_7;
  FUNC_6(VAR_6, VAR_7);
 }
}
