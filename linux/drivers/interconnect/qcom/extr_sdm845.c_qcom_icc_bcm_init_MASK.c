
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_icc_node {size_t num_bcms; struct qcom_icc_bcm** bcms; } ;
struct TYPE_2__ {int reserved; int vcd; int width; int unit; } ;
struct qcom_icc_bcm {int num_nodes; struct qcom_icc_node** nodes; TYPE_1__ aux_data; int name; int addr; } ;
struct device {int dummy; } ;
struct bcm_db {int reserved; int vcd; int width; int unit; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bcm_db const*) ;
 int FUNC_1 (struct bcm_db const*) ;
 int FUNC_2 (int ) ;
 struct bcm_db* FUNC_3 (int ,size_t*) ;
 int FUNC_4 (struct device*,char*,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct qcom_icc_bcm *VAR_1, struct device *VAR_2)
{
 struct qcom_icc_node *VAR_3;
 const struct bcm_db *VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_1->addr = FUNC_2(VAR_1->name);
 if (!VAR_1->addr) {
  FUNC_4(VAR_2, "%s could not find RPMh address\n",
   VAR_1->name);
  return -VAR_0;
 }

 VAR_4 = FUNC_3(VAR_1->name, &VAR_5);
 if (FUNC_0(VAR_4)) {
  FUNC_4(VAR_2, "%s command db read error (%ld)\n",
   VAR_1->name, FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }
 if (!VAR_5) {
  FUNC_4(VAR_2, "%s command db missing or partial aux data\n",
   VAR_1->name);
  return -VAR_0;
 }

 VAR_1->aux_data.unit = FUNC_6(VAR_4->unit);
 VAR_1->aux_data.width = FUNC_5(VAR_4->width);
 VAR_1->aux_data.vcd = VAR_4->vcd;
 VAR_1->aux_data.reserved = VAR_4->reserved;




 for (VAR_6 = 0; VAR_6 < VAR_1->num_nodes; VAR_6++) {
  VAR_3 = VAR_1->nodes[VAR_6];
  VAR_3->bcms[VAR_3->num_bcms] = VAR_1;
  VAR_3->num_bcms++;
 }

 return 0;
}
