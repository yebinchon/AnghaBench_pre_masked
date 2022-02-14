
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_5__ {int traveltype; float edgenum; float facenum; int areanum; int start; int end; } ;
typedef TYPE_1__ aas_reachability_t ;
typedef int aas_clientmove_t ;
struct TYPE_6__ {float phys_jumpvel; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (float*,int,int ) ;
 int FUNC_2 (float,int ,int ,float*) ;
 int FUNC_3 (TYPE_1__*,float*) ;
 int FUNC_4 (int *,int,int ,int ,int ,float*,float*,int,int,float,int,int ,int ) ;
 float FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (float*) ;
 int FUNC_8 (float*) ;
 int FUNC_9 (float*,float,float*) ;
 int FUNC_10 (float*,int ,int ,float) ;
 int FUNC_11 (int ,int ,float*) ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;

void FUNC_12(aas_reachability_t *VAR_17)
{
 vec3_t VAR_18, VAR_19, VAR_20;
 float VAR_21, VAR_22;
 aas_clientmove_t VAR_23;

 FUNC_6(VAR_17->areanum, 5, VAR_16);

 FUNC_0(VAR_17->start, VAR_17->end, VAR_0, VAR_1);

 if ((VAR_17->traveltype & VAR_10) == VAR_11 ||
  (VAR_17->traveltype & VAR_10) == VAR_14)
 {
  FUNC_2(VAR_15.phys_jumpvel, VAR_17->start, VAR_17->end, &VAR_21);

  FUNC_11(VAR_17->end, VAR_17->start, VAR_18);
  VAR_18[2] = 0;
  FUNC_8(VAR_18);

  FUNC_9(VAR_18, VAR_21, VAR_20);

  FUNC_7(VAR_19);
  VAR_19[2] = VAR_15.phys_jumpvel;

  FUNC_4(&VAR_23, -1, VAR_17->start, VAR_2, VAR_16,
         VAR_20, VAR_19, 3, 30, 0.1f,
         VAR_6|VAR_5|VAR_4|
         VAR_3|VAR_8, 0, VAR_16);

  if ((VAR_17->traveltype & VAR_10) == VAR_11)
  {
   FUNC_3(VAR_17, VAR_18);
   FUNC_1(VAR_18, 4, VAR_0);
  }
 }
 else if ((VAR_17->traveltype & VAR_10) == VAR_13)
 {
  VAR_22 = FUNC_5(VAR_17->start);
  FUNC_2(VAR_22, VAR_17->start, VAR_17->end, &VAR_21);

  FUNC_11(VAR_17->end, VAR_17->start, VAR_18);
  VAR_18[2] = 0;
  FUNC_8(VAR_18);

  FUNC_9(VAR_18, VAR_21, VAR_19);
  FUNC_10(VAR_20, 0, 0, VAR_22);

  FUNC_4(&VAR_23, -1, VAR_17->start, VAR_2, VAR_16,
         VAR_20, VAR_19, 30, 30, 0.1f,
         VAR_5|VAR_4|
         VAR_3|VAR_8|
         VAR_9|VAR_7, VAR_17->areanum, VAR_16);
 }
 else if ((VAR_17->traveltype & VAR_10) == VAR_12)
 {
  FUNC_10(VAR_19, 0, 0, 0);

  FUNC_11(VAR_17->end, VAR_17->start, VAR_18);
  VAR_18[2] = 0;
  FUNC_8(VAR_18);


  FUNC_9(VAR_18, VAR_17->edgenum, VAR_20);

  VAR_20[2] = VAR_17->facenum;

  FUNC_4(&VAR_23, -1, VAR_17->start, VAR_2, VAR_16,
         VAR_20, VAR_19, 30, 30, 0.1f,
         VAR_5|VAR_4|
         VAR_3|VAR_8|
         VAR_9|VAR_7, VAR_17->areanum, VAR_16);
 }
}
