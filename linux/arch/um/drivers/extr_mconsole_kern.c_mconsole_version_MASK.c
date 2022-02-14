
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mc_request {int dummy; } ;
struct TYPE_2__ {char* sysname; char* nodename; char* release; char* version; char* machine; } ;


 int FUNC_0 (struct mc_request*,char*,int ,int ) ;
 int FUNC_1 (char*,char*,char*,char*,char*,char*,char*) ;
 TYPE_1__* FUNC_2 () ;

void FUNC_3(struct mc_request *VAR_0)
{
 char VAR_1[256];

 FUNC_1(VAR_1, "%s %s %s %s %s", FUNC_2()->sysname,
  FUNC_2()->nodename, FUNC_2()->release, FUNC_2()->version,
  FUNC_2()->machine);
 FUNC_0(VAR_0, VAR_1, 0, 0);
}
