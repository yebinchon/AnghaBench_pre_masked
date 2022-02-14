
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int ptls_hash_algorithm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int ,scalar_t__) ;
 int FUNC_1 (int *,void**,void**,int) ;
 int FUNC_2 (void*) ;

int FUNC_3(ptls_hash_algorithm_t *VAR_2, ptls_iovec_t VAR_3, ptls_iovec_t VAR_4, uint64_t *VAR_5)
{
    uint8_t VAR_6[VAR_0], VAR_7[(VAR_1 + 1) * 2], *VAR_8 = VAR_7;
    int VAR_9;

    *VAR_8++ = (uint8_t)VAR_3.len;
    FUNC_0(VAR_8, VAR_3.base, VAR_3.len);
    VAR_8 += VAR_3.len;
    *VAR_8++ = (uint8_t)VAR_4.len;
    FUNC_0(VAR_8, VAR_4.base, VAR_4.len);
    VAR_8 += VAR_4.len;

    if ((VAR_9 = FUNC_1(VAR_2, VAR_6, VAR_7, VAR_8 - VAR_7)) != 0)
        return VAR_9;
    VAR_8 = VAR_6;
    *VAR_5 = FUNC_2((void *)&VAR_8);

    return 0;
}
