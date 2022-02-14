
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_windowgroup {int usecount; int lock; int parent; int index; int rst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tegra_windowgroup *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->lock);

 if (VAR_0->usecount == 1) {
  VAR_1 = FUNC_4(VAR_0->rst);
  if (VAR_1 < 0) {
   FUNC_3("failed to assert reset for window group %u\n",
          VAR_0->index);
  }

  FUNC_2(VAR_0->parent);
 }

 VAR_0->usecount--;
 FUNC_1(&VAR_0->lock);
}
