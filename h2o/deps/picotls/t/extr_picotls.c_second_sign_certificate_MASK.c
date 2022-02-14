
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptls_t ;
typedef int ptls_sign_certificate_t ;
typedef int ptls_iovec_t ;
typedef int ptls_buffer_t ;
struct TYPE_3__ {int (* cb ) (TYPE_1__*,int *,int *,int *,int ,int const*,size_t) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *,int ,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(ptls_sign_certificate_t *VAR_2, ptls_t *VAR_3, uint16_t *VAR_4, ptls_buffer_t *VAR_5,
                                   ptls_iovec_t VAR_6, const uint16_t *VAR_7, size_t VAR_8)
{
    ++VAR_0;
    return VAR_1->cb(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
