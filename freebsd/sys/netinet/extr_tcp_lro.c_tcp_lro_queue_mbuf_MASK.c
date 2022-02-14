
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {scalar_t__ csum_flags; scalar_t__ flowid; scalar_t__ rcv_tstmp; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct lro_ctrl {scalar_t__ lro_mbuf_max; size_t lro_mbuf_count; TYPE_2__* lro_mbuf_data; TYPE_3__* ifp; } ;
struct TYPE_6__ {int if_capenable; int (* if_input ) (TYPE_3__*,struct mbuf*) ;} ;
struct TYPE_5__ {int seq; struct mbuf* mb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct timespec*) ;
 int FUNC_4 (TYPE_3__*,struct mbuf*) ;
 int FUNC_5 (struct lro_ctrl*) ;

void
FUNC_6(struct lro_ctrl *VAR_3, struct mbuf *VAR_4)
{
 struct timespec VAR_5;


 if (FUNC_1(VAR_3->ifp == ((void*)0) || VAR_3->lro_mbuf_data == ((void*)0) ||
     VAR_3->lro_mbuf_max == 0)) {

  FUNC_2(VAR_4);
  return;
 }


 if (FUNC_1(VAR_4->m_pkthdr.csum_flags == 0 ||
     (VAR_3->ifp->if_capenable & VAR_0) == 0)) {


  (*VAR_3->ifp->if_input) (VAR_3->ifp, VAR_4);
  return;
 }


 if ((VAR_4->m_flags & VAR_1) == 0) {

  FUNC_3(&VAR_5);
  VAR_4->m_pkthdr.rcv_tstmp = ((VAR_5.tv_sec * 1000000000) +
                     VAR_5.tv_nsec);
  VAR_4->m_flags |= VAR_2;
 }

 VAR_3->lro_mbuf_data[VAR_3->lro_mbuf_count].seq =
     (((uint64_t)FUNC_0(VAR_4)) << 56) |
     (((uint64_t)VAR_4->m_pkthdr.flowid) << 24) |
     ((uint64_t)VAR_3->lro_mbuf_count);


 VAR_3->lro_mbuf_data[VAR_3->lro_mbuf_count].mb = VAR_4;


 if (FUNC_1(++VAR_3->lro_mbuf_count == VAR_3->lro_mbuf_max))
  FUNC_5(VAR_3);
}
