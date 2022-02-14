
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; struct mbuf* m_nextpkt; } ;
struct m_tag {int dummy; } ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_9__ {int q_time; TYPE_3__ ni; } ;
struct fq_pie_si {TYPE_4__ main_q; } ;
struct TYPE_6__ {struct mbuf* head; } ;
struct fq_pie_flow {TYPE_1__ mq; } ;
typedef int aqm_time_t ;
struct TYPE_10__ {int curr_time; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (struct fq_pie_flow*,struct fq_pie_si*,int ,int ) ;
 int FUNC_2 (struct mbuf*,struct m_tag*) ;
 struct m_tag* FUNC_3 (struct mbuf*,int ,int ,int *) ;

__attribute__((used)) __inline static struct mbuf *
FUNC_4(struct fq_pie_flow *VAR_3, aqm_time_t *VAR_4,
 struct fq_pie_si *VAR_5, int VAR_6)
{
 struct mbuf *VAR_7 = VAR_3->mq.head;

 if (VAR_7 == ((void*)0))
  return VAR_7;
 VAR_3->mq.head = VAR_7->m_nextpkt;

 FUNC_1(VAR_3, VAR_5, -VAR_7->m_pkthdr.len, 0);

 if (VAR_5->main_q.ni.length == 0)
   VAR_5->main_q.q_time = VAR_2.curr_time;

 if (VAR_6) {

  struct m_tag *VAR_8;
  VAR_8 = FUNC_3(VAR_7, VAR_1, VAR_0, ((void*)0));
  if (VAR_8 == ((void*)0)){
   FUNC_0("PIE timestamp mtag not found!");
   *VAR_4 = 0;
  } else {
   *VAR_4 = *(aqm_time_t *)(VAR_8 + 1);
   FUNC_2(VAR_7,VAR_8);
  }
 }
 return VAR_7;
}
