
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,double) ;

int FUNC_1(void) {
    double VAR_0 = 0.12;
    double VAR_1 = 16.0;
    FUNC_0("%.2f\n", VAR_0 + VAR_1);
    FUNC_0("%.2f\n", VAR_0 - VAR_1);
    FUNC_0("%.2f\n", VAR_0 * VAR_1);
    FUNC_0("%.2f\n", VAR_0 / VAR_1);
    FUNC_0("%.2f\n", VAR_1 / VAR_0);
    FUNC_0("%.2f\n", VAR_0 + VAR_0 / VAR_1 + VAR_1);
    FUNC_0("%.2f\n", (VAR_0 + VAR_0) / (VAR_1 + VAR_1));
    return 0;
}
