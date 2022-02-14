
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_10__ {int numGameTypes; TYPE_2__* gameTypes; TYPE_1__* mapList; } ;
struct TYPE_9__ {size_t integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {scalar_t__ gtEnum; } ;
struct TYPE_6__ {int mapLoadName; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,int) ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;

__attribute__((used)) static qboolean FUNC_6(int VAR_7, float *VAR_8, int VAR_9, qboolean VAR_10) {
 int VAR_11 = FUNC_3(VAR_9);
 if (VAR_11 != 0) {
  int VAR_12 = FUNC_2(VAR_3);


  if (VAR_11 < 0) {
   VAR_6.integer--;
   if (VAR_6.integer == 2) {
    VAR_6.integer = 1;
   } else if (VAR_6.integer < 2) {
    VAR_6.integer = VAR_4.numGameTypes - 1;
   }
  } else {
   VAR_6.integer++;
   if (VAR_6.integer >= VAR_4.numGameTypes) {
    VAR_6.integer = 1;
   } else if (VAR_6.integer == 2) {
    VAR_6.integer = 3;
   }
  }

  if (VAR_4.gameTypes[VAR_6.integer].gtEnum < VAR_1) {
   FUNC_5( "ui_Q3Model", 1 );
  } else {
   FUNC_5( "ui_Q3Model", 0 );
  }

  FUNC_5("ui_gameType", VAR_6.integer);
  FUNC_4(VAR_3);
  FUNC_1(VAR_4.mapList[VAR_5.integer].mapLoadName, VAR_4.gameTypes[VAR_6.integer].gtEnum);
  if (VAR_10 && VAR_12 != FUNC_2(VAR_3)) {
   FUNC_5( "ui_currentMap", 0);
   FUNC_0(((void*)0), VAR_0, 0, ((void*)0));
  }
  return VAR_3;
 }
 return VAR_2;
}
