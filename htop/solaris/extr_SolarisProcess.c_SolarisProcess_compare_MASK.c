
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* settings; } ;
struct TYPE_5__ {int direction; scalar_t__ sortKey; } ;
struct TYPE_4__ {long zoneid; long projid; long taskid; long poolid; long contid; char* zname; long realpid; long realppid; long lwpid; } ;
typedef TYPE_1__ SolarisProcess ;
typedef TYPE_2__ Settings ;
typedef TYPE_3__ Process ;
 long FUNC_0 (void const*,void const*) ;



 long FUNC_1 (char*,char*) ;

long FUNC_2(const void* VAR_0, const void* VAR_1) {
   SolarisProcess *VAR_2, *VAR_3;
   Settings* VAR_4 = ((Process*)VAR_0)->settings;
   if (VAR_4->direction == 1) {
      VAR_2 = (SolarisProcess*)VAR_0;
      VAR_3 = (SolarisProcess*)VAR_1;
   } else {
      VAR_3 = (SolarisProcess*)VAR_0;
      VAR_2 = (SolarisProcess*)VAR_1;
   }
   switch ((int) VAR_4->sortKey) {
   case 128:
      return (VAR_2->zoneid - VAR_3->zoneid);
   case 131:
      return (VAR_2->projid - VAR_3->projid);
   case 130:
      return (VAR_2->taskid - VAR_3->taskid);
   case 133:
      return (VAR_2->poolid - VAR_3->poolid);
   case 136:
      return (VAR_2->contid - VAR_3->contid);
   case 129:
      return FUNC_1(VAR_2->zname ? VAR_2->zname : "global", VAR_3->zname ? VAR_3->zname : "global");
   case 134:
      return (VAR_2->realpid - VAR_3->realpid);
   case 132:
      return (VAR_2->realppid - VAR_3->realppid);
   case 135:
      return (VAR_2->lwpid - VAR_3->lwpid);
   default:
      return FUNC_0(VAR_0, VAR_1);
   }
}
