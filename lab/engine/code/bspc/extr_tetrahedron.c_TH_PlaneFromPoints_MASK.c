
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_4__ {TYPE_1__* vertexes; } ;
struct TYPE_3__ {float* v; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (float*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float*,float*,int ) ;
 TYPE_2__ VAR_0 ;

int FUNC_5(int VAR_1, int VAR_2, int VAR_3)
{
 vec3_t VAR_4, VAR_5, VAR_6;
 vec_t VAR_7;
 float *VAR_8, *VAR_9, *VAR_10;

 VAR_8 = VAR_0.vertexes[VAR_1].v;
 VAR_9 = VAR_0.vertexes[VAR_2].v;
 VAR_10 = VAR_0.vertexes[VAR_3].v;

 FUNC_4(VAR_8, VAR_9, VAR_4);
 FUNC_4(VAR_10, VAR_9, VAR_5);
 FUNC_0(VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_6);

 VAR_7 = FUNC_1(VAR_8, VAR_6);

 return FUNC_2(VAR_6, VAR_7);
}
