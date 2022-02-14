
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_5__ {float* endpos; int startsolid; } ;
typedef TYPE_1__ aas_trace_t ;
typedef int aas_link_t ;
struct TYPE_7__ {int loaded; } ;
struct TYPE_6__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (float*,int,int ) ;
 int * FUNC_2 (float*,float*,int,int ) ;
 int FUNC_3 (float*) ;
 TYPE_1__ FUNC_4 (float*,float*,int ,int) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (char*,float,float,float,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (float*,float*,float*) ;
 int FUNC_8 (float*,float*) ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;

int FUNC_11(vec3_t VAR_6, vec3_t VAR_7, vec3_t VAR_8, vec3_t VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 aas_link_t *VAR_15;
 vec3_t VAR_16, VAR_17;

 vec3_t VAR_18, VAR_19;
 aas_trace_t VAR_20;

 if (!VAR_4.loaded)
 {
  VAR_5.Print(VAR_2, "AAS_BestReachableArea: aas not loaded\n");
  return 0;
 }

 FUNC_8(VAR_6, VAR_18);
 VAR_10 = FUNC_3(VAR_18);

 for (VAR_11 = 0; VAR_11 < 5 && !VAR_10; VAR_11++)
 {
  for (VAR_12 = 0; VAR_12 < 5 && !VAR_10; VAR_12++)
  {
   for (VAR_13 = -1; VAR_13 <= 1 && !VAR_10; VAR_13++)
   {
    for (VAR_14 = -1; VAR_14 <= 1 && !VAR_10; VAR_14++)
    {
     FUNC_8(VAR_6, VAR_18);
     VAR_18[0] += (float) VAR_12 * 4 * VAR_13;
     VAR_18[1] += (float) VAR_12 * 4 * VAR_14;
     VAR_18[2] += (float) VAR_11 * 4;
     VAR_10 = FUNC_3(VAR_18);
    }
   }
  }
 }

 if (VAR_10)
 {

  FUNC_8(VAR_18, VAR_19);
  VAR_18[2] += 0.25;
  VAR_19[2] -= 50;
  VAR_20 = FUNC_4(VAR_18, VAR_19, VAR_1, -1);
  if (!VAR_20.startsolid)
  {
   VAR_10 = FUNC_3(VAR_20.endpos);
   FUNC_8(VAR_20.endpos, VAR_9);




   if (VAR_10) return VAR_10;
  }
  else
  {
   FUNC_8(VAR_18, VAR_9);
   return VAR_10;
  }
 }




 FUNC_8(VAR_6, VAR_9);

 FUNC_7(VAR_6, VAR_7, VAR_16);
 FUNC_7(VAR_6, VAR_8, VAR_17);




 VAR_15 = FUNC_2(VAR_16, VAR_17, -1, VAR_1);

 VAR_10 = FUNC_0(VAR_15);

 FUNC_5(VAR_15);

 return VAR_10;
}
