
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* handler ) (unsigned char*,int,int) ;int busy; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 void FUNC_2 (unsigned char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(unsigned char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 static int VAR_8;
 unsigned long VAR_9;

 void (*VAR_10)(unsigned char *, int, int);




 if (VAR_0)
  return;

 VAR_7 = VAR_3[0] >> 4;
 if (VAR_8) {
  FUNC_1("adb packet: ");
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
   FUNC_0(" %x", VAR_3[VAR_6]);
  FUNC_0(", id = %d\n", VAR_7);
 }
 FUNC_4(&VAR_2, VAR_9);
 VAR_10 = VAR_1[VAR_7].handler;
 if (VAR_10 != ((void*)0))
  VAR_1[VAR_7].busy = 1;
 FUNC_5(&VAR_2, VAR_9);
 if (VAR_10 != ((void*)0)) {
  (*VAR_10)(VAR_3, VAR_4, VAR_5);
  FUNC_3();
  VAR_1[VAR_7].busy = 0;
 }

}
