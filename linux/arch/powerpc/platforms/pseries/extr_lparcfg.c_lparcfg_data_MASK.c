
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int const*) ;
 struct device_node* FUNC_1 (char*) ;
 void* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct seq_file*,void*) ;
 int FUNC_5 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2, void *VAR_3)
{
 struct device_node *VAR_4;
 const char *VAR_5 = "";
 const char *VAR_6 = "";
 const char *VAR_7;
 const __be32 *VAR_8;
 unsigned int VAR_9 = 0;

 FUNC_5(VAR_2, "%s %s\n", VAR_0, VAR_1);

 VAR_4 = FUNC_1("/");
 if (VAR_4) {
  VAR_7 = FUNC_2(VAR_4, "model", ((void*)0));
  if (VAR_7)
   VAR_5 = VAR_7;
  VAR_7 = FUNC_2(VAR_4, "system-id", ((void*)0));
  if (VAR_7)
   VAR_6 = VAR_7;
  VAR_8 = FUNC_2(VAR_4, "ibm,partition-no",
     ((void*)0));
  if (VAR_8)
   VAR_9 = FUNC_0(VAR_8);
  FUNC_3(VAR_4);
 }
 FUNC_5(VAR_2, "serial_number=%s\n", VAR_6);
 FUNC_5(VAR_2, "system_type=%s\n", VAR_5);
 FUNC_5(VAR_2, "partition_id=%d\n", (int)VAR_9);

 return FUNC_4(VAR_2, VAR_3);
}
