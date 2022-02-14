
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ khiter_t ;
typedef char h2o_mimemap_type_t ;
struct TYPE_5__ {int extmap; } ;
typedef TYPE_1__ h2o_mimemap_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,char const*) ;
 char* FUNC_4 (int ,scalar_t__) ;
 char* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(h2o_mimemap_t *VAR_1, const char *VAR_2)
{
    khiter_t VAR_3 = FUNC_3(VAR_0, VAR_1->extmap, VAR_2);
    if (VAR_3 != FUNC_2(VAR_1->extmap)) {
        const char *VAR_4 = FUNC_4(VAR_1->extmap, VAR_3);
        h2o_mimemap_type_t *VAR_5 = FUNC_5(VAR_1->extmap, VAR_3);
        FUNC_6(VAR_1, VAR_5);
        FUNC_0(VAR_5);
        FUNC_1(VAR_0, VAR_1->extmap, VAR_3);
        FUNC_0((char *)VAR_4);
        FUNC_7(VAR_1);
    }
}
