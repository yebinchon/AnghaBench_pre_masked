
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {size_t mode; int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct tegra_dfll*,int ) ;
 int * VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_dfll *VAR_4)
{
 if (VAR_4->mode != VAR_1) {
  FUNC_0(VAR_4->dev, "cannot disable DFLL in %s mode\n",
   VAR_3[VAR_4->mode]);
  return -VAR_2;
 }

 FUNC_1(VAR_4, VAR_0);
 FUNC_2(VAR_4->dev);

 return 0;
}
