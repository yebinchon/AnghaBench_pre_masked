
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secp256k1_pippenger_state {int dummy; } ;
struct secp256k1_pippenger_point_state {int dummy; } ;
typedef int secp256k1_scalar ;
typedef int secp256k1_gej ;
typedef int secp256k1_ge ;


 int FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(size_t VAR_0, int VAR_1) {



    size_t VAR_2 = VAR_0 + 1;

    size_t VAR_3 = sizeof(secp256k1_ge) + sizeof(secp256k1_scalar) + sizeof(struct secp256k1_pippenger_point_state) + (FUNC_0(VAR_1+1)+1)*sizeof(int);
    return (sizeof(secp256k1_gej) << VAR_1) + sizeof(struct secp256k1_pippenger_state) + VAR_2 * VAR_3;
}
