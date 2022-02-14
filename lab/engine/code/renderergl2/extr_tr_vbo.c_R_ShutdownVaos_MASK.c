
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ indexesIBO; scalar_t__ vertexesVBO; scalar_t__ vao; } ;
typedef TYPE_1__ vao_t ;
struct TYPE_6__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_5__ {int numVaos; TYPE_1__** vaos; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,scalar_t__*) ;
 int FUNC_2 (int,scalar_t__*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__ VAR_2 ;

void FUNC_4(void)
{
 int VAR_3;
 vao_t *VAR_4;

 VAR_1.Printf(VAR_0, "------- R_ShutdownVaos -------\n");

 FUNC_0();

 for(VAR_3 = 0; VAR_3 < VAR_2.numVaos; VAR_3++)
 {
  VAR_4 = VAR_2.vaos[VAR_3];

  if(VAR_4->vao)
   FUNC_2(1, &VAR_4->vao);

  if(VAR_4->vertexesVBO)
  {
   FUNC_1(1, &VAR_4->vertexesVBO);
  }

  if(VAR_4->indexesIBO)
  {
   FUNC_1(1, &VAR_4->indexesIBO);
  }
 }

 VAR_2.numVaos = 0;
}
