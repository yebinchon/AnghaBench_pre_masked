
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* ints; scalar_t__* longs; scalar_t__* doubles; } ;
union engine_stats {TYPE_3__ arrays; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_13__ {union engine_stats stats; TYPE_1__ node; } ;
struct TYPE_10__ {int* doubles; scalar_t__* ints; scalar_t__* longs; } ;
struct TYPE_12__ {TYPE_2__ arrays; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,int,int) ;
 TYPE_4__ VAR_4 ;
 TYPE_5__* VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_1 (int VAR_9, int VAR_10) {

  FUNC_0 (&VAR_4, 0x7f, sizeof (union engine_stats));
  FUNC_0 (&VAR_3, 0x80, sizeof (union engine_stats));
  FUNC_0 (&VAR_7, 0, sizeof (union engine_stats));
  int VAR_11;
  VAR_8 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
    VAR_4.arrays.doubles[VAR_11] = 1e100;
    VAR_3.arrays.doubles[VAR_11] = -1e100;
    VAR_7.arrays.doubles[VAR_11] = 0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) if (!VAR_9 || VAR_10 == (VAR_5[VAR_11].node.id >> 32)){
    union engine_stats* VAR_12 = &VAR_5[VAR_11].stats;
    int VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
      if (VAR_4.arrays.ints[VAR_13] > VAR_12->arrays.ints[VAR_13]) {
        VAR_4.arrays.ints[VAR_13] = VAR_12->arrays.ints[VAR_13];
      }
      if (VAR_3.arrays.ints[VAR_13] < VAR_12->arrays.ints[VAR_13]) {
        VAR_3.arrays.ints[VAR_13] = VAR_12->arrays.ints[VAR_13];
      }
      VAR_7.arrays.ints[VAR_13] += VAR_12->arrays.ints[VAR_13];
    }
    for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
      if (VAR_4.arrays.longs[VAR_13] > VAR_12->arrays.longs[VAR_13]) {
        VAR_4.arrays.longs[VAR_13] = VAR_12->arrays.longs[VAR_13];
      }
      if (VAR_3.arrays.longs[VAR_13] < VAR_12->arrays.longs[VAR_13]) {
        VAR_3.arrays.longs[VAR_13] = VAR_12->arrays.longs[VAR_13];
      }
      VAR_7.arrays.longs[VAR_13] += VAR_12->arrays.longs[VAR_13];
    }
    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
      if (VAR_4.arrays.doubles[VAR_13] > VAR_12->arrays.doubles[VAR_13]) {
        VAR_4.arrays.doubles[VAR_13] = VAR_12->arrays.doubles[VAR_13];
      }
      if (VAR_3.arrays.doubles[VAR_13] < VAR_12->arrays.doubles[VAR_13]) {
        VAR_3.arrays.doubles[VAR_13] = VAR_12->arrays.doubles[VAR_13];
      }
      VAR_7.arrays.doubles[VAR_13] += VAR_12->arrays.doubles[VAR_13];
    }
    VAR_8 ++;
  }





}
