
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ realTime; } ;
struct TYPE_4__ {scalar_t__ refreshtime; int refreshActive; } ;
struct TYPE_6__ {TYPE_2__ uiDC; TYPE_1__ serverStatus; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_2( void ) {
 FUNC_1(FUNC_0());
 VAR_1.serverStatus.refreshActive = VAR_0;
 VAR_1.serverStatus.refreshtime = VAR_1.uiDC.realTime + 1000;

}
