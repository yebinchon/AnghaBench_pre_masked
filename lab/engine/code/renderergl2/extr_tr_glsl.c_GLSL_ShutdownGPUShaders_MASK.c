
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_3__ {int * depthBlurShader; int ssaoShader; int shadowmaskShader; int * calclevels4xShader; int tonemapShader; int bokehShader; int down4xShader; int pshadowShader; int * shadowmapShader; int * lightallShader; int * dlightShader; int * fogShader; int textureColorShader; int * genericShader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__ VAR_8 ;

void FUNC_4(void)
{
 int VAR_9;

 VAR_7.Printf(VAR_5, "------- GLSL_ShutdownGPUShaders -------\n");

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_2(VAR_9);

 FUNC_1();

 for ( VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  FUNC_0(&VAR_8.genericShader[VAR_9]);

 FUNC_0(&VAR_8.textureColorShader);

 for ( VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_0(&VAR_8.fogShader[VAR_9]);

 for ( VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  FUNC_0(&VAR_8.dlightShader[VAR_9]);

 for ( VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_0(&VAR_8.lightallShader[VAR_9]);

 for ( VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_0(&VAR_8.shadowmapShader[VAR_9]);

 FUNC_0(&VAR_8.pshadowShader);
 FUNC_0(&VAR_8.down4xShader);
 FUNC_0(&VAR_8.bokehShader);
 FUNC_0(&VAR_8.tonemapShader);

 for ( VAR_9 = 0; VAR_9 < 2; VAR_9++)
  FUNC_0(&VAR_8.calclevels4xShader[VAR_9]);

 FUNC_0(&VAR_8.shadowmaskShader);
 FUNC_0(&VAR_8.ssaoShader);

 for ( VAR_9 = 0; VAR_9 < 4; VAR_9++)
  FUNC_0(&VAR_8.depthBlurShader[VAR_9]);
}
