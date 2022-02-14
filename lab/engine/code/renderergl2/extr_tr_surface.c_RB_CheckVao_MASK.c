
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vao_t ;
struct TYPE_4__ {int * currentVao; } ;
struct TYPE_3__ {int useInternalVao; int * vao; int cubemapIndex; int fogNum; int shader; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_3(vao_t *VAR_3)
{
 if (VAR_3 != VAR_0.currentVao)
 {
  FUNC_1();
  FUNC_0(VAR_2.shader, VAR_2.fogNum, VAR_2.cubemapIndex);

  FUNC_2(VAR_3);
 }

 if (VAR_3 != VAR_2.vao)
  VAR_2.useInternalVao = VAR_1;
}
