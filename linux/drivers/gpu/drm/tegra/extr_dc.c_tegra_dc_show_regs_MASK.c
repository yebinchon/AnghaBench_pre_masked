
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int mutex; TYPE_2__* state; } ;
struct tegra_dc {TYPE_3__ base; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_9__ {unsigned int offset; int name; } ;
struct TYPE_7__ {int active; } ;
struct TYPE_6__ {struct tegra_dc* data; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int ,unsigned int,int ) ;
 int FUNC_4 (struct tegra_dc*,unsigned int) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 struct drm_info_node *VAR_4 = VAR_2->private;
 struct tegra_dc *VAR_5 = VAR_4->info_ent->data;
 unsigned int VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_5->base.mutex, ((void*)0));

 if (!VAR_5->base.state->active) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  unsigned int VAR_8 = VAR_1[VAR_6].offset;

  FUNC_3(VAR_2, "%-40s %#05x %08x\n", VAR_1[VAR_6].name,
      VAR_8, FUNC_4(VAR_5, VAR_8));
 }

unlock:
 FUNC_2(&VAR_5->base.mutex);
 return VAR_7;
}
