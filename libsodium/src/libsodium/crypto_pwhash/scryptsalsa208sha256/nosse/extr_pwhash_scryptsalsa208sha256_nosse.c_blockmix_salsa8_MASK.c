
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int const escrypt_block_t ;


 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(const uint32_t *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2, size_t VAR_3)
{
    size_t VAR_4;


    FUNC_0((escrypt_block_t *) VAR_2,
              (const escrypt_block_t *) &VAR_0[(2 * VAR_3 - 1) * 16]);


    for (VAR_4 = 0; VAR_4 < 2 * VAR_3; VAR_4 += 2) {

        FUNC_1((escrypt_block_t *) VAR_2,
                  (const escrypt_block_t *) &VAR_0[VAR_4 * 16]);
        FUNC_2(VAR_2);



        FUNC_0((escrypt_block_t *) &VAR_1[VAR_4 * 8],
                  (const escrypt_block_t *) VAR_2);


        FUNC_1((escrypt_block_t *) VAR_2,
                  (const escrypt_block_t *) &VAR_0[VAR_4 * 16 + 16]);
        FUNC_2(VAR_2);



        FUNC_0((escrypt_block_t *) &VAR_1[VAR_4 * 8 + VAR_3 * 16],
                  (escrypt_block_t *) VAR_2);
    }
}
