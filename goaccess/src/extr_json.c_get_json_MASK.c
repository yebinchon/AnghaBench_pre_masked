
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int buf; } ;
typedef int GLog ;
typedef TYPE_1__ GJSON ;
typedef int GHolder ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 char* FUNC_2 (int ) ;

char *
FUNC_3 (GLog * VAR_1, GHolder * VAR_2, int VAR_3)
{
  GJSON *VAR_4 = ((void*)0);
  char *VAR_5 = ((void*)0);

  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_0 = VAR_3;
  if ((VAR_4 = FUNC_1 (VAR_1, VAR_2)) && VAR_4->size > 0) {
    VAR_5 = FUNC_2 (VAR_4->buf);
    FUNC_0 (VAR_4);
  }

  return VAR_5;
}
