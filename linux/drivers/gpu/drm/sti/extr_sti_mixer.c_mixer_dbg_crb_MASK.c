
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;






 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2, "\tDepth: ");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  switch (VAR_3 & VAR_0) {
  case 129:
   FUNC_0(VAR_2, "VID0");
   break;
  case 128:
   FUNC_0(VAR_2, "VID1");
   break;
  case 133:
   FUNC_0(VAR_2, "GDP0");
   break;
  case 132:
   FUNC_0(VAR_2, "GDP1");
   break;
  case 131:
   FUNC_0(VAR_2, "GDP2");
   break;
  case 130:
   FUNC_0(VAR_2, "GDP3");
   break;
  default:
   FUNC_0(VAR_2, "---");
  }

  if (VAR_4 < VAR_1 - 1)
   FUNC_0(VAR_2, " < ");
  VAR_3 = VAR_3 >> 3;
 }
}
