
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct prio_si {struct dn_queue** q_array; int bitmap; } ;
struct TYPE_12__ {int * head; TYPE_5__* tail; } ;
struct TYPE_9__ {int subtype; } ;
struct TYPE_10__ {scalar_t__ len_bytes; scalar_t__ length; TYPE_3__ oid; } ;
struct dn_queue {TYPE_6__ mq; TYPE_4__ ni; TYPE_2__* fs; scalar_t__ _si; } ;
struct TYPE_11__ {int * m_nextpkt; } ;
struct TYPE_7__ {int* par; } ;
struct TYPE_8__ {TYPE_1__ fs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static int
FUNC_2(struct dn_queue *VAR_1)
{
 struct prio_si *VAR_2 = (struct prio_si *)(VAR_1->_si + 1);
 int VAR_3 = VAR_1->fs->fs.par[0];
 struct dn_queue *VAR_4;

 VAR_1->ni.oid.subtype = VAR_0;

 if (VAR_1->mq.head == ((void*)0))
  return 0;




 if (FUNC_1(VAR_3, &VAR_2->bitmap) == 0) {

  FUNC_0(VAR_3, &VAR_2->bitmap);
  VAR_2->q_array[VAR_3] = VAR_1;
 } else if ( (VAR_4 = VAR_2->q_array[VAR_3]) != VAR_1) {




  VAR_4->mq.tail->m_nextpkt = VAR_1->mq.head;
  VAR_4->mq.tail = VAR_1->mq.tail;
  VAR_4->ni.length += VAR_1->ni.length;
  VAR_1->ni.length = 0;
  VAR_4->ni.len_bytes += VAR_1->ni.len_bytes;
  VAR_1->ni.len_bytes = 0;
  VAR_1->mq.tail = VAR_1->mq.head = ((void*)0);
 }
 return 0;
}
