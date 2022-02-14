
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int h2o_hpack_header_table_t ;
struct TYPE_4__ {int dont_compress; } ;
struct TYPE_5__ {TYPE_1__ flags; int value; int name; } ;
typedef TYPE_2__ h2o_header_t ;


 int * FUNC_0 (int *,int *,int ,int *,int ) ;

__attribute__((used)) static uint8_t *FUNC_1(h2o_hpack_header_table_t *VAR_0, uint8_t *VAR_1, const h2o_header_t *VAR_2)
{
    return FUNC_0(VAR_0, VAR_1, VAR_2->name, &VAR_2->value, VAR_2->flags.dont_compress);
}
