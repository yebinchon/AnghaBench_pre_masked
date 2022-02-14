
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, const char *VAR_1)
{
 switch (VAR_1[0]) {
  case 130:
   FUNC_0(VAR_0, "Planar #%c", VAR_1[1]);
   break;
  case 133:
   FUNC_0(VAR_0, "CPU #%c", VAR_1[1]);
   break;
  case 132:
   FUNC_0(VAR_0, "Fan #%c", VAR_1[1]);
   break;
  case 129:
   FUNC_0(VAR_0, "Rack #%c", VAR_1[1]);
   break;
  case 128:
   FUNC_0(VAR_0, "Voltage #%c", VAR_1[1]);
   break;
  case 131:
   FUNC_0(VAR_0, "LCD #%c", VAR_1[1]);
   break;
  case '.':
   FUNC_0(VAR_0, "- %c", VAR_1[1]);
   break;
  default:
   FUNC_0(VAR_0, "Unknown location");
   break;
 }
}
