
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_hda {scalar_t__ video_dacs_ctrl; scalar_t__ regs; } ;
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
 int FUNC_1 (struct seq_file*,scalar_t__) ;
 int FUNC_2 (struct seq_file*,int ) ;
 int FUNC_3 (struct seq_file*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_6 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_8, void *VAR_9)
{
 struct drm_info_node *VAR_10 = VAR_8->private;
 struct sti_hda *VAR_11 = (struct sti_hda *)VAR_10->info_ent->data;

 FUNC_5(VAR_8, "HD Analog: (vaddr = 0x%p)", VAR_11->regs);
 FUNC_0(VAR_1);
 FUNC_2(VAR_8, FUNC_4(VAR_11->regs + VAR_1));
 FUNC_0(VAR_4);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_0);
 FUNC_0(VAR_6);
 FUNC_0(VAR_5);
 FUNC_1(VAR_8, VAR_11->regs + VAR_7);
 if (VAR_11->video_dacs_ctrl)
  FUNC_3(VAR_8, VAR_11->video_dacs_ctrl);
 FUNC_6(VAR_8, '\n');
 return 0;
}
