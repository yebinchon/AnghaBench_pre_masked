
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prio_si {struct dn_queue** q_array; int bitmap; } ;
struct mbuf {int dummy; } ;
struct dn_sch_inst {int dummy; } ;
struct dn_queue {TYPE_2__* fs; } ;
struct TYPE_3__ {int* par; } ;
struct TYPE_4__ {TYPE_1__ fs; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (struct dn_queue*,struct mbuf*,int ) ;
 scalar_t__ FUNC_2 (int,int *) ;

__attribute__((used)) static int
FUNC_3(struct dn_sch_inst *VAR_0, struct dn_queue *VAR_1, struct mbuf *VAR_2)
{
 struct prio_si *VAR_3 = (struct prio_si *)(VAR_0 + 1);
 int VAR_4 = VAR_1->fs->fs.par[0];

 if (FUNC_2(VAR_4, &VAR_3->bitmap) == 0) {

  FUNC_0(VAR_4, &VAR_3->bitmap);
  VAR_3->q_array[VAR_4] = VAR_1;
 } else {
  VAR_1 = VAR_3->q_array[VAR_4];
 }
 if (FUNC_1(VAR_1, VAR_2, 0))
  return 1;
 return 0;
}
