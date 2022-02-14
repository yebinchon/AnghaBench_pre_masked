
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct rr_si {int dummy; } ;
struct rr_queue {unsigned long long quantum; unsigned long long credit; scalar_t__ status; } ;
struct TYPE_10__ {int * head; } ;
struct TYPE_6__ {int subtype; } ;
struct TYPE_7__ {TYPE_1__ oid; } ;
struct dn_queue {scalar_t__ _si; TYPE_5__ mq; TYPE_4__* fs; TYPE_2__ ni; } ;
struct TYPE_8__ {unsigned long long* par; } ;
struct TYPE_9__ {TYPE_3__ fs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long long) ;
 int FUNC_2 (struct rr_queue*,struct rr_si*) ;

__attribute__((used)) static int
FUNC_3(struct dn_queue *VAR_1)
{
 struct rr_queue *VAR_2 = (struct rr_queue *)VAR_1;
 uint64_t VAR_3;

 VAR_1->ni.oid.subtype = VAR_0;

 VAR_3 = (uint64_t)VAR_1->fs->fs.par[0] * VAR_1->fs->fs.par[1];
 if (VAR_3 >= (1ULL<< 32)) {
  FUNC_0("quantum too large, truncating to 4G - 1");
  VAR_3 = (1ULL<< 32) - 1;
 }
 VAR_2->quantum = VAR_3;
 FUNC_1("called, q->quantum %d", VAR_2->quantum);
 VAR_2->credit = VAR_2->quantum;
 VAR_2->status = 0;

 if (VAR_1->mq.head != ((void*)0)) {

  FUNC_2(VAR_2, (struct rr_si *)(VAR_1->_si + 1));
 }
 return 0;
}
