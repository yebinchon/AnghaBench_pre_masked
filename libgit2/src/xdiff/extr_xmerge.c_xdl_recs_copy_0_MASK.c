
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* ptr; int size; } ;
typedef TYPE_3__ xrecord_t ;
struct TYPE_7__ {TYPE_3__** recs; } ;
struct TYPE_6__ {TYPE_3__** recs; } ;
struct TYPE_9__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_4__ xdfenv_t ;


 int FUNC_0 (size_t*,size_t,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(size_t *VAR_0, int VAR_1, xdfenv_t *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, char *VAR_7)
{
 xrecord_t **VAR_8;
 size_t VAR_9 = 0;

 *VAR_0 = 0;

 VAR_8 = (VAR_1 ? VAR_2->xdf1.recs : VAR_2->xdf2.recs) + VAR_3;

 if (VAR_4 < 1)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_4; ) {
  if (VAR_7)
   FUNC_1(VAR_7 + VAR_9, VAR_8[VAR_3]->ptr, VAR_8[VAR_3]->size);

  FUNC_0(&VAR_9, VAR_9, VAR_8[VAR_3++]->size);
 }

 if (VAR_6) {
  VAR_3 = VAR_8[VAR_4 - 1]->size;
  if (VAR_3 == 0 || VAR_8[VAR_4 - 1]->ptr[VAR_3 - 1] != '\n') {
   if (VAR_5) {
    if (VAR_7)
     VAR_7[VAR_9] = '\r';
    FUNC_0(&VAR_9, VAR_9, 1);
   }

   if (VAR_7)
    VAR_7[VAR_9] = '\n';

   FUNC_0(&VAR_9, VAR_9, 1);
  }
 }

 *VAR_0 = VAR_9;
 return 0;
}
