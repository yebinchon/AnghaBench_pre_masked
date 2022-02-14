
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int ptls_t ;
struct TYPE_4__ {size_t len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int ptls_decompress_certificate_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int ,size_t*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_1(ptls_decompress_certificate_t *VAR_3, ptls_t *VAR_4, uint16_t VAR_5, ptls_iovec_t VAR_6,
                                         ptls_iovec_t VAR_7)
{
    if (VAR_5 != VAR_2)
        goto Fail;

    size_t VAR_8 = VAR_6.len;
    if (FUNC_0(VAR_7.len, VAR_7.base, &VAR_8, VAR_6.base) != VAR_0)
        goto Fail;

    if (VAR_8 != VAR_6.len)
        goto Fail;

    return 0;
Fail:
    return VAR_1;
}
