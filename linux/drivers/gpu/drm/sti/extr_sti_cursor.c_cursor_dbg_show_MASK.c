
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_cursor {scalar_t__ regs; int plane; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,struct sti_cursor*,int ) ;
 int FUNC_2 (struct seq_file*,struct sti_cursor*,int ) ;
 int FUNC_3 (struct seq_file*,int ) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct seq_file*,char*,int ,scalar_t__) ;
 int FUNC_7 (struct seq_file*,char) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_8, void *VAR_9)
{
 struct drm_info_node *VAR_10 = VAR_8->private;
 struct sti_cursor *VAR_11 = (struct sti_cursor *)VAR_10->info_ent->data;

 FUNC_6(VAR_8, "%s: (vaddr = 0x%p)",
     FUNC_8(&VAR_11->plane), VAR_11->regs);

 FUNC_0(VAR_3);
 FUNC_0(VAR_7);
 FUNC_4(VAR_8, FUNC_5(VAR_11->regs + VAR_7));
 FUNC_0(VAR_4);
 FUNC_2(VAR_8, VAR_11, FUNC_5(VAR_11->regs + VAR_4));
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_3(VAR_8, FUNC_5(VAR_11->regs + VAR_6));
 FUNC_0(VAR_2);
 FUNC_1(VAR_8, VAR_11, FUNC_5(VAR_11->regs + VAR_2));
 FUNC_0(VAR_1);
 FUNC_0(VAR_0);
 FUNC_7(VAR_8, '\n');
 return 0;
}
