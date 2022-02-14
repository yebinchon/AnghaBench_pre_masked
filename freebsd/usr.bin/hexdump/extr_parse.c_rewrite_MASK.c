
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ bcnt; TYPE_2__* nextfu; } ;
struct TYPE_8__ {unsigned char* fmt; int bcnt; int flags; scalar_t__ reps; TYPE_1__* nextpr; struct TYPE_8__* nextfu; } ;
struct TYPE_7__ {unsigned char* fmt; int flags; int bcnt; unsigned char* cchar; unsigned char* nospace; struct TYPE_7__* nextpr; } ;
typedef TYPE_1__ PR ;
typedef TYPE_2__ FU ;
typedef TYPE_3__ FS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned char**,char*,unsigned char*,char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_12 ;
 TYPE_1__* FUNC_6 (int,int) ;
 TYPE_2__* VAR_13 ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,char*) ;
 scalar_t__ FUNC_9 (unsigned char) ;
 scalar_t__ FUNC_10 (unsigned char) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_14 ;
 int * FUNC_12 (scalar_t__,unsigned char) ;

void
FUNC_13(FS *VAR_15)
{
 enum { NOTOKAY, USEBCNT, USEPREC } VAR_16;
 PR *VAR_17, **VAR_18;
 FU *VAR_19;
 unsigned char *VAR_20, *VAR_21, *VAR_22;
 char VAR_23, VAR_24[3];
 int VAR_25, VAR_26;

 VAR_26 = 0;

 for (VAR_19 = VAR_15->nextfu; VAR_19; VAR_19 = VAR_19->nextfu) {




  VAR_18 = &VAR_19->nextpr;
  for (VAR_25 = 0, VAR_22 = VAR_19->fmt; *VAR_22; VAR_18 = &VAR_17->nextpr) {
   if ((VAR_17 = FUNC_6(1, sizeof(PR))) == ((void*)0))
    FUNC_7(1, ((void*)0));
   *VAR_18 = VAR_17;


   for (VAR_20 = VAR_22; *VAR_20 && *VAR_20 != '%'; ++VAR_20);


   if (!*VAR_20) {
    VAR_17->fmt = VAR_22;
    VAR_17->flags = VAR_9;
    break;
   }





   if (VAR_19->bcnt) {
    VAR_16 = USEBCNT;

    while (*++VAR_20 != 0 && FUNC_12(VAR_14, *VAR_20) != ((void*)0))
     ;
    if (*VAR_20 == 0)
     FUNC_4();
   } else {

    while (*++VAR_20 != 0 && FUNC_12(VAR_14 + 1, *VAR_20) != ((void*)0))
     ;
    if (*VAR_20 == 0)
     FUNC_4();
    if (*VAR_20 == '.' && FUNC_9(*++VAR_20)) {
     VAR_16 = USEPREC;
     VAR_26 = FUNC_1(VAR_20);
     while (FUNC_9(*++VAR_20));
    } else
     VAR_16 = NOTOKAY;
   }

   VAR_21 = *VAR_20 ? VAR_20 + 1 : VAR_20;


   VAR_24[0] = *VAR_20;
   VAR_24[1] = '\0';






   switch(VAR_24[0]) {
   case 'c':
    VAR_17->flags = VAR_2;
    switch(VAR_19->bcnt) {
    case 0: case 1:
     VAR_17->bcnt = 1;
     break;
    default:
     VAR_20[1] = '\0';
     FUNC_2(VAR_20);
    }
    break;
   case 'd': case 'i':
    VAR_17->flags = VAR_5;
    goto isint;
   case 'o': case 'u': case 'x': case 'X':
    VAR_17->flags = VAR_11;
isint: VAR_24[2] = '\0';
    VAR_24[1] = VAR_24[0];
    VAR_24[0] = 'q';
    switch(VAR_19->bcnt) {
    case 0: case 4:
     VAR_17->bcnt = 4;
     break;
    case 1:
     VAR_17->bcnt = 1;
     break;
    case 2:
     VAR_17->bcnt = 2;
     break;
    default:
     VAR_20[1] = '\0';
     FUNC_2(VAR_20);
    }
    break;
   case 'e': case 'E': case 'f': case 'g': case 'G':
    VAR_17->flags = VAR_3;
    switch(VAR_19->bcnt) {
    case 0: case 8:
     VAR_17->bcnt = 8;
     break;
    case 4:
     VAR_17->bcnt = 4;
     break;
    default:
     if (VAR_19->bcnt == sizeof(long double)) {
      VAR_24[2] = '\0';
      VAR_24[1] = VAR_24[0];
      VAR_24[0] = 'L';
      VAR_17->bcnt = sizeof(long double);
     } else {
      VAR_20[1] = '\0';
      FUNC_2(VAR_20);
     }
    }
    break;
   case 's':
    VAR_17->flags = VAR_8;
    switch(VAR_16) {
    case NOTOKAY:
     FUNC_5();
    case USEBCNT:
     VAR_17->bcnt = VAR_19->bcnt;
     break;
    case USEPREC:
     VAR_17->bcnt = VAR_26;
     break;
    }
    break;
   case '_':
    ++VAR_21;
    switch(VAR_20[1]) {
    case 'A':
     VAR_13 = VAR_19;
     VAR_19->flags |= VAR_4;

    case 'a':
     VAR_17->flags = VAR_0;
     ++VAR_21;
     switch(VAR_20[2]) {
     case 'd': case 'o': case'x':
      VAR_24[0] = 'q';
      VAR_24[1] = VAR_20[2];
      VAR_24[2] = '\0';
      break;
     default:
      VAR_20[3] = '\0';
      FUNC_3(VAR_20);
     }
     break;
    case 'c':
     VAR_17->flags = VAR_1;

     goto isint2;
    case 'p':
     VAR_17->flags = VAR_6;
     VAR_24[0] = 'c';
     goto isint2;
    case 'u':
     VAR_17->flags = VAR_10;

isint2: switch(VAR_19->bcnt) {
     case 0: case 1:
      VAR_17->bcnt = 1;
      break;
     default:
      VAR_20[2] = '\0';
      FUNC_2(VAR_20);
     }
     break;
    default:
     VAR_20[2] = '\0';
     FUNC_3(VAR_20);
    }
    break;
   default:
    VAR_20[1] = '\0';
    FUNC_3(VAR_20);
   }





   VAR_23 = *VAR_21;
   VAR_20[0] = '\0';
   if (FUNC_0(&VAR_17->fmt, "%s%s", VAR_22, VAR_24) == -1)
    FUNC_7(1, ((void*)0));
   *VAR_21 = VAR_23;
   VAR_17->cchar = VAR_17->fmt + (VAR_20 - VAR_22);
   VAR_22 = VAR_21;


   if (!(VAR_17->flags&VAR_0) && VAR_19->bcnt && VAR_25++)
     FUNC_8(1, "byte count with multiple conversion characters");
  }




  if (!VAR_19->bcnt)
   for (VAR_17 = VAR_19->nextpr; VAR_17; VAR_17 = VAR_17->nextpr)
    VAR_19->bcnt += VAR_17->bcnt;
 }
 for (VAR_19 = VAR_15->nextfu; VAR_19; VAR_19 = VAR_19->nextfu) {
  if (!VAR_19->nextfu && VAR_15->bcnt < VAR_12 &&
      !(VAR_19->flags&VAR_7) && VAR_19->bcnt)
   VAR_19->reps += (VAR_12 - VAR_15->bcnt) / VAR_19->bcnt;
  if (VAR_19->reps > 1) {
   for (VAR_17 = VAR_19->nextpr;; VAR_17 = VAR_17->nextpr)
    if (!VAR_17->nextpr)
     break;
   for (VAR_20 = VAR_17->fmt, VAR_21 = ((void*)0); *VAR_20; ++VAR_20)
    VAR_21 = FUNC_10(*VAR_20) ? VAR_20 : ((void*)0);
   if (VAR_21)
    VAR_17->nospace = VAR_21;
  }
 }
}
