
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_si {scalar_t__ bitmap; struct dn_queue** q_array; } ;
struct mbuf {int dummy; } ;
struct dn_sch_inst {int dummy; } ;
struct TYPE_2__ {int * head; } ;
struct dn_queue {TYPE_1__ mq; } ;


 int FUNC_0 (int,scalar_t__*) ;
 struct mbuf* FUNC_1 (struct dn_queue*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct mbuf *
FUNC_3(struct dn_sch_inst *VAR_0)
{
 struct prio_si *VAR_1 = (struct prio_si *)(VAR_0 + 1);
 struct mbuf *VAR_2;
 struct dn_queue *VAR_3;
 int VAR_4;

 if (VAR_1->bitmap == 0)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_1->bitmap) - 1;


 VAR_3 = VAR_1->q_array[VAR_4];


 VAR_2 = FUNC_1(VAR_3);
 if (VAR_3->mq.head == ((void*)0)) {



  VAR_1->q_array[VAR_4] = ((void*)0);
  FUNC_0(VAR_4, &VAR_1->bitmap);
 }
 return VAR_2;
}
