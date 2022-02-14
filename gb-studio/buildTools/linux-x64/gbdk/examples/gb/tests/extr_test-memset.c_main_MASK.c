
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(void)
{
    UBYTE *VAR_1, *VAR_2;
    UWORD VAR_3;

    VAR_1 = FUNC_0(VAR_0);


    FUNC_1(VAR_1, 0x55U, VAR_0);


    FUNC_1(VAR_1, 0xAAU, VAR_0);


    VAR_2 = VAR_1;
    for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
 if (*(VAR_2++) != 0xAAU) {
     FUNC_2("Failed at offset %lx\n", VAR_3);
 }
 if (!((UBYTE)VAR_3)) {
     FUNC_2("At %lx\r", VAR_3);
 }
    }


    VAR_2 = VAR_1 + VAR_0 - 16;
    FUNC_2("\nAt end: \n");
    for (VAR_3=0; VAR_3<32; VAR_3++) {
 FUNC_2("%lx: %x\n", (UWORD)((UWORD)&VAR_2[VAR_3] - (UWORD)VAR_1 - VAR_0), VAR_2[VAR_3]);
    }
    FUNC_2("\n");
}
