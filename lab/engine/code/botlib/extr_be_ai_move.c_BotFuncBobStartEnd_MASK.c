
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_4__ {int facenum; int edgenum; } ;
typedef TYPE_1__ aas_reachability_t ;
struct TYPE_5__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (int,int*,int*,int*,int *) ;
 int FUNC_1 (int,int*) ;
 int VAR_0 ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,double,int*) ;
 int FUNC_5 (int*,int ,int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_6 (int ,char*,int) ;

void FUNC_7(aas_reachability_t *VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5)
{
 int VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10, VAR_11 = {0, 0, 0};
 int VAR_12, VAR_13;

 VAR_7 = VAR_2->facenum & 0x0000FFFF;
 if (!FUNC_1(VAR_7, VAR_5))
 {
  VAR_1.Print(VAR_0, "BotFuncBobStartEnd: no entity with model %d\n", VAR_7);
  FUNC_5(VAR_3, 0, 0, 0);
  FUNC_5(VAR_4, 0, 0, 0);
  return;
 }
 FUNC_0(VAR_7, VAR_11, VAR_8, VAR_9, ((void*)0));
 FUNC_2(VAR_8, VAR_9, VAR_10);
 FUNC_4(VAR_10, 0.5, VAR_10);
 FUNC_3(VAR_10, VAR_3);
 FUNC_3(VAR_10, VAR_4);
 VAR_6 = VAR_2->facenum >> 16;
 VAR_12 = VAR_2->edgenum >> 16;
 if (VAR_12 > 0x00007FFF) VAR_12 |= 0xFFFF0000;
 VAR_13 = VAR_2->edgenum & 0x0000FFFF;
 if (VAR_13 > 0x00007FFF) VAR_13 |= 0xFFFF0000;
 if (VAR_6 & 1)
 {
  VAR_3[0] = VAR_12;
  VAR_4[0] = VAR_13;

  VAR_5[0] += VAR_10[0];
  VAR_5[1] = VAR_10[1];
  VAR_5[2] = VAR_10[2];
 }
 else if (VAR_6 & 2)
 {
  VAR_3[1] = VAR_12;
  VAR_4[1] = VAR_13;

  VAR_5[0] = VAR_10[0];
  VAR_5[1] += VAR_10[1];
  VAR_5[2] = VAR_10[2];
 }
 else
 {
  VAR_3[2] = VAR_12;
  VAR_4[2] = VAR_13;

  VAR_5[0] = VAR_10[0];
  VAR_5[1] = VAR_10[1];
  VAR_5[2] += VAR_10[2];
 }
}
