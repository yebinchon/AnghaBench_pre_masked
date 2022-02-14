
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int numAreas; TYPE_1__* areas; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {scalar_t__ floodnum; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_1( int VAR_5, int VAR_6 ) {

 if ( VAR_2->integer ) {
  return VAR_4;
 }


 if ( VAR_5 < 0 || VAR_6 < 0 ) {
  return VAR_3;
 }

 if (VAR_5 >= VAR_1.numAreas || VAR_6 >= VAR_1.numAreas) {
  FUNC_0 (VAR_0, "area >= cm.numAreas");
 }

 if (VAR_1.areas[VAR_5].floodnum == VAR_1.areas[VAR_6].floodnum) {
  return VAR_4;
 }
 return VAR_3;
}
