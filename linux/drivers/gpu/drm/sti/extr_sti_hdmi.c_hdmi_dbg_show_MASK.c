
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_hdmi {int regs; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct seq_file*,int ) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (struct seq_file*,int ) ;
 int FUNC_6 (struct sti_hdmi*,int ) ;
 int FUNC_7 (struct seq_file*,char*,int ) ;
 int FUNC_8 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_22, void *VAR_23)
{
 struct drm_info_node *VAR_24 = VAR_22->private;
 struct sti_hdmi *VAR_25 = (struct sti_hdmi *)VAR_24->info_ent->data;

 FUNC_7(VAR_22, "HDMI: (vaddr = 0x%p)", VAR_25->regs);
 FUNC_0("\n", VAR_6);
 FUNC_3(VAR_22, FUNC_6(VAR_25, VAR_6));
 FUNC_0("", VAR_10);
 FUNC_0("\n", VAR_12);
 FUNC_4(VAR_22, FUNC_6(VAR_25, VAR_12));
 FUNC_0("", VAR_1);
 FUNC_8(VAR_22, '\t');
 FUNC_2("Xmin:", FUNC_6(VAR_25, VAR_1));
 FUNC_0("", VAR_0);
 FUNC_8(VAR_22, '\t');
 FUNC_2("Xmax:", FUNC_6(VAR_25, VAR_0));
 FUNC_0("", VAR_3);
 FUNC_8(VAR_22, '\t');
 FUNC_2("Ymin:", FUNC_6(VAR_25, VAR_3));
 FUNC_0("", VAR_2);
 FUNC_8(VAR_22, '\t');
 FUNC_2("Ymax:", FUNC_6(VAR_25, VAR_2));
 FUNC_0("", VAR_13);
 FUNC_5(VAR_22, FUNC_6(VAR_25, VAR_13));

 FUNC_0("\n", VAR_4);
 FUNC_0("\n", VAR_11);
 FUNC_0("\n", VAR_5);

 FUNC_7(VAR_22, "\n AVI Infoframe (Data Island slot N=%d):",
     VAR_8);
 FUNC_1(VAR_14, VAR_8);
 FUNC_1(VAR_15, VAR_8);
 FUNC_1(VAR_16, VAR_8);
 FUNC_1(VAR_17, VAR_8);
 FUNC_1(VAR_18, VAR_8);
 FUNC_1(VAR_19, VAR_8);
 FUNC_1(VAR_20, VAR_8);
 FUNC_1(VAR_21, VAR_8);
 FUNC_7(VAR_22, "\n\n AUDIO Infoframe (Data Island slot N=%d):",
     VAR_7);
 FUNC_1(VAR_14, VAR_7);
 FUNC_1(VAR_15, VAR_7);
 FUNC_1(VAR_16, VAR_7);
 FUNC_1(VAR_17, VAR_7);
 FUNC_1(VAR_18, VAR_7);
 FUNC_1(VAR_19, VAR_7);
 FUNC_1(VAR_20, VAR_7);
 FUNC_1(VAR_21, VAR_7);
 FUNC_7(VAR_22, "\n\n VENDOR SPECIFIC Infoframe (Data Island slot N=%d):",
     VAR_9);
 FUNC_1(VAR_14, VAR_9);
 FUNC_1(VAR_15, VAR_9);
 FUNC_1(VAR_16, VAR_9);
 FUNC_1(VAR_17, VAR_9);
 FUNC_1(VAR_18, VAR_9);
 FUNC_1(VAR_19, VAR_9);
 FUNC_1(VAR_20, VAR_9);
 FUNC_1(VAR_21, VAR_9);
 FUNC_8(VAR_22, '\n');
 return 0;
}
