
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; scalar_t__ fp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;

void FUNC_4(char *VAR_2)
{
 if (!VAR_2 || !FUNC_2(VAR_2))
 {
  FUNC_1("openlog <filename>\n");
  return;
 }
 if (VAR_1.fp)
 {
  FUNC_1("log file %s is already opened\n", VAR_1.filename);
  return;
 }
 VAR_1.fp = FUNC_0(VAR_2, "wb");
 if (!VAR_1.fp)
 {
  FUNC_1("can't open the log file %s\n", VAR_2);
  return;
 }
 FUNC_3(VAR_1.filename, VAR_2, VAR_0);
 FUNC_1("Opened log %s\n", VAR_1.filename);
}
