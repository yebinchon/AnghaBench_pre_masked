
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_6__ {TYPE_1__* gameTypes; } ;
struct TYPE_5__ {size_t integer; } ;
struct TYPE_4__ {scalar_t__ gtEnum; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(qboolean VAR_4) {
 int VAR_5 = 5;
 int VAR_6 = 10;
 if (VAR_2.gameTypes[VAR_3.integer].gtEnum == VAR_1) {
  VAR_5 = 4;
 } else if (VAR_2.gameTypes[VAR_3.integer].gtEnum == VAR_0) {
  VAR_5 = 15;
 }
 if (VAR_4) {
  FUNC_0("ui_captureLimit", FUNC_1("%d", VAR_5));
  FUNC_0("ui_fragLimit", FUNC_1("%d", VAR_6));
 } else {
  FUNC_0("capturelimit", FUNC_1("%d", VAR_5));
  FUNC_0("fraglimit", FUNC_1("%d", VAR_6));
 }
}
