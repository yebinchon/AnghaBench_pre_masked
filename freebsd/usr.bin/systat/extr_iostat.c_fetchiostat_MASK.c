
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct devinfo {int generation; int numdevs; } ;
struct TYPE_5__ {struct devinfo* dinfo; int snap_time; int cp_time; } ;
struct TYPE_4__ {int snap_time; struct devinfo* dinfo; } ;


 int FUNC_0 (char*,int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int *,size_t*,int *,int ) ;

void
FUNC_6(void)
{
 struct devinfo *VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(VAR_0.cp_time);
 if (FUNC_5("kern.cp_time", &VAR_0.cp_time, &VAR_6, ((void*)0), 0)
     || VAR_6 != sizeof(VAR_0.cp_time)) {
  FUNC_4("kern.cp_time");
  FUNC_3 (1);
 }
 VAR_5 = VAR_3.dinfo;
 VAR_3.dinfo = VAR_0.dinfo;
 VAR_0.dinfo = VAR_5;

 VAR_3.snap_time = VAR_0.snap_time;
 switch (FUNC_1(((void*)0), &VAR_0)) {
 case -1:
  FUNC_2(1, "%s", VAR_1);
  break;
 case 1:
  FUNC_0("refresh", ((void*)0));
  break;
 default:
  break;
 }
 VAR_4 = VAR_0.dinfo->numdevs;
 VAR_2 = VAR_0.dinfo->generation;

}
