
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 char* FUNC_5 (int ,scalar_t__) ;
 char* FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(h2o_mimemap_t *VAR_1)
{
    khiter_t VAR_2;

    for (VAR_2 = FUNC_1(VAR_1->extmap); VAR_2 != FUNC_3(VAR_1->extmap); ++VAR_2) {
        if (!FUNC_4(VAR_1->extmap, VAR_2))
            continue;
        const char *VAR_3 = FUNC_5(VAR_1->extmap, VAR_2);
        h2o_mimemap_type_t *VAR_4 = FUNC_6(VAR_1->extmap, VAR_2);
        FUNC_7(VAR_1, VAR_4);
        FUNC_0(VAR_4);
        FUNC_2(VAR_0, VAR_1->extmap, VAR_2);
        FUNC_0((char *)VAR_3);
    }
    FUNC_8(VAR_1);
}
