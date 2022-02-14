
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,char* const) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = 0;
 char *const VAR_4[] = {"BKG", "VID0", "VID1", "GDP0",
        "GDP1", "GDP2", "GDP3"};

 FUNC_1(VAR_0, "\tEnabled: ");
 for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
  if (VAR_1 & 1) {
   FUNC_0(VAR_0, "%s ", VAR_4[VAR_2]);
   VAR_3++;
  }
  VAR_1 = VAR_1 >> 1;
 }

 VAR_1 = VAR_1 >> 2;
 if (VAR_1 & 1) {
  FUNC_1(VAR_0, "CURS ");
  VAR_3++;
 }
 if (!VAR_3)
  FUNC_1(VAR_0, "Nothing");
}
