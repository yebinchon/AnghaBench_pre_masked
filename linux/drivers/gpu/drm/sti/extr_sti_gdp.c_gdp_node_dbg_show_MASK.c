
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sti_gdp {TYPE_1__* node_list; int plane; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_2__* info_ent; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int btm_field; int top_field; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct drm_info_node *VAR_3 = VAR_1->private;
 struct sti_gdp *VAR_4 = (struct sti_gdp *)VAR_3->info_ent->data;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_1(VAR_1, "\n%s[%d].top", FUNC_2(&VAR_4->plane), VAR_5);
  FUNC_0(VAR_1, VAR_4->node_list[VAR_5].top_field);
  FUNC_1(VAR_1, "\n%s[%d].btm", FUNC_2(&VAR_4->plane), VAR_5);
  FUNC_0(VAR_1, VAR_4->node_list[VAR_5].btm_field);
 }

 return 0;
}
