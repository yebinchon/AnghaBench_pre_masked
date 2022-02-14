
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ h2o_url_scheme_t ;
typedef int h2o_hpack_header_table_t ;


 int VAR_0 ;
 TYPE_1__ const VAR_1 ;
 TYPE_1__ const VAR_2 ;
 int * FUNC_0 (int *,int *,int ,int *) ;

__attribute__((used)) static uint8_t *FUNC_1(h2o_hpack_header_table_t *VAR_3, uint8_t *VAR_4, const h2o_url_scheme_t *VAR_5)
{
    if (VAR_5 == &VAR_2) {
        *VAR_4++ = 0x87;
        return VAR_4;
    }
    if (VAR_5 == &VAR_1) {
        *VAR_4++ = 0x86;
        return VAR_4;
    }
    return FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_5->name);
}
