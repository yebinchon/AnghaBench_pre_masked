
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int size; char* ptr; } ;
typedef TYPE_3__ xrecord_t ;
struct TYPE_7__ {TYPE_3__** recs; } ;
struct TYPE_6__ {TYPE_3__** recs; } ;
struct TYPE_9__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_4__ xdfenv_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, xdfenv_t *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, char *VAR_6)
{
 xrecord_t **VAR_7;
 int VAR_8 = 0;

 VAR_7 = (VAR_0 ? VAR_1->xdf1.recs : VAR_1->xdf2.recs) + VAR_2;

 if (VAR_3 < 1)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_8 += VAR_7[VAR_2++]->size)
  if (VAR_6)
   FUNC_0(VAR_6 + VAR_8, VAR_7[VAR_2]->ptr, VAR_7[VAR_2]->size);
 if (VAR_5) {
  VAR_2 = VAR_7[VAR_3 - 1]->size;
  if (VAR_2 == 0 || VAR_7[VAR_3 - 1]->ptr[VAR_2 - 1] != '\n') {
   if (VAR_4) {
    if (VAR_6)
     VAR_6[VAR_8] = '\r';
    VAR_8++;
   }

   if (VAR_6)
    VAR_6[VAR_8] = '\n';
   VAR_8++;
  }
 }
 return VAR_8;
}
