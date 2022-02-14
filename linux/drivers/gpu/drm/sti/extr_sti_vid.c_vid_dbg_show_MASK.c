
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_vid {scalar_t__ regs; } ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (struct seq_file*,int ) ;
 int FUNC_6 (struct seq_file*,int ) ;
 int FUNC_7 (struct seq_file*,int ) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_15, void *VAR_16)
{
 struct drm_info_node *VAR_17 = VAR_15->private;
 struct sti_vid *VAR_18 = (struct sti_vid *)VAR_17->info_ent->data;

 FUNC_2(VAR_15, "VID: (vaddr= 0x%p)", VAR_18->regs);

 FUNC_0(VAR_4);
 FUNC_4(VAR_15, FUNC_1(VAR_18->regs + VAR_4));
 FUNC_0(VAR_0);
 FUNC_0(VAR_2);
 FUNC_0(VAR_13);
 FUNC_6(VAR_15, FUNC_1(VAR_18->regs + VAR_13));
 FUNC_0(VAR_14);
 FUNC_7(VAR_15, FUNC_1(VAR_18->regs + VAR_14));
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 FUNC_0(VAR_11);
 FUNC_5(VAR_15, FUNC_1(VAR_18->regs + VAR_11));
 FUNC_0(VAR_1);
 FUNC_0(VAR_12);
 FUNC_0(VAR_3);
 FUNC_3(VAR_15, '\n');
 return 0;
}
