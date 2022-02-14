
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__** xyz; scalar_t__* smoothingGroups; } ;
typedef TYPE_1__ picoSmoothVertices_t ;
typedef size_t picoIndex_t ;



int FUNC_0(void* VAR_0, picoIndex_t VAR_1, picoIndex_t VAR_2) {
 picoSmoothVertices_t* VAR_3 = VAR_0;

 if (VAR_3->xyz[VAR_1][0] != VAR_3->xyz[VAR_2][0]) {
  return VAR_3->xyz[VAR_1][0] < VAR_3->xyz[VAR_2][0];
 }
 if (VAR_3->xyz[VAR_1][1] != VAR_3->xyz[VAR_2][1]) {
  return VAR_3->xyz[VAR_1][1] < VAR_3->xyz[VAR_2][1];
 }
 if (VAR_3->xyz[VAR_1][2] != VAR_3->xyz[VAR_2][2]) {
  return VAR_3->xyz[VAR_1][2] < VAR_3->xyz[VAR_2][2];
 }
 if (VAR_3->smoothingGroups[VAR_1] != VAR_3->smoothingGroups[VAR_2]) {
  return VAR_3->smoothingGroups[VAR_1] < VAR_3->smoothingGroups[VAR_2];
 }
 return 0;
}
