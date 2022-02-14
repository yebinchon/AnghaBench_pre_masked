
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,double) ;

void FUNC_1(double VAR_0) {
    double VAR_1 = VAR_0;
    int VAR_2 = 0;
    if (VAR_1 < 0.0) {
        VAR_1 = -VAR_1;
    }
    while (VAR_1 > 0 && VAR_1 < 100.0) {
        VAR_1 *= 10.0;
        VAR_2++;
    }
    FUNC_0("%.*f", VAR_2, VAR_0);
}
