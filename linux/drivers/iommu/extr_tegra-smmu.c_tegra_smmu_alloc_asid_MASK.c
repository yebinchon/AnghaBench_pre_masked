
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_smmu {int lock; int asids; TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned long num_asids; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct tegra_smmu *VAR_1, unsigned int *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock);

 VAR_3 = FUNC_0(VAR_1->asids, VAR_1->soc->num_asids);
 if (VAR_3 >= VAR_1->soc->num_asids) {
  FUNC_2(&VAR_1->lock);
  return -VAR_0;
 }

 FUNC_3(VAR_3, VAR_1->asids);
 *VAR_2 = VAR_3;

 FUNC_2(&VAR_1->lock);
 return 0;
}
