
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lcbuf ;
typedef scalar_t__ khiter_t ;
typedef int h2o_mimemap_type_t ;
struct TYPE_5__ {int * default_type; int extmap; } ;
typedef TYPE_1__ h2o_mimemap_t ;
struct TYPE_6__ {int len; int base; } ;
typedef TYPE_2__ h2o_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*) ;
 int * FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,int ,int) ;

h2o_mimemap_type_t *FUNC_5(h2o_mimemap_t *VAR_1, h2o_iovec_t VAR_2)
{
    char VAR_3[256];

    if (0 < VAR_2.len && VAR_2.len < sizeof(VAR_3)) {
        FUNC_4(VAR_3, VAR_2.base, VAR_2.len);
        FUNC_0(VAR_3, VAR_2.len);
        VAR_3[VAR_2.len] = '\0';
        khiter_t VAR_4 = FUNC_2(VAR_0, VAR_1->extmap, VAR_3);
        if (VAR_4 != FUNC_1(VAR_1->extmap))
            return FUNC_3(VAR_1->extmap, VAR_4);
    }
    return VAR_1->default_type;
}
