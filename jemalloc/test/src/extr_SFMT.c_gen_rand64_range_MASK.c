
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sfmt_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

uint64_t FUNC_2(sfmt_t *VAR_0, uint64_t VAR_1) {
    uint64_t VAR_2, VAR_3;

    VAR_3 = FUNC_0(0xffffffffffffffff) - (FUNC_0(0xffffffffffffffff) % VAR_1);
    while (1) {
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < VAR_3) {
     VAR_2 %= VAR_1;
     break;
 }
    }
    return VAR_2;
}
