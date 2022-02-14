
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int escrypt_local_t ;
typedef int (* escrypt_kdf_t ) (int *,int const*,size_t,int const*,size_t,int ,int ,int ,int *,size_t) ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t,int const*,size_t,int ,int ,int ,int *,size_t) ;
 int FUNC_3 (int *,int const*,size_t,int const*,size_t,int ,int ,int ,int *,size_t) ;
 scalar_t__ FUNC_4 () ;

int
FUNC_5(const uint8_t *VAR_0, size_t VAR_1,
                                      const uint8_t *VAR_2, size_t VAR_3,
                                      uint64_t VAR_4, uint32_t VAR_5, uint32_t VAR_6,
                                      uint8_t *VAR_7, size_t VAR_8)
{
    escrypt_kdf_t VAR_9;
    escrypt_local_t VAR_10;
    int VAR_11;

    if (FUNC_1(&VAR_10)) {
        return -1;
    }




    VAR_9 = FUNC_2;

    VAR_11 = VAR_9(&VAR_10, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
                         VAR_8);
    if (FUNC_0(&VAR_10)) {
        return -1;
    }
    return VAR_11;
}
