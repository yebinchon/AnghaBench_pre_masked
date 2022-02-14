
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UWORD ;
typedef int UBYTE ;
struct TYPE_3__ {void* h; void* l; } ;
struct TYPE_4__ {int w; TYPE_1__ b; } ;


 void* VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int**,int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;

int FUNC_9(void)
{
    UBYTE *VAR_3[32];
    UBYTE VAR_4;
    UWORD VAR_5 = 0;
    UBYTE VAR_6 = 0;
    UBYTE VAR_7 = 0;
    UWORD VAR_8;
    UWORD VAR_9 = 0;
    FUNC_4("Testing...\n");


    FUNC_3(VAR_3, 0, 32*sizeof(UBYTE *));

    for (VAR_7 = 0; VAR_7 < 20; VAR_7++) {

 VAR_6 = 0;
 VAR_5 = 0;
 VAR_1 = 0;

 while (!VAR_6) {
     VAR_4 = FUNC_6()&0x1f;
     if (VAR_3[VAR_4] != ((void*)0)) {
  FUNC_0(VAR_3[VAR_4]);

     }

     VAR_3[VAR_4] = FUNC_2((UWORD)FUNC_6() + (UWORD)(FUNC_6()&0x3f));
     if (VAR_3[VAR_4] == ((void*)0)) {
  VAR_6 = 1;
     }
     VAR_5++;
     if (!(VAR_5&0xff)) {
  FUNC_4("%lu\r", VAR_5);

     }
 }
 VAR_9 += VAR_5;
 FUNC_4("%lu worked.\n", VAR_5);
    }
    FUNC_4("Total: %lu\n", VAR_9);
}
