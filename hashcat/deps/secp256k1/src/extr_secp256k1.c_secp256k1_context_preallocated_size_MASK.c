
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_context ;


 scalar_t__ FUNC_0 (int,int ) ;
 size_t FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;

size_t FUNC_3(unsigned int VAR_7) {
    size_t VAR_8 = FUNC_1(sizeof(secp256k1_context));

    if (FUNC_0((VAR_7 & VAR_5) != VAR_4, 0)) {
            FUNC_2(&VAR_6,
                                    "Invalid flags");
            return 0;
    }

    if (VAR_7 & VAR_2) {
        VAR_8 += VAR_1;
    }
    if (VAR_7 & VAR_3) {
        VAR_8 += VAR_0;
    }
    return VAR_8;
}
