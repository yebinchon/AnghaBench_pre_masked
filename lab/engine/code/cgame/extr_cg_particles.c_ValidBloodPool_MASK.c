
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {scalar_t__ entityNum; int fraction; int startsolid; } ;
typedef TYPE_1__ trace_t ;
typedef int qboolean ;


 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int *,int ,int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;

qboolean FUNC_5 (vec3_t VAR_5)
{


 vec3_t VAR_6;
 vec3_t VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 trace_t VAR_17;
 vec3_t VAR_18;

 VAR_15 = 16;
 VAR_16 = 16;

 FUNC_3 (VAR_18, 0, 0, 1);

 FUNC_4 (VAR_18, VAR_6);
 FUNC_0 (VAR_6, ((void*)0), VAR_7, VAR_8);

 FUNC_2 (VAR_5, 0.5, VAR_18, VAR_11);

 for (VAR_13= -VAR_15/2; VAR_13<VAR_15; VAR_13+= VAR_15)
 {
  FUNC_2 (VAR_11, VAR_13, VAR_7, VAR_10);

  for (VAR_14= -VAR_16/2; VAR_14<VAR_16; VAR_14+= VAR_16)
  {
   FUNC_2 (VAR_10, VAR_14, VAR_8, VAR_9);
   FUNC_2 (VAR_9, -0.5*2, VAR_18, VAR_12);

   FUNC_1 (&VAR_17, VAR_9, ((void*)0), ((void*)0), VAR_12, -1, VAR_0);


   if (VAR_17.entityNum < VAR_1)
    return VAR_3;

   if (!(!VAR_17.startsolid && VAR_17.fraction < 1))
    return VAR_3;

  }
 }

 return VAR_4;
}
