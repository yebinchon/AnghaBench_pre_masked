
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, void *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_3, "processor\t: %d\n", VAR_5);
 FUNC_0(VAR_3, "vendor_id\t: User Mode Linux\n");
 FUNC_0(VAR_3, "model name\t: UML\n");
 FUNC_0(VAR_3, "mode\t\t: skas\n");
 FUNC_0(VAR_3, "host\t\t: %s\n", VAR_1);
 FUNC_0(VAR_3, "bogomips\t: %lu.%02lu\n\n",
     VAR_2/(500000/VAR_0),
     (VAR_2/(5000/VAR_0)) % 100);

 return 0;
}
