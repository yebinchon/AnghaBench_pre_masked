
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,char) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_4(struct seq_file *VAR_8)
{
 static const char *VAR_9[] = {
  "8K", "64K", "512K", "4MB", "32MB",
  "256MB", "2GB", "16GB",
 };
 int VAR_10, VAR_11;

 if (VAR_7 == VAR_0)
  FUNC_2(VAR_8, "MMU Type\t: Cheetah\n");
 else if (VAR_7 == VAR_1)
  FUNC_2(VAR_8, "MMU Type\t: Cheetah+\n");
 else if (VAR_7 == VAR_6)
  FUNC_2(VAR_8, "MMU Type\t: Spitfire\n");
 else if (VAR_7 == VAR_5)
  FUNC_2(VAR_8, "MMU Type\t: Hypervisor (sun4v)\n");
 else
  FUNC_2(VAR_8, "MMU Type\t: ???\n");

 FUNC_2(VAR_8, "MMU PGSZs\t: ");
 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9); VAR_10++) {
  if (VAR_2 & (1UL << VAR_10)) {
   FUNC_2(VAR_8, "%s%s",
       VAR_11 ? "," : "", VAR_9[VAR_10]);
   VAR_11++;
  }
 }
 FUNC_3(VAR_8, '\n');
}
