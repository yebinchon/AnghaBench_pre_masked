
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_fe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*) ;

void FUNC_6(const secp256k1_fe *VAR_0, const secp256k1_fe *VAR_1) {
    secp256k1_fe VAR_2, VAR_3;
    int VAR_4 = FUNC_5(&VAR_2, VAR_0);
    FUNC_0((VAR_4 == 0) == (VAR_1 == ((void*)0)));

    if (VAR_1 != ((void*)0)) {

        FUNC_3(&VAR_3, &VAR_2, 1);
        FUNC_1(&VAR_2, VAR_1); FUNC_1(&VAR_3, VAR_1);
        FUNC_4(&VAR_2); FUNC_4(&VAR_3);
        FUNC_0(FUNC_2(&VAR_2) || FUNC_2(&VAR_3));
    }
}
