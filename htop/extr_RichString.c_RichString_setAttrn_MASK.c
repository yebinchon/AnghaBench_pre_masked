
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int chtype ;
struct TYPE_3__ {int* chptr; scalar_t__ chlen; } ;
typedef TYPE_1__ RichString ;


 int FUNC_0 (int,int ,scalar_t__) ;

void FUNC_1(RichString* VAR_0, int VAR_1, int VAR_2, int VAR_3) {
   chtype* VAR_4 = VAR_0->chptr + VAR_2;
   VAR_3 = FUNC_0(VAR_3, 0, VAR_0->chlen - 1);
   for (int VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
      *VAR_4 = (*VAR_4 & 0xff) | VAR_1;
      VAR_4++;
   }
}
