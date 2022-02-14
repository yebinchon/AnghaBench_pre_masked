
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct qfq_sched {int dummy; } ;
struct qfq_group {scalar_t__ S; int slot_shift; } ;
struct TYPE_7__ {TYPE_2__* head; } ;
struct TYPE_8__ {TYPE_3__ mq; } ;
struct qfq_class {scalar_t__ inv_w; scalar_t__ S; scalar_t__ F; TYPE_4__ _q; } ;
struct TYPE_5__ {unsigned int len; } ;
struct TYPE_6__ {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct qfq_group*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct qfq_group*,struct qfq_class*,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_3(struct qfq_sched *VAR_0, struct qfq_group *VAR_1,
     struct qfq_class *VAR_2)
{

 (void)VAR_0;
 VAR_2->S = VAR_2->F;
 if (VAR_2->_q.mq.head == ((void*)0)) {
  FUNC_0(VAR_1);
 } else {
  unsigned int VAR_3;
  uint64_t VAR_4;

  VAR_3 = VAR_2->_q.mq.head->m_pkthdr.len;
  VAR_2->F = VAR_2->S + (uint64_t)VAR_3 * VAR_2->inv_w;
  VAR_4 = FUNC_1(VAR_2->S, VAR_1->slot_shift);
  if (VAR_4 == VAR_1->S)
   return 0;

  FUNC_0(VAR_1);
  FUNC_2(VAR_1, VAR_2, VAR_4);
 }
 return 1;
}
