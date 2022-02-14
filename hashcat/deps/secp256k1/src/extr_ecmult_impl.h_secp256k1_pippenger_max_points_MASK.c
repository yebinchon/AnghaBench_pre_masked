
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secp256k1_pippenger_state {int dummy; } ;
struct secp256k1_pippenger_point_state {int dummy; } ;
typedef int secp256k1_scratch ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;
typedef int secp256k1_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int const*,int *,int ) ;

__attribute__((used)) static size_t FUNC_3(const secp256k1_callback* VAR_2, secp256k1_scratch *VAR_3) {
    size_t VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_1);
    int VAR_5;
    size_t VAR_6 = 0;

    for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++) {
        size_t VAR_7;
        size_t VAR_8 = FUNC_1(VAR_5);
        size_t VAR_9;
        size_t VAR_10;
        size_t VAR_11 = sizeof(secp256k1_ge) + sizeof(secp256k1_scalar) + sizeof(struct secp256k1_pippenger_point_state) + (FUNC_0(VAR_5+1)+1)*sizeof(int);




        VAR_10 = (sizeof(secp256k1_gej) << VAR_5) + VAR_11 + sizeof(struct secp256k1_pippenger_state);
        if (VAR_10 > VAR_4) {
            break;
        }
        VAR_9 = VAR_4 - VAR_10;

        VAR_7 = VAR_9/VAR_11;
        VAR_7 = VAR_7 > VAR_8 ? VAR_8 : VAR_7;
        if (VAR_7 > VAR_6) {
            VAR_6 = VAR_7;
        }
        if (VAR_7 < VAR_8) {



            break;
        }
    }
    return VAR_6;
}
