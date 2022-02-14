
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int gso_segs; int mss_cache; } ;
struct socket {int sk; } ;
struct siw_iwarp_tx {scalar_t__ gso_seg_limit; int tcp_seglen; } ;


 int FUNC_0 (int ,scalar_t__,int) ;
 struct tcp_sock* FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct siw_iwarp_tx *VAR_1,
         struct socket *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_1(VAR_2->sk);

 if (VAR_3->gso_segs) {
  if (VAR_1->gso_seg_limit == 0)
   VAR_1->tcp_seglen = VAR_3->mss_cache * VAR_3->gso_segs;
  else
   VAR_1->tcp_seglen =
    VAR_3->mss_cache *
    FUNC_0(VAR_0, VAR_1->gso_seg_limit, VAR_3->gso_segs);
 } else {
  VAR_1->tcp_seglen = VAR_3->mss_cache;
 }

 VAR_1->tcp_seglen &= 0xfffffff8;
}
