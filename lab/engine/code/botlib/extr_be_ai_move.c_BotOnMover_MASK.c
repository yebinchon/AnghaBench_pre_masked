
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_6__ {scalar_t__ ent; int allsolid; int startsolid; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_7__ {int facenum; } ;
typedef TYPE_2__ aas_reachability_t ;
struct TYPE_8__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (int,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__*) ;
 TYPE_1__ FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(vec3_t VAR_7, int VAR_8, aas_reachability_t *VAR_9)
{
 int VAR_10, VAR_11;
 vec3_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 vec3_t VAR_17 = {0, 0, 0};
 vec3_t VAR_18 = {-16, -16, -8}, VAR_19 = {16, 16, 8};
 bsp_trace_t VAR_20;

 VAR_11 = VAR_9->facenum & 0x0000FFFF;

 FUNC_0(VAR_11, VAR_17, VAR_12, VAR_13, ((void*)0));

 if (!FUNC_2(VAR_11, VAR_14))
 {
  VAR_4.Print(VAR_3, "no entity with model %d\n", VAR_11);
  return VAR_5;
 }

 for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
 {
  if (VAR_7[VAR_10] > VAR_14[VAR_10] + VAR_13[VAR_10] + 16) return VAR_5;
  if (VAR_7[VAR_10] < VAR_14[VAR_10] + VAR_12[VAR_10] - 16) return VAR_5;
 }

 FUNC_4(VAR_7, VAR_15);
 VAR_15[2] += 24;
 FUNC_4(VAR_7, VAR_16);
 VAR_16[2] -= 48;

 VAR_20 = FUNC_3(VAR_15, VAR_18, VAR_19, VAR_16, VAR_8, VAR_1|VAR_0);
 if (!VAR_20.startsolid && !VAR_20.allsolid)
 {

  if (VAR_20.ent != VAR_2 && FUNC_1(VAR_20.ent) == VAR_11)
  {
   return VAR_6;
  }
 }
 return VAR_5;
}
