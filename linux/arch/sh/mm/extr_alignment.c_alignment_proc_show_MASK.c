
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 char** VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_9, void *VAR_10)
{
 FUNC_0(VAR_9, "User:\t\t%lu\n", VAR_5);
 FUNC_0(VAR_9, "System:\t\t%lu\n", VAR_4);
 FUNC_0(VAR_9, "Half:\t\t%lu\n", VAR_1);
 FUNC_0(VAR_9, "Word:\t\t%lu\n", VAR_8);
 FUNC_0(VAR_9, "DWord:\t\t%lu\n", VAR_0);
 FUNC_0(VAR_9, "Multi:\t\t%lu\n", VAR_3);
 FUNC_0(VAR_9, "User faults:\t%i (%s)\n", VAR_6,
   VAR_7[VAR_6]);
 FUNC_0(VAR_9, "Kernel faults:\t%i (fixup%s)\n", VAR_2,
   VAR_2 ? "+warn" : "");
 return 0;
}
