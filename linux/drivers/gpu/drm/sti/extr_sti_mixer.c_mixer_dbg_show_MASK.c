
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_mixer {scalar_t__ regs; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct seq_file*,int ) ;
 int FUNC_2 (struct seq_file*,int ) ;
 int FUNC_3 (struct seq_file*,scalar_t__) ;
 int FUNC_4 (struct seq_file*,char*,int ,scalar_t__) ;
 int FUNC_5 (struct seq_file*,char) ;
 int FUNC_6 (struct sti_mixer*,scalar_t__) ;
 int FUNC_7 (struct sti_mixer*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_10, void *VAR_11)
{
 struct drm_info_node *VAR_12 = VAR_10->private;
 struct sti_mixer *VAR_13 = (struct sti_mixer *)VAR_12->info_ent->data;

 FUNC_4(VAR_10, "%s: (vaddr = 0x%p)",
     FUNC_7(VAR_13), VAR_13->regs);

 FUNC_0(VAR_7);
 FUNC_2(VAR_10, FUNC_6(VAR_13, VAR_7));
 FUNC_0(VAR_5);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_6);
 FUNC_1(VAR_10, FUNC_6(VAR_13, VAR_6));
 FUNC_0(VAR_0);
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_3(VAR_10, VAR_13->regs + VAR_9);
 FUNC_5(VAR_10, '\n');
 return 0;
}
