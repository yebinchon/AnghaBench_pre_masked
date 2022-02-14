
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec4_t ;
typedef int shaderProgram_t ;
struct TYPE_5__ {int firstIndex; int numIndexes; } ;
typedef TYPE_1__ shaderCommands_t ;
struct TYPE_7__ {int modelviewProjection; } ;
struct TYPE_6__ {int textureColorShader; int whiteImage; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int,int,int,int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_8 (int ,int) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void FUNC_9 (shaderCommands_t *VAR_8) {
 FUNC_4( VAR_7.whiteImage, VAR_2 );

 FUNC_5( VAR_1 | VAR_0 );
 FUNC_8( 0, 0 );

 {
  shaderProgram_t *VAR_9 = &VAR_7.textureColorShader;
  vec4_t VAR_10;

  FUNC_0(VAR_9);

  FUNC_2(VAR_9, VAR_5, VAR_6.modelviewProjection);
  FUNC_7(VAR_10, 1, 1, 1, 1);
  FUNC_3(VAR_9, VAR_4, VAR_10);
  FUNC_1(VAR_9, VAR_3, 0);

  FUNC_6(VAR_8->numIndexes, VAR_8->firstIndex);
 }

 FUNC_8( 0, 1 );
}
