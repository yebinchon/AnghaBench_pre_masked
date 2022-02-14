
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;
typedef int h2o_hpack_header_table_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static uint8_t *FUNC_3(h2o_hpack_header_table_t *VAR_1, uint8_t *VAR_2, h2o_iovec_t VAR_3)
{
    if (FUNC_2(VAR_3.base, VAR_3.len, FUNC_0("/"))) {
        *VAR_2++ = 0x84;
        return VAR_2;
    }
    if (FUNC_2(VAR_3.base, VAR_3.len, FUNC_0("/index.html"))) {
        *VAR_2++ = 0x85;
        return VAR_2;
    }
    return FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_3);
}
