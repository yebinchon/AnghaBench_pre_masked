
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* base; size_t len; } ;
struct TYPE_8__ {int attr; TYPE_1__ mimetype; } ;
struct TYPE_9__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ h2o_mimemap_type_t ;
typedef int h2o_mime_attributes_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,scalar_t__,int *) ;
 int FUNC_1 (char const*,int *) ;
 char FUNC_2 (char const) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static h2o_mimemap_type_t *FUNC_5(const char *VAR_1, h2o_mime_attributes_t *VAR_2)
{
    h2o_mimemap_type_t *VAR_3 = FUNC_0(((void*)0), sizeof(*VAR_3) + FUNC_4(VAR_1) + 1, ((void*)0));
    size_t VAR_4;

    FUNC_3(VAR_3, 0, sizeof(*VAR_3));

    VAR_3->type = VAR_0;


    VAR_3->data.mimetype.base = (char *)VAR_3 + sizeof(*VAR_3);
    for (VAR_4 = 0; VAR_1[VAR_4] != '\0' && VAR_1[VAR_4] != ';'; ++VAR_4)
        VAR_3->data.mimetype.base[VAR_4] = FUNC_2(VAR_1[VAR_4]);
    for (; VAR_1[VAR_4] != '\0'; ++VAR_4)
        VAR_3->data.mimetype.base[VAR_4] = VAR_1[VAR_4];
    VAR_3->data.mimetype.base[VAR_4] = '\0';
    VAR_3->data.mimetype.len = VAR_4;

    if (VAR_2 != ((void*)0)) {
        VAR_3->data.attr = *VAR_2;
    } else {
        FUNC_1(VAR_1, &VAR_3->data.attr);
    }

    return VAR_3;
}
