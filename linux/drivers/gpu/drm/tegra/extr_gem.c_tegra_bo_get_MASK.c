
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bo {int gem; } ;
struct host1x_bo {int dummy; } ;


 int FUNC_0 (int *) ;
 struct tegra_bo* FUNC_1 (struct host1x_bo*) ;

__attribute__((used)) static struct host1x_bo *FUNC_2(struct host1x_bo *VAR_0)
{
 struct tegra_bo *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->gem);

 return VAR_0;
}
