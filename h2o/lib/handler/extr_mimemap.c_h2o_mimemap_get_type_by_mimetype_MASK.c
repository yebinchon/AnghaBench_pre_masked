
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int khiter_t ;
struct TYPE_13__ {size_t len; char* base; } ;
struct TYPE_10__ {TYPE_4__ mimetype; } ;
struct TYPE_11__ {TYPE_1__ data; int member_0; } ;
typedef TYPE_2__ h2o_mimemap_type_t ;
struct TYPE_12__ {int typeset; } ;
typedef TYPE_3__ h2o_mimemap_t ;
typedef TYPE_4__ h2o_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int VAR_1 ;

h2o_mimemap_type_t *FUNC_3(h2o_mimemap_t *VAR_2, h2o_iovec_t VAR_3, int VAR_4)
{
    h2o_mimemap_type_t VAR_5 = {VAR_0};
    khiter_t VAR_6;
    size_t VAR_7;


    VAR_5.data.mimetype = VAR_3;
    if ((VAR_6 = FUNC_1(VAR_1, VAR_2->typeset, &VAR_5)) != FUNC_0(VAR_2->typeset))
        return FUNC_2(VAR_2->typeset, VAR_6);

    if (!VAR_4) {

        for (VAR_7 = 0; VAR_7 != VAR_3.len; ++VAR_7)
            if (VAR_3.base[VAR_7] == ';' || VAR_3.base[VAR_7] == ' ')
                goto HasAttributes;
    }
    return ((void*)0);

HasAttributes:

    VAR_5.data.mimetype.len = VAR_7;
    if ((VAR_6 = FUNC_1(VAR_1, VAR_2->typeset, &VAR_5)) != FUNC_0(VAR_2->typeset))
        return FUNC_2(VAR_2->typeset, VAR_6);

    return ((void*)0);
}
