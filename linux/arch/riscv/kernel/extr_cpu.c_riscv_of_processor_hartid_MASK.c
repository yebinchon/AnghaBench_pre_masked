
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(struct device_node *VAR_1)
{
 const char *VAR_2;
 u32 VAR_3;

 if (!FUNC_1(VAR_1, "riscv")) {
  FUNC_5("Found incompatible CPU\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_1, "reg", &VAR_3)) {
  FUNC_5("Found CPU without hart ID\n");
  return -VAR_0;
 }

 if (!FUNC_0(VAR_1)) {
  FUNC_4("CPU with hartid=%d is not available\n", VAR_3);
  return -VAR_0;
 }

 if (FUNC_2(VAR_1, "riscv,isa", &VAR_2)) {
  FUNC_5("CPU with hartid=%d has no \"riscv,isa\" property\n", VAR_3);
  return -VAR_0;
 }
 if (VAR_2[0] != 'r' || VAR_2[1] != 'v') {
  FUNC_5("CPU with hartid=%d has an invalid ISA of \"%s\"\n", VAR_3, VAR_2);
  return -VAR_0;
 }

 return VAR_3;
}
