
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec4_t ;
typedef float* vec3_t ;
struct TYPE_3__ {float* st; float* xyz; int tangent; int normal; } ;
typedef TYPE_1__ srfVert_t ;
typedef int qboolean ;


 int FUNC_0 (float*,float*,float*) ;
 float FUNC_1 (float*,float*) ;
 int FUNC_2 (int ,float*) ;
 int FUNC_3 (float*,int ) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (float*,float*,float*) ;
 float FUNC_6 (float) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_7(srfVert_t * VAR_2[3])
{
 int VAR_3;
 float VAR_4, VAR_5, VAR_6;
 vec3_t VAR_7;



 VAR_4 = (VAR_2[1]->st[0] - VAR_2[0]->st[0]) * (VAR_2[2]->st[1] - VAR_2[0]->st[1]) - (VAR_2[2]->st[0] - VAR_2[0]->st[0]) * (VAR_2[1]->st[1] - VAR_2[0]->st[1]);
 if(FUNC_6(VAR_4) < 0.00000001f)
  return VAR_0;


 for(VAR_3 = 0; VAR_3 < 3; VAR_3++)
 {
  vec4_t VAR_8;
  vec3_t VAR_9, VAR_10, VAR_11;


  VAR_5 = VAR_2[VAR_3]->st[0] + 10.0f;
  VAR_6 = VAR_2[VAR_3]->st[1];
  VAR_7[0] = ((VAR_2[1]->st[0] - VAR_5) * (VAR_2[2]->st[1] - VAR_6) - (VAR_2[2]->st[0] - VAR_5) * (VAR_2[1]->st[1] - VAR_6)) / VAR_4;
  VAR_7[1] = ((VAR_2[2]->st[0] - VAR_5) * (VAR_2[0]->st[1] - VAR_6) - (VAR_2[0]->st[0] - VAR_5) * (VAR_2[2]->st[1] - VAR_6)) / VAR_4;
  VAR_7[2] = ((VAR_2[0]->st[0] - VAR_5) * (VAR_2[1]->st[1] - VAR_6) - (VAR_2[1]->st[0] - VAR_5) * (VAR_2[0]->st[1] - VAR_6)) / VAR_4;

  VAR_8[0] = VAR_7[0] * VAR_2[0]->xyz[0] + VAR_7[1] * VAR_2[1]->xyz[0] + VAR_7[2] * VAR_2[2]->xyz[0];
  VAR_8[1] = VAR_7[0] * VAR_2[0]->xyz[1] + VAR_7[1] * VAR_2[1]->xyz[1] + VAR_7[2] * VAR_2[2]->xyz[1];
  VAR_8[2] = VAR_7[0] * VAR_2[0]->xyz[2] + VAR_7[1] * VAR_2[1]->xyz[2] + VAR_7[2] * VAR_2[2]->xyz[2];

  FUNC_5(VAR_8, VAR_2[VAR_3]->xyz, VAR_8);
  FUNC_4(VAR_8);


  VAR_5 = VAR_2[VAR_3]->st[0];
  VAR_6 = VAR_2[VAR_3]->st[1] + 10.0f;
  VAR_7[0] = ((VAR_2[1]->st[0] - VAR_5) * (VAR_2[2]->st[1] - VAR_6) - (VAR_2[2]->st[0] - VAR_5) * (VAR_2[1]->st[1] - VAR_6)) / VAR_4;
  VAR_7[1] = ((VAR_2[2]->st[0] - VAR_5) * (VAR_2[0]->st[1] - VAR_6) - (VAR_2[0]->st[0] - VAR_5) * (VAR_2[2]->st[1] - VAR_6)) / VAR_4;
  VAR_7[2] = ((VAR_2[0]->st[0] - VAR_5) * (VAR_2[1]->st[1] - VAR_6) - (VAR_2[1]->st[0] - VAR_5) * (VAR_2[0]->st[1] - VAR_6)) / VAR_4;

  VAR_10[0] = VAR_7[0] * VAR_2[0]->xyz[0] + VAR_7[1] * VAR_2[1]->xyz[0] + VAR_7[2] * VAR_2[2]->xyz[0];
  VAR_10[1] = VAR_7[0] * VAR_2[0]->xyz[1] + VAR_7[1] * VAR_2[1]->xyz[1] + VAR_7[2] * VAR_2[2]->xyz[1];
  VAR_10[2] = VAR_7[0] * VAR_2[0]->xyz[2] + VAR_7[1] * VAR_2[1]->xyz[2] + VAR_7[2] * VAR_2[2]->xyz[2];

  FUNC_5(VAR_10, VAR_2[VAR_3]->xyz, VAR_10);
  FUNC_4(VAR_10);


  FUNC_3(VAR_9, VAR_2[VAR_3]->normal);
  FUNC_0(VAR_9, VAR_8, VAR_11);
  VAR_8[3] = (FUNC_1(VAR_11, VAR_10) < 0.0f) ? -1.0f : 1.0f;

  FUNC_2(VAR_2[VAR_3]->tangent, VAR_8);




 }

 return VAR_1;
}
