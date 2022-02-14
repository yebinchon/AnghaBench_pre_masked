
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_6__ {int fraction; int* endpos; int startsolid; } ;
typedef TYPE_2__ aas_trace_t ;
struct TYPE_7__ {int numareas; TYPE_1__* areas; } ;
struct TYPE_5__ {int* center; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int*,int,int) ;
 int FUNC_4 (int*) ;
 TYPE_2__ FUNC_5 (int*,int*,int ,int) ;
 int FUNC_6 (char*,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_7 (int*,int*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 () ;

int FUNC_9(int VAR_4, int VAR_5, int *VAR_6, vec3_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 vec3_t VAR_11, VAR_12;
 aas_trace_t VAR_13;


 if (!FUNC_1(VAR_4)) return VAR_2;

 VAR_9 = VAR_1.numareas * FUNC_8();
 for (VAR_8 = 0; VAR_8 < VAR_1.numareas; VAR_8++)
 {
  if (VAR_9 <= 0) VAR_9 = 1;
  if (VAR_9 >= VAR_1.numareas) VAR_9 = 1;
  if (FUNC_1(VAR_9))
  {
   VAR_10 = FUNC_3(VAR_4, VAR_1.areas[VAR_4].center, VAR_9, VAR_5);

   if (VAR_10 > 0)
   {
    if (FUNC_2(VAR_9))
    {
     *VAR_6 = VAR_9;
     FUNC_7(VAR_1.areas[VAR_9].center, VAR_7);

     return VAR_3;
    }
    FUNC_7(VAR_1.areas[VAR_9].center, VAR_11);
    if (!FUNC_4(VAR_11))
     FUNC_6("area %d center %f %f %f in solid?", VAR_9, VAR_11[0], VAR_11[1], VAR_11[2]);
    FUNC_7(VAR_11, VAR_12);
    VAR_12[2] -= 300;
    VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_0, -1);
    if (!VAR_13.startsolid && VAR_13.fraction < 1 && FUNC_4(VAR_13.endpos) == VAR_9)
    {
     if (FUNC_0(VAR_9) > 300)
     {
      *VAR_6 = VAR_9;
      FUNC_7(VAR_13.endpos, VAR_7);

      return VAR_3;
     }
    }
   }
  }
  VAR_9++;
 }
 return VAR_2;
}
