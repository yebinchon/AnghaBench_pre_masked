
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u_char ;
typedef char* quad_t ;
typedef scalar_t__ off_t ;
struct TYPE_11__ {TYPE_1__* nextpr; } ;
struct TYPE_10__ {TYPE_2__* nextfu; struct TYPE_10__* nextfs; } ;
struct TYPE_9__ {int flags; int reps; TYPE_1__* nextpr; struct TYPE_9__* nextfu; } ;
struct TYPE_8__ {scalar_t__ bcnt; int flags; char* nospace; char* fmt; struct TYPE_8__* nextpr; } ;
typedef TYPE_1__ PR ;
typedef TYPE_2__ FU ;
typedef TYPE_3__ FS ;



 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 char* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(void)
{
 FS *VAR_6;
 FU *VAR_7;
 PR *VAR_8;
 int VAR_9;
 u_char *VAR_10;
 off_t VAR_11;
 u_char VAR_12, *VAR_13;

 VAR_12 = 0;
 while ((VAR_10 = FUNC_1()))
     for (VAR_6 = VAR_5, VAR_13 = VAR_10, VAR_11 = VAR_2; VAR_6;
  VAR_6 = VAR_6->nextfs, VAR_10 = VAR_13, VAR_2 = VAR_11)
      for (VAR_7 = VAR_6->nextfu; VAR_7; VAR_7 = VAR_7->nextfu) {
   if (VAR_7->flags&VAR_1)
    break;
   for (VAR_9 = VAR_7->reps; VAR_9; --VAR_9)
       for (VAR_8 = VAR_7->nextpr; VAR_8; VAR_2 += VAR_8->bcnt,
    VAR_10 += VAR_8->bcnt, VAR_8 = VAR_8->nextpr) {
        if (VAR_3 && VAR_2 >= VAR_3 &&
     !(VAR_8->flags & (128|VAR_0)))
         FUNC_0(VAR_8);
        if (VAR_9 == 1 && VAR_8->nospace) {
     VAR_12 = *VAR_8->nospace;
     *VAR_8->nospace = '\0';
        }
        FUNC_2(VAR_8, VAR_10);
        if (VAR_9 == 1 && VAR_8->nospace)
     *VAR_8->nospace = VAR_12;
       }
      }
 if (VAR_4) {




  if (!VAR_3) {
   if (!VAR_2)
    return;
   VAR_3 = VAR_2;
  }
  for (VAR_8 = VAR_4->nextpr; VAR_8; VAR_8 = VAR_8->nextpr)
   switch(VAR_8->flags) {
   case 129:
    (void)FUNC_3(VAR_8->fmt, (quad_t)VAR_3);
    break;
   case 128:
    (void)FUNC_3("%s", VAR_8->fmt);
    break;
   }
 }
}
