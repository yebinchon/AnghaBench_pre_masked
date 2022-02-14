
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec4_t ;
typedef float qboolean ;
typedef int ivec4_t ;
struct TYPE_6__ {float width; float height; } ;
typedef TYPE_1__ FBO_t ;


 int FUNC_0 (TYPE_1__*,int ,int *,TYPE_1__*,int ,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,float,float,float,float) ;

__attribute__((used)) static void FUNC_2(FBO_t *VAR_2, FBO_t *VAR_3, float VAR_4, qboolean VAR_5)
{
 float VAR_6, VAR_7;
 float VAR_8, VAR_9;
 float VAR_10[3] = {
  0.227027027f,
  0.316216216f,
  0.070270270f,
 };
 float VAR_11[3] = {
  0.f,
  1.3846153846f,
  3.2307692308f,
 };

 VAR_8 = VAR_5;
 VAR_9 = 1.f - VAR_8;

 VAR_8 *= VAR_4;
 VAR_9 *= VAR_4;

 {
  ivec4_t VAR_12, VAR_13;
  vec4_t VAR_14;

  FUNC_1(VAR_14, VAR_10[0], VAR_10[0], VAR_10[0], 1.0f);
  FUNC_1(VAR_12, 0, 0, VAR_2->width, VAR_2->height);
  FUNC_1(VAR_13, 0, 0, VAR_3->width, VAR_3->height);
  FUNC_0(VAR_2, VAR_12, ((void*)0), VAR_3, VAR_13, ((void*)0), VAR_14, 0);

  FUNC_1(VAR_14, VAR_10[1], VAR_10[1], VAR_10[1], 1.0f);
  VAR_6 = VAR_11[1] * VAR_8;
  VAR_7 = VAR_11[1] * VAR_9;
  FUNC_1(VAR_12, VAR_6, VAR_7, VAR_2->width, VAR_2->height);
  FUNC_0(VAR_2, VAR_12, ((void*)0), VAR_3, VAR_13, ((void*)0), VAR_14, VAR_1 | VAR_0);
  FUNC_1(VAR_12, -VAR_6, -VAR_7, VAR_2->width, VAR_2->height);
  FUNC_0(VAR_2, VAR_12, ((void*)0), VAR_3, VAR_13, ((void*)0), VAR_14, VAR_1 | VAR_0);

  FUNC_1(VAR_14, VAR_10[2], VAR_10[2], VAR_10[2], 1.0f);
  VAR_6 = VAR_11[2] * VAR_8;
  VAR_7 = VAR_11[2] * VAR_9;
  FUNC_1(VAR_12, VAR_6, VAR_7, VAR_2->width, VAR_2->height);
  FUNC_0(VAR_2, VAR_12, ((void*)0), VAR_3, VAR_13, ((void*)0), VAR_14, VAR_1 | VAR_0);
  FUNC_1(VAR_12, -VAR_6, -VAR_7, VAR_2->width, VAR_2->height);
  FUNC_0(VAR_2, VAR_12, ((void*)0), VAR_3, VAR_13, ((void*)0), VAR_14, VAR_1 | VAR_0);
 }
}
