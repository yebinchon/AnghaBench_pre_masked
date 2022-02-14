
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {long r8; int r15; scalar_t__ r10; } ;
struct sigscratch {TYPE_3__ pt; } ;
struct TYPE_4__ {int sa_flags; } ;
struct TYPE_5__ {TYPE_1__ sa; } ;
struct ksignal {scalar_t__ sig; TYPE_2__ ka; } ;


 void* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ksignal*) ;
 scalar_t__ FUNC_1 (struct ksignal*,struct sigscratch*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (long) ;

void
FUNC_5 (struct sigscratch *VAR_3, long VAR_4)
{
 long VAR_5 = VAR_4;
 long VAR_6 = VAR_3->pt.r8;
 struct ksignal VAR_7;





 while (1) {
  FUNC_0(&VAR_7);







  if ((long) VAR_3->pt.r10 != -1)






   VAR_5 = 0;

  if (VAR_7.sig <= 0)
   break;

  if (FUNC_4(VAR_5)) {
   switch (VAR_6) {
   case 128:
   case 131:
    VAR_3->pt.r8 = VAR_0;

    break;
   case 129:
    if ((VAR_7.ka.sa.sa_flags & VAR_1) == 0) {
     VAR_3->pt.r8 = VAR_0;

     break;
    }

   case 130:
    FUNC_2(&VAR_3->pt);
    VAR_5 = 0;
   }
  }





  if (FUNC_1(&VAR_7, VAR_3))
   return;
 }


 if (VAR_5) {

  if (VAR_6 == 131 || VAR_6 == 129 || VAR_6 == 130
      || VAR_6 == 128)
  {





   FUNC_2(&VAR_3->pt);
   if (VAR_6 == 128)
    VAR_3->pt.r15 = VAR_2;
  }
 }



 FUNC_3();
}
