
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef int buf ;
struct TYPE_2__ {int proc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,int ,char*) ;
 scalar_t__ FUNC_2 (char*,int,char const*,int ) ;

void
FUNC_3(const char *VAR_3, va_list VAR_4)
{
 char VAR_5[VAR_1];

 if (FUNC_2(VAR_5, sizeof(VAR_5), VAR_3, VAR_4) < 0)
  FUNC_0(VAR_0, "uc_logmsgx: vsnprintf failed");
 FUNC_1("%s: %s\n", VAR_2.proc_name, VAR_5);
}
