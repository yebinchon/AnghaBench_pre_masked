
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (double,double,long,char*) ;

void FUNC_1(void)
{
    double VAR_3, VAR_4;
    long VAR_5, VAR_6;

    VAR_3 = 1.0;
    VAR_4 = 2.0;
    for(VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        VAR_5 = 0;
        if (VAR_6 & 1)
            VAR_5 |= VAR_0;
        if (VAR_6 & 2)
            VAR_5 |= VAR_2;
        FUNC_0(VAR_3, VAR_4, VAR_5, "b");
        FUNC_0(VAR_3, VAR_4, VAR_5, "e");
        FUNC_0(VAR_3, VAR_4, VAR_5, "be");
        FUNC_0(VAR_3, VAR_4, VAR_5, "nb");
        FUNC_0(VAR_3, VAR_4, VAR_5, "ne");
        FUNC_0(VAR_3, VAR_4, VAR_5, "nbe");
    }
    FUNC_0(VAR_3, VAR_4, 0, "u");
    FUNC_0(VAR_3, VAR_4, VAR_1, "u");
    FUNC_0(VAR_3, VAR_4, 0, "nu");
    FUNC_0(VAR_3, VAR_4, VAR_1, "nu");
}
