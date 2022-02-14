
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 int FUNC_0 (int*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int**,int ,int) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 () ;
 int* FUNC_5 (int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ) ;

int
FUNC_8(int VAR_4, char **VAR_5)
{
    u_long VAR_6,VAR_7,VAR_8;

    if (VAR_4 > 1) VAR_1 = FUNC_7(VAR_5[1],0,0);
    if (VAR_4 > 2) VAR_0 = FUNC_7(VAR_5[2],0,0);
    if (VAR_4 > 3) VAR_2 = FUNC_7(VAR_5[3],0,0);
    FUNC_3("BRK(0)=%p ", FUNC_6(0));
    VAR_3 = FUNC_1(sizeof(*VAR_3) * VAR_0);
    FUNC_2(VAR_3, 0, sizeof(*VAR_3) * VAR_0);
    for (VAR_6 = 1; VAR_6 <= 4096; VAR_6 *= 2) {
        for (VAR_7 = 0; VAR_7 < 40960/VAR_6 && VAR_7 < VAR_0; VAR_7++) {
     VAR_3[VAR_7] = FUNC_1(VAR_6);
        }
        for (VAR_7 = 0; VAR_7 < 40960/VAR_6 && VAR_7 < VAR_0; VAR_7++) {
     FUNC_0(VAR_3[VAR_7]);
     VAR_3[VAR_7] = ((void*)0);
        }
    }

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
 VAR_7 = FUNC_4() % VAR_0;
 VAR_8 = FUNC_4() % VAR_2;
 VAR_3[VAR_7] = FUNC_5(VAR_3[VAR_7], VAR_8 & 1 ? 0 : VAR_8);
 if (VAR_8 & 1 || VAR_8 == 0) {




  VAR_3[VAR_7] = ((void*)0);
 }
 if (VAR_3[VAR_7])
     VAR_3[VAR_7][0] = 1;
    }
    FUNC_3("BRK(1)=%p ", FUNC_6(0));
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
 if (VAR_3[VAR_7]) {
     FUNC_0(VAR_3[VAR_7]);
     VAR_3[VAR_7] = ((void*)0);
 }
    }
    FUNC_3("BRK(2)=%p NOPS=%lu NBUCKETS=%lu NSIZE=%lu\n",
 FUNC_6(0), VAR_1, VAR_0, VAR_2);
    return 0;
}
