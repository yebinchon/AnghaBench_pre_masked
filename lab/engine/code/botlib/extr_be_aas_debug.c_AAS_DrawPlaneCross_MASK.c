
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_2__ {int (* DebugLineCreate ) () ;int (* DebugLineShow ) (int,int*,int*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 TYPE_1__ VAR_1 ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int*,int*,int) ;
 int FUNC_3 (int,int*,int*,int) ;

void FUNC_4(vec3_t VAR_6, vec3_t VAR_7, float VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16[2];
 vec3_t VAR_17, VAR_18, VAR_19, VAR_20;


 FUNC_0(VAR_6, VAR_17);
 FUNC_0(VAR_6, VAR_18);
 FUNC_0(VAR_6, VAR_19);
 FUNC_0(VAR_6, VAR_20);

 VAR_11 = VAR_9 % 3;
 VAR_12 = (VAR_9 + 1) % 3;
 VAR_13 = (VAR_9 + 2) % 3;
 VAR_17[VAR_12] -= 6;
 VAR_17[VAR_13] -= 6;
 VAR_18[VAR_12] += 6;
 VAR_18[VAR_13] += 6;
 VAR_19[VAR_12] += 6;
 VAR_19[VAR_13] -= 6;
 VAR_20[VAR_12] -= 6;
 VAR_20[VAR_13] += 6;

 VAR_17[VAR_11] = (VAR_8 - (VAR_17[VAR_12] * VAR_7[VAR_12] +
    VAR_17[VAR_13] * VAR_7[VAR_13])) / VAR_7[VAR_11];
 VAR_18[VAR_11] = (VAR_8 - (VAR_18[VAR_12] * VAR_7[VAR_12] +
    VAR_18[VAR_13] * VAR_7[VAR_13])) / VAR_7[VAR_11];
 VAR_19[VAR_11] = (VAR_8 - (VAR_19[VAR_12] * VAR_7[VAR_12] +
    VAR_19[VAR_13] * VAR_7[VAR_13])) / VAR_7[VAR_11];
 VAR_20[VAR_11] = (VAR_8 - (VAR_20[VAR_12] * VAR_7[VAR_12] +
    VAR_20[VAR_13] * VAR_7[VAR_13])) / VAR_7[VAR_11];

 for (VAR_14 = 0, VAR_15 = 0; VAR_14 < 2 && VAR_15 < VAR_0; VAR_15++)
 {
  if (!VAR_2[VAR_15])
  {
   VAR_2[VAR_15] = VAR_1.DebugLineCreate();
   VAR_16[VAR_14++] = VAR_2[VAR_15];
   VAR_3[VAR_15] = VAR_5;
   VAR_4++;
  }
  else if (!VAR_3[VAR_15])
  {
   VAR_16[VAR_14++] = VAR_2[VAR_15];
   VAR_3[VAR_15] = VAR_5;
  }
 }
 VAR_1.DebugLineShow(VAR_16[0], VAR_17, VAR_18, VAR_10);
 VAR_1.DebugLineShow(VAR_16[1], VAR_19, VAR_20, VAR_10);
}
