
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,int ) ;
 struct device_node* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (char*,struct device_node*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(u32 VAR_2)
{
 struct device_node *VAR_3;
 int VAR_4;

 FUNC_6("Attempting to add pmem node, drc index: %x\n", VAR_2);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {
  FUNC_7("Failed to acquire DRC, rc: %d, drc index: %x\n",
   VAR_4, VAR_2);
  return -VAR_0;
 }

 VAR_3 = FUNC_3(FUNC_0(VAR_2), VAR_1);
 if (!VAR_3) {
  FUNC_7("configure-connector failed for drc %x\n", VAR_2);
  FUNC_5(VAR_2);
  return -VAR_0;
 }


 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_7("Failed to attach node %pOF, rc: %d, drc index: %x\n",
   VAR_3, VAR_4, VAR_2);

  if (FUNC_5(VAR_2))
   FUNC_4(VAR_3);

  return VAR_4;
 }

 FUNC_8("Successfully added %pOF, drc index: %x\n", VAR_3, VAR_2);

 return 0;
}
