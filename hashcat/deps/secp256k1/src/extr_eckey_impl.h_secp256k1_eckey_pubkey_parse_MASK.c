
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_ge ;
typedef int secp256k1_fe ;


 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;
 unsigned char const VAR_2 ;
 unsigned char const VAR_3 ;
 unsigned char const VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(secp256k1_ge *VAR_5, const unsigned char *VAR_6, size_t VAR_7) {
    if (VAR_7 == 33 && (VAR_6[0] == VAR_0 || VAR_6[0] == VAR_3)) {
        secp256k1_fe VAR_8;
        return FUNC_1(&VAR_8, VAR_6+1) && FUNC_3(VAR_5, &VAR_8, VAR_6[0] == VAR_3);
    } else if (VAR_7 == 65 && (VAR_6[0] == VAR_4 || VAR_6[0] == VAR_1 || VAR_6[0] == VAR_2)) {
        secp256k1_fe VAR_9, VAR_10;
        if (!FUNC_1(&VAR_9, VAR_6+1) || !FUNC_1(&VAR_10, VAR_6+33)) {
            return 0;
        }
        FUNC_4(VAR_5, &VAR_9, &VAR_10);
        if ((VAR_6[0] == VAR_1 || VAR_6[0] == VAR_2) &&
            FUNC_0(&VAR_10) != (VAR_6[0] == VAR_2)) {
            return 0;
        }
        return FUNC_2(VAR_5);
    } else {
        return 0;
    }
}
