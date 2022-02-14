
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct fq_codel_list {int dummy; } ;
struct TYPE_3__ {scalar_t__ sched; } ;
struct fq_codel_si {struct fq_codel_list oldflows; struct fq_codel_list newflows; TYPE_1__ _si; } ;
struct dn_sch_fq_codel_parms {scalar_t__ quantum; } ;
struct fq_codel_schk {struct dn_sch_fq_codel_parms cfg; } ;
struct fq_codel_flow {scalar_t__ deficit; scalar_t__ active; } ;
struct dn_sch_inst {int dummy; } ;


 scalar_t__ FUNC_0 (struct fq_codel_list*) ;
 struct fq_codel_flow* FUNC_1 (struct fq_codel_list*) ;
 int FUNC_2 (struct fq_codel_list*,struct fq_codel_flow*,int ) ;
 int FUNC_3 (struct fq_codel_list*,int ) ;
 int VAR_0 ;
 struct mbuf* FUNC_4 (struct fq_codel_flow*,struct fq_codel_si*) ;

__attribute__((used)) static struct mbuf *
FUNC_5(struct dn_sch_inst *VAR_1)
{
 struct fq_codel_si *VAR_2;
 struct fq_codel_schk *VAR_3;
 struct dn_sch_fq_codel_parms *VAR_4;
 struct fq_codel_flow *VAR_5;
 struct mbuf *VAR_6;
 struct fq_codel_list *VAR_7;

 VAR_2 = (struct fq_codel_si *)VAR_1;
 VAR_3 = (struct fq_codel_schk *)(VAR_2->_si.sched+1);
 VAR_4 = &VAR_3->cfg;

 do {

  if (FUNC_0(&VAR_2->newflows))
   VAR_7 = &VAR_2->oldflows;
  else
   VAR_7 = &VAR_2->newflows;


  if (FUNC_0(VAR_7))
   return ((void*)0);

  VAR_5 = FUNC_1(VAR_7);
  while (VAR_5 != ((void*)0)) {





   if (VAR_5->deficit < 0) {
     VAR_5->deficit += VAR_4->quantum;
     FUNC_3(VAR_7, VAR_0);
     FUNC_2(&VAR_2->oldflows, VAR_5, VAR_0);
    } else
     break;

   VAR_5 = FUNC_1(VAR_7);
  }


  if (FUNC_0(VAR_7))
   continue;


  VAR_6 = FUNC_4(VAR_5, VAR_2);


  if (!VAR_6) {




   if (VAR_7 == &VAR_2->newflows) {
    FUNC_3(VAR_7, VAR_0);
    FUNC_2(&VAR_2->oldflows, VAR_5, VAR_0);
   } else {
    VAR_5->active = 0;
    FUNC_3(VAR_7, VAR_0);
   }

   continue;
  }



  VAR_5->deficit -= VAR_6->m_pkthdr.len;
  return VAR_6;

 } while (1);


 return ((void*)0);
}
