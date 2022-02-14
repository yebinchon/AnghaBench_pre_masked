
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_smmu {int lock; int asids; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tegra_smmu *VAR_0, unsigned int VAR_1)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_1, VAR_0->asids);
 FUNC_2(&VAR_0->lock);
}
