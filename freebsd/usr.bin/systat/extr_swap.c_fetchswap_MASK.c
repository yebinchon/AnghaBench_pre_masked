
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct devinfo {int dummy; } ;
struct TYPE_5__ {int snap_time; struct devinfo* dinfo; } ;
struct TYPE_4__ {int snap_time; struct devinfo* dinfo; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_4(void)
{
 VAR_8 = VAR_5;
 if ((VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_0, 0)) < 0) {
  FUNC_2("systat: kvm_getswapinfo failed");
  return;
 }

 VAR_7 = VAR_2;
 VAR_9 = VAR_10;
 FUNC_0();

 struct devinfo *VAR_11;

 VAR_11 = VAR_6.dinfo;
 VAR_6.dinfo = VAR_1.dinfo;
 VAR_1.dinfo = VAR_11;

 VAR_6.snap_time = VAR_1.snap_time;
 FUNC_1( &VAR_1 );
}
