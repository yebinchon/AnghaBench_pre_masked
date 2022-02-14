
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; size_t size; char* buf; } ;
typedef TYPE_1__ GJSON ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char*,size_t) ;

__attribute__((used)) static void
FUNC_3 (GJSON * VAR_1, int VAR_2)
{
  char *VAR_3 = ((void*)0);

  size_t VAR_4 = VAR_1->offset + VAR_2 + 1, VAR_5 = 0;

  if (VAR_4 <= VAR_1->size)
    return;

  if (VAR_1->size == 0) {
    VAR_5 = VAR_0;
  } else {
    VAR_5 = VAR_1->size;
    VAR_5 += VAR_5 / 2;
  }

  if (VAR_5 < VAR_4)
    VAR_5 = VAR_4;

  VAR_3 = FUNC_2 (VAR_1->buf, VAR_5);
  if (VAR_3 == ((void*)0)) {
    FUNC_1 (VAR_1);
    FUNC_0 (("Unable to realloc JSON buffer.\n"));
  }
  VAR_1->buf = VAR_3;
  VAR_1->size = VAR_5;
}
