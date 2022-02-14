
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int attr; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
typedef TYPE_2__ h2o_mimemap_type_t ;
typedef int h2o_mimemap_t ;
typedef int h2o_mime_attributes_t ;


 TYPE_2__* FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (char const*) ;

void FUNC_8(h2o_mimemap_t *VAR_0, const char *VAR_1, h2o_mime_attributes_t *VAR_2)
{
    h2o_mimemap_type_t *VAR_3;


    if ((VAR_3 = FUNC_4(VAR_0, FUNC_1(VAR_1, FUNC_7(VAR_1)), 1)) != ((void*)0) &&
        (VAR_2 == ((void*)0) || FUNC_5(&VAR_3->data.attr, VAR_2, sizeof(*VAR_2)) == 0)) {
        FUNC_2(VAR_3);
    } else {
        VAR_3 = FUNC_0(VAR_1, VAR_2);
    }

    FUNC_6(VAR_0, VAR_3);
    FUNC_3(VAR_3);
}
