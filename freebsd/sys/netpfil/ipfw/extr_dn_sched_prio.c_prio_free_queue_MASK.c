
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prio_si {int bitmap; struct dn_queue** q_array; } ;
struct dn_queue {scalar_t__ _si; TYPE_2__* fs; } ;
struct TYPE_3__ {int* par; } ;
struct TYPE_4__ {TYPE_1__ fs; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static int
FUNC_1(struct dn_queue *VAR_0)
{
 int VAR_1 = VAR_0->fs->fs.par[0];
 struct prio_si *VAR_2 = (struct prio_si *)(VAR_0->_si + 1);

 if (VAR_2->q_array[VAR_1] == VAR_0) {
  VAR_2->q_array[VAR_1] = ((void*)0);
  FUNC_0(VAR_1, &VAR_2->bitmap);
 }
 return 0;
}
