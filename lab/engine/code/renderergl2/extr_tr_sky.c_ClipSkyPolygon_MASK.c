
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int qboolean ;
struct TYPE_2__ {int (* Error ) (int ,char*) ;} ;


 int FUNC_0 (int,float*) ;
 float FUNC_1 (float*,float*) ;
 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;



 int FUNC_2 (float*,float*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 float** VAR_6 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4 (int VAR_7, vec3_t VAR_8, int VAR_9)
{
 float *VAR_10;
 float *VAR_11;
 qboolean VAR_12, VAR_13;
 float VAR_14, VAR_15;
 float VAR_16[VAR_1];
 int VAR_17[VAR_1];
 vec3_t VAR_18[2][VAR_1];
 int VAR_19[2];
 int VAR_20, VAR_21;

 if (VAR_7 > VAR_1-2)
  VAR_5.Error (VAR_0, "ClipSkyPolygon: MAX_CLIP_VERTS");
 if (VAR_9 == 6)
 {
  FUNC_0 (VAR_7, VAR_8);
  return;
 }

 VAR_12 = VAR_13 = VAR_3;
 VAR_10 = VAR_6[VAR_9];
 for (VAR_20=0, VAR_11 = VAR_8 ; VAR_20<VAR_7 ; VAR_20++, VAR_11+=3)
 {
  VAR_14 = FUNC_1 (VAR_11, VAR_10);
  if (VAR_14 > VAR_2)
  {
   VAR_12 = VAR_4;
   VAR_17[VAR_20] = 129;
  }
  else if (VAR_14 < -VAR_2)
  {
   VAR_13 = VAR_4;
   VAR_17[VAR_20] = 130;
  }
  else
   VAR_17[VAR_20] = 128;
  VAR_16[VAR_20] = VAR_14;
 }

 if (!VAR_12 || !VAR_13)
 {
  FUNC_4 (VAR_7, VAR_8, VAR_9+1);
  return;
 }


 VAR_17[VAR_20] = VAR_17[0];
 VAR_16[VAR_20] = VAR_16[0];
 FUNC_2 (VAR_8, (VAR_8+(VAR_20*3)) );
 VAR_19[0] = VAR_19[1] = 0;

 for (VAR_20=0, VAR_11 = VAR_8 ; VAR_20<VAR_7 ; VAR_20++, VAR_11+=3)
 {
  switch (VAR_17[VAR_20])
  {
  case 129:
   FUNC_2 (VAR_11, VAR_18[0][VAR_19[0]]);
   VAR_19[0]++;
   break;
  case 130:
   FUNC_2 (VAR_11, VAR_18[1][VAR_19[1]]);
   VAR_19[1]++;
   break;
  case 128:
   FUNC_2 (VAR_11, VAR_18[0][VAR_19[0]]);
   VAR_19[0]++;
   FUNC_2 (VAR_11, VAR_18[1][VAR_19[1]]);
   VAR_19[1]++;
   break;
  }

  if (VAR_17[VAR_20] == 128 || VAR_17[VAR_20+1] == 128 || VAR_17[VAR_20+1] == VAR_17[VAR_20])
   continue;

  VAR_14 = VAR_16[VAR_20] / (VAR_16[VAR_20] - VAR_16[VAR_20+1]);
  for (VAR_21=0 ; VAR_21<3 ; VAR_21++)
  {
   VAR_15 = VAR_11[VAR_21] + VAR_14*(VAR_11[VAR_21+3] - VAR_11[VAR_21]);
   VAR_18[0][VAR_19[0]][VAR_21] = VAR_15;
   VAR_18[1][VAR_19[1]][VAR_21] = VAR_15;
  }
  VAR_19[0]++;
  VAR_19[1]++;
 }


 FUNC_4 (VAR_19[0], VAR_18[0][0], VAR_9+1);
 FUNC_4 (VAR_19[1], VAR_18[1][0], VAR_9+1);
}
