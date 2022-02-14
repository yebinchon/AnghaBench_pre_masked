
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; int * fp; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,...) ;

void FUNC_2(void)
{
 if (!VAR_0.fp)
 {
  FUNC_1("no log file to close\n");
  return;
 }
 if (FUNC_0(VAR_0.fp))
 {
  FUNC_1("can't close log file %s\n", VAR_0.filename);
  return;
 }
 VAR_0.fp = ((void*)0);
 FUNC_1("Closed log %s\n", VAR_0.filename);
}
