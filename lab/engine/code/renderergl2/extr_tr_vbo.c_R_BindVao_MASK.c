
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int indexesIBO; int vertexesVBO; int vao; int name; } ;
typedef TYPE_2__ vao_t ;
struct TYPE_11__ {int c_vaoBinds; } ;
struct TYPE_18__ {TYPE_1__ pc; } ;
struct TYPE_17__ {scalar_t__ intelGraphics; scalar_t__ vertexArrayObject; } ;
struct TYPE_16__ {int vertexAnimation; scalar_t__ vertexAttribsInterpolation; TYPE_2__* currentVao; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int (* Error ) (int ,char*) ;} ;
struct TYPE_13__ {TYPE_2__* vao; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_8__ VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_4 (int ,char*) ;
 TYPE_3__ VAR_9 ;
 int FUNC_5 (char*,int ) ;

void FUNC_6(vao_t * VAR_10)
{
 if(!VAR_10)
 {

  VAR_8.Error(VAR_0, "R_BindVao: NULL vao");
  return;
 }

 if(VAR_7->integer)
 {

  FUNC_0(FUNC_5("--- R_BindVao( %s ) ---\n", VAR_10->name));
 }

 if(VAR_5.currentVao != VAR_10)
 {
  VAR_5.currentVao = VAR_10;

  VAR_5.vertexAttribsInterpolation = 0;
  VAR_5.vertexAnimation = VAR_6;
  VAR_3.pc.c_vaoBinds++;

  if (VAR_4.vertexArrayObject)
  {
   FUNC_3(VAR_10->vao);


   if (VAR_4.intelGraphics || VAR_10 == VAR_9.vao)
    FUNC_2(VAR_2, VAR_10->indexesIBO);


   if (VAR_10 == VAR_9.vao)
    FUNC_2(VAR_1, VAR_10->vertexesVBO);
  }
  else
  {
   FUNC_2(VAR_1, VAR_10->vertexesVBO);
   FUNC_2(VAR_2, VAR_10->indexesIBO);


   if (VAR_10 != VAR_9.vao)
    FUNC_1(VAR_10);
  }
 }
}
