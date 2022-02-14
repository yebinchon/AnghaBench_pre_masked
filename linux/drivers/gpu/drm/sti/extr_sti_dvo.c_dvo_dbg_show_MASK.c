
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_dvo {scalar_t__ regs; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct seq_file*,scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_3 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_6, void *VAR_7)
{
 struct drm_info_node *VAR_8 = VAR_6->private;
 struct sti_dvo *VAR_9 = (struct sti_dvo *)VAR_8->info_ent->data;

 FUNC_2(VAR_6, "DVO: (vaddr = 0x%p)", VAR_9->regs);
 FUNC_0(VAR_0);
 FUNC_0(VAR_2);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_3);
 FUNC_1(VAR_6, VAR_9->regs + VAR_1);
 FUNC_3(VAR_6, '\n');
 return 0;
}
