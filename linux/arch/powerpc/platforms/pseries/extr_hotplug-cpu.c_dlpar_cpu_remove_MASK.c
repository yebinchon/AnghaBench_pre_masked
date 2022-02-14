
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (char*,struct device_node*,int,...) ;

__attribute__((used)) static ssize_t FUNC_7(struct device_node *VAR_1, u32 VAR_2)
{
 int VAR_3;

 FUNC_5("Attempting to remove CPU %pOFn, drc index: %x\n",
   VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_6("Failed to offline CPU %pOFn, rc: %d\n", VAR_1, VAR_3);
  return -VAR_0;
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_6("Failed to release drc (%x) for CPU %pOFn, rc: %d\n",
   VAR_2, VAR_1, VAR_3);
  FUNC_3(VAR_1);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  int VAR_4 = VAR_3;

  FUNC_6("Failed to detach CPU %pOFn, rc: %d", VAR_1, VAR_3);

  VAR_3 = FUNC_0(VAR_2);
  if (!VAR_3)
   FUNC_3(VAR_1);

  return VAR_4;
 }

 FUNC_5("Successfully removed CPU, drc index: %x\n", VAR_2);
 return 0;
}
