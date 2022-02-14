
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int grp; } ;
union cptx_pf_qx_ctl {int u; TYPE_2__ s; } ;
typedef size_t u8 ;
struct microcode {scalar_t__ is_ae; int group; } ;
struct device {int dummy; } ;
struct cpt_device {size_t next_mc_idx; int reg_base; TYPE_1__* pdev; struct microcode* mcode; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct device*,char*,size_t,char*) ;
 int FUNC_4 (struct device*,char*) ;

__attribute__((used)) static int FUNC_5(struct cpt_device *VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct microcode *VAR_8 = VAR_5->mcode;
 union cptx_pf_qx_ctl VAR_9;
 struct device *VAR_10 = &VAR_5->pdev->dev;

 if (VAR_6 >= VAR_2) {
  FUNC_4(VAR_10, "Queues are more than cores in the group");
  return -VAR_3;
 }
 if (VAR_7 >= VAR_1) {
  FUNC_4(VAR_10, "Request group is more than possible groups");
  return -VAR_3;
 }
 if (VAR_7 >= VAR_5->next_mc_idx) {
  FUNC_4(VAR_10, "Request group is higher than available functional groups");
  return -VAR_3;
 }
 VAR_9.u = FUNC_1(VAR_5->reg_base, FUNC_0(0, VAR_6));
 VAR_9.s.grp = VAR_8[VAR_7].group;
 FUNC_2(VAR_5->reg_base, FUNC_0(0, VAR_6), VAR_9.u);
 FUNC_3(VAR_10, "VF %d TYPE %s", VAR_6, (VAR_8[VAR_7].is_ae ? "AE" : "SE"));

 return VAR_8[VAR_7].is_ae ? VAR_0 : VAR_4;
}
