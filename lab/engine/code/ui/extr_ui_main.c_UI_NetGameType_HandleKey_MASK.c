
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int numGameTypes; TYPE_1__* gameTypes; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {int gtEnum; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static qboolean FUNC_4(int VAR_5, float *VAR_6, int VAR_7) {
 int VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 != 0) {
  VAR_4.integer += VAR_8;

  if (VAR_4.integer < 0) {
   VAR_4.integer = VAR_3.numGameTypes - 1;
  } else if (VAR_4.integer >= VAR_3.numGameTypes) {
   VAR_4.integer = 0;
  }

  FUNC_3( "ui_netGameType", VAR_4.integer);
  FUNC_3( "ui_actualnetGameType", VAR_3.gameTypes[VAR_4.integer].gtEnum);
  FUNC_3( "ui_currentNetMap", 0);
  FUNC_1(VAR_1);
  FUNC_0(((void*)0), VAR_0, 0, ((void*)0));
  return VAR_2;
 }
 return VAR_1;
}
