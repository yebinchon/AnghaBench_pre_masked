
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*,int,int,int *) ;
 size_t FUNC_6 (char*,int,size_t,int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_1 ;

int FUNC_8(char *VAR_2, unsigned char *VAR_3, size_t VAR_4, int VAR_5)
{
    FILE *VAR_6;
    char VAR_7[VAR_0];
    size_t VAR_8 = 1;
    size_t VAR_9 = 0;
    if (VAR_5 >= 0) {
        FUNC_7("FAILED (at the document #%d)\nSOURCE:\n", VAR_5+1);
    }
    VAR_6 = FUNC_4(VAR_2, "rb");
    FUNC_0(*VAR_6);
    while (VAR_8 > 0) {
        VAR_8 = FUNC_5(VAR_7, 1, VAR_0, VAR_6);
        FUNC_0(!FUNC_3(VAR_6));
        if (!VAR_8) break;
        FUNC_0(FUNC_6(VAR_7, 1, VAR_8, VAR_1) == VAR_8);
        VAR_9 += VAR_8;
        if (FUNC_2(VAR_6)) break;
    }
    FUNC_1(VAR_6);
    FUNC_7("#### (length: %d)\n", VAR_9);
    FUNC_7("OUTPUT:\n%s#### (length: %d)\n", VAR_3, VAR_4);
    return 0;
}
