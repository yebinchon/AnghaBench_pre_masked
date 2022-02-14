
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mutex; TYPE_2__* state; } ;
struct tegra_dc {TYPE_3__ base; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_5__ {int active; } ;
struct TYPE_4__ {struct tegra_dc* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int) ;
 int FUNC_4 (struct tegra_dc*) ;
 int FUNC_5 (struct tegra_dc*,int ) ;
 int FUNC_6 (struct tegra_dc*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_5, void *VAR_6)
{
 struct drm_info_node *VAR_7 = VAR_5->private;
 struct tegra_dc *VAR_8 = VAR_7->info_ent->data;
 int VAR_9 = 0;
 u32 VAR_10;

 FUNC_1(&VAR_8->base.mutex, ((void*)0));

 if (!VAR_8->base.state->active) {
  VAR_9 = -VAR_4;
  goto unlock;
 }

 VAR_10 = VAR_2 | VAR_3;
 FUNC_6(VAR_8, VAR_10, VAR_1);
 FUNC_4(VAR_8);

 FUNC_0(&VAR_8->base);
 FUNC_0(&VAR_8->base);

 VAR_10 = FUNC_5(VAR_8, VAR_0);
 FUNC_3(VAR_5, "%08x\n", VAR_10);

 FUNC_6(VAR_8, 0, VAR_1);

unlock:
 FUNC_2(&VAR_8->base.mutex);
 return VAR_9;
}
