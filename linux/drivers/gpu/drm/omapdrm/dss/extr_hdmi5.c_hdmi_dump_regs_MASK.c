
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct omap_hdmi* private; } ;
struct omap_hdmi {int lock; int core; int phy; int pll; int wp; } ;


 int FUNC_0 (int *,struct seq_file*) ;
 int FUNC_1 (int *,struct seq_file*) ;
 int FUNC_2 (int *,struct seq_file*) ;
 scalar_t__ FUNC_3 (struct omap_hdmi*) ;
 int FUNC_4 (struct omap_hdmi*) ;
 int FUNC_5 (int *,struct seq_file*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_0, void *VAR_1)
{
 struct omap_hdmi *VAR_2 = VAR_0->private;

 FUNC_6(&VAR_2->lock);

 if (FUNC_3(VAR_2)) {
  FUNC_7(&VAR_2->lock);
  return 0;
 }

 FUNC_5(&VAR_2->wp, VAR_0);
 FUNC_2(&VAR_2->pll, VAR_0);
 FUNC_1(&VAR_2->phy, VAR_0);
 FUNC_0(&VAR_2->core, VAR_0);

 FUNC_4(VAR_2);
 FUNC_7(&VAR_2->lock);
 return 0;
}
