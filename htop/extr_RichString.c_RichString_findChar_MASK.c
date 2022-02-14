
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int chtype ;
struct TYPE_3__ {int* chptr; int chlen; } ;
typedef TYPE_1__ RichString ;



int FUNC_0(RichString* VAR_0, char VAR_1, int VAR_2) {
   chtype* VAR_3 = VAR_0->chptr + VAR_2;
   for (int VAR_4 = VAR_2; VAR_4 < VAR_0->chlen; VAR_4++) {
      if ((*VAR_3 & 0xff) == (chtype) VAR_1)
         return VAR_4;
      VAR_3++;
   }
   return -1;
}
