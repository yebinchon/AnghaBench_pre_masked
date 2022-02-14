
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int dont_compress; } ;
struct TYPE_5__ {TYPE_1__ flags; int buf; } ;
typedef TYPE_2__ h2o_token_t ;
typedef int h2o_iovec_t ;
typedef int h2o_hpack_header_table_t ;


 int * FUNC_0 (int *,int *,int *,int const*,int ) ;

__attribute__((used)) static uint8_t *FUNC_1(h2o_hpack_header_table_t *VAR_0, uint8_t *VAR_1, const h2o_token_t *VAR_2,
                                    const h2o_iovec_t *VAR_3)
{
    return FUNC_0(VAR_0, VAR_1, &VAR_2->buf, VAR_3, VAR_2->flags.dont_compress);
}
