
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qfq_sched {scalar_t__ wsum; scalar_t__ iwsum; int * groups; } ;
struct qfq_class {scalar_t__ lmax; scalar_t__ inv_w; int * grp; } ;
struct dn_queue {TYPE_2__* fs; scalar_t__ _si; } ;
struct TYPE_3__ {scalar_t__* par; } ;
struct TYPE_4__ {TYPE_1__ fs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct dn_queue *VAR_4)
{
 struct qfq_sched *VAR_5 = (struct qfq_sched *)(VAR_4->_si + 1);
 struct qfq_class *VAR_6 = (struct qfq_class *)VAR_4;
 int VAR_7;
 uint32_t VAR_8;




 VAR_8 = VAR_4->fs->fs.par[0];
 VAR_6->lmax = VAR_4->fs->fs.par[1];
 if (!VAR_8 || VAR_8 > VAR_2) {
  VAR_8 = 1;
  FUNC_0("rounding weight to 1");
 }
 VAR_6->inv_w = VAR_1/VAR_8;
 VAR_8 = VAR_1/VAR_6->inv_w;
 if (VAR_5->wsum + VAR_8 > VAR_3)
  return VAR_0;

 VAR_7 = FUNC_1(VAR_6->inv_w, VAR_6->lmax);
 VAR_6->grp = &VAR_5->groups[VAR_7];
 VAR_5->wsum += VAR_8;
 VAR_5->iwsum = VAR_1 / VAR_5->wsum;

 return 0;
}
