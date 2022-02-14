
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* attribs; } ;
typedef TYPE_1__ vao_t ;
struct TYPE_8__ {int offset; int stride; int normalized; int type; int count; scalar_t__ enabled; } ;
typedef TYPE_2__ vaoAttrib_t ;
typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ vertexArrayObject; } ;
struct TYPE_10__ {int vertexAttribsEnabled; } ;
struct TYPE_9__ {TYPE_1__* vao; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ,int ,int ,int ) ;
 TYPE_3__ VAR_3 ;

void FUNC_4(vao_t *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  uint32_t VAR_6 = 1 << VAR_5;
  vaoAttrib_t *VAR_7 = &VAR_4->attribs[VAR_5];

  if (VAR_7->enabled)
  {
   FUNC_3(VAR_5, VAR_7->count, VAR_7->type, VAR_7->normalized, VAR_7->stride, FUNC_0(VAR_7->offset));
   if (VAR_1.vertexArrayObject || !(VAR_2.vertexAttribsEnabled & VAR_6))
    FUNC_2(VAR_5);

   if (!VAR_1.vertexArrayObject || VAR_4 == VAR_3.vao)
    VAR_2.vertexAttribsEnabled |= VAR_6;
  }
  else
  {


   if (!VAR_1.vertexArrayObject && (VAR_2.vertexAttribsEnabled & VAR_6))
    FUNC_1(VAR_5);

   if (!VAR_1.vertexArrayObject || VAR_4 == VAR_3.vao)
    VAR_2.vertexAttribsEnabled &= ~VAR_6;
  }
 }
}
