
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec4_t ;
typedef int vec2_t ;
struct TYPE_4__ {int modelviewProjection; } ;
struct TYPE_3__ {int textureColorShader; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,float,float) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_5(vec4_t VAR_5[4])
{
 vec2_t VAR_6[4];

 FUNC_4(VAR_6[0], 0.0f, 0.0f);
 FUNC_4(VAR_6[1], 1.0f, 0.0f);
 FUNC_4(VAR_6[2], 1.0f, 1.0f);
 FUNC_4(VAR_6[3], 0.0f, 1.0f);

 FUNC_0(&VAR_4.textureColorShader);

 FUNC_1(&VAR_4.textureColorShader, VAR_1, VAR_3.modelviewProjection);
 FUNC_2(&VAR_4.textureColorShader, VAR_0, VAR_2);

 FUNC_3(VAR_5, VAR_6);
}
