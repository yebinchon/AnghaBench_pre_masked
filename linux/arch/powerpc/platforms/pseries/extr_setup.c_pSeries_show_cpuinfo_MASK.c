
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_0)
{
 struct device_node *VAR_1;
 const char *VAR_2 = "";

 VAR_1 = FUNC_0("/");
 if (VAR_1)
  VAR_2 = FUNC_1(VAR_1, "model", ((void*)0));
 FUNC_4(VAR_0, "machine\t\t: CHRP %s\n", VAR_2);
 FUNC_2(VAR_1);
 if (FUNC_3())
  FUNC_4(VAR_0, "MMU\t\t: Radix\n");
 else
  FUNC_4(VAR_0, "MMU\t\t: Hash\n");
}
