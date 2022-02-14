
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ numJoinGameTypes; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static qboolean FUNC_3(int VAR_4, float *VAR_5, int VAR_6) {
 int VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 != 0) {
  VAR_3.integer += VAR_7;

  if (VAR_3.integer < 0) {
   VAR_3.integer = VAR_2.numJoinGameTypes - 1;
  } else if (VAR_3.integer >= VAR_2.numJoinGameTypes) {
   VAR_3.integer = 0;
  }

  FUNC_2( "ui_joinGameType", VAR_3.integer);
  FUNC_0(VAR_1);
  return VAR_1;
 }
 return VAR_0;
}
