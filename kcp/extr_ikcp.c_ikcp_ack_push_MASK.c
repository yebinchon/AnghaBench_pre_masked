
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ackcount; size_t ackblock; int * acklist; } ;
typedef TYPE_1__ ikcpcb ;
typedef int IUINT32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static void FUNC_4(ikcpcb *VAR_0, IUINT32 VAR_1, IUINT32 VAR_2)
{
 size_t VAR_3 = VAR_0->ackcount + 1;
 IUINT32 *VAR_4;

 if (VAR_3 > VAR_0->ackblock) {
  IUINT32 *VAR_5;
  size_t VAR_6;

  for (VAR_6 = 8; VAR_6 < VAR_3; VAR_6 <<= 1);
  VAR_5 = (IUINT32*)FUNC_3(VAR_6 * sizeof(IUINT32) * 2);

  if (VAR_5 == ((void*)0)) {
   FUNC_1(VAR_5 != ((void*)0));
   FUNC_0();
  }

  if (VAR_0->acklist != ((void*)0)) {
   size_t VAR_7;
   for (VAR_7 = 0; VAR_7 < VAR_0->ackcount; VAR_7++) {
    VAR_5[VAR_7 * 2 + 0] = VAR_0->acklist[VAR_7 * 2 + 0];
    VAR_5[VAR_7 * 2 + 1] = VAR_0->acklist[VAR_7 * 2 + 1];
   }
   FUNC_2(VAR_0->acklist);
  }

  VAR_0->acklist = VAR_5;
  VAR_0->ackblock = VAR_6;
 }

 VAR_4 = &VAR_0->acklist[VAR_0->ackcount * 2];
 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_2;
 VAR_0->ackcount++;
}
