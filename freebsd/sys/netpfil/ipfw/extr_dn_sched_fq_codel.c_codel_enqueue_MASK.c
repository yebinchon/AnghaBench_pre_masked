
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct m_tag {int dummy; } ;
struct fq_codel_si {int dummy; } ;
struct TYPE_3__ {scalar_t__ maxpkt_size; } ;
struct fq_codel_flow {int mq; TYPE_1__ cst; } ;
typedef int aqm_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fq_codel_flow*,struct fq_codel_si*,scalar_t__,int) ;
 int FUNC_1 (struct mbuf*) ;
 struct m_tag* FUNC_2 (int ,int ,int,int ) ;
 struct m_tag* FUNC_3 (struct mbuf*,int ,int ,int *) ;
 int FUNC_4 (struct mbuf*,struct m_tag*) ;
 int FUNC_5 (int *,struct mbuf*) ;

__attribute__((used)) static int
FUNC_6(struct fq_codel_flow *VAR_4, struct mbuf *VAR_5, struct fq_codel_si *VAR_6)
{
 uint64_t VAR_7;

 VAR_7 = VAR_5->m_pkthdr.len;

 if (VAR_7 > VAR_4->cst.maxpkt_size)
  VAR_4->cst.maxpkt_size = VAR_7;


 struct m_tag *VAR_8;
 VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_1, ((void*)0));
 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_2(VAR_2, VAR_1, sizeof(aqm_time_t),
   VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_5);
  goto drop;
 }
 *(aqm_time_t *)(VAR_8 + 1) = VAR_0;
 FUNC_4(VAR_5, VAR_8);

 FUNC_5(&VAR_4->mq, VAR_5);
 FUNC_0(VAR_4, VAR_6, VAR_7, 0);
 return 0;

drop:
 FUNC_0(VAR_4, VAR_6, VAR_7, 1);
 FUNC_1(VAR_5);
 return 1;
}
