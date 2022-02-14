
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* rchg; long nrec; } ;
struct TYPE_5__ {char* rchg; long nrec; } ;
struct TYPE_7__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_3__ xdfenv_t ;
typedef int xdchange_t ;


 int * FUNC_0 (int *,long,long,long,long) ;
 int FUNC_1 (int *) ;

int FUNC_2(xdfenv_t *VAR_0, xdchange_t **VAR_1) {
 xdchange_t *VAR_2 = ((void*)0), *VAR_3;
 char *VAR_4 = VAR_0->xdf1.rchg, *VAR_5 = VAR_0->xdf2.rchg;
 long VAR_6, VAR_7, VAR_8, VAR_9;




 for (VAR_6 = VAR_0->xdf1.nrec, VAR_7 = VAR_0->xdf2.nrec; VAR_6 >= 0 || VAR_7 >= 0; VAR_6--, VAR_7--)
  if (VAR_4[VAR_6 - 1] || VAR_5[VAR_7 - 1]) {
   for (VAR_8 = VAR_6; VAR_4[VAR_6 - 1]; VAR_6--);
   for (VAR_9 = VAR_7; VAR_5[VAR_7 - 1]; VAR_7--);

   if (!(VAR_3 = FUNC_0(VAR_2, VAR_6, VAR_7, VAR_8 - VAR_6, VAR_9 - VAR_7))) {
    FUNC_1(VAR_2);
    return -1;
   }
   VAR_2 = VAR_3;
  }

 *VAR_1 = VAR_2;

 return 0;
}
