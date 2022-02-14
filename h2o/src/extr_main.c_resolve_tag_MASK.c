
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int _refcnt; } ;
typedef TYPE_1__ yoml_t ;
typedef int resolve_tag_arg_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static yoml_t *FUNC_3(const char *VAR_0, yoml_t *VAR_1, void *VAR_2)
{
    resolve_tag_arg_t *VAR_3 = (resolve_tag_arg_t *)VAR_2;

    if (FUNC_2(VAR_0, "!file") == 0) {
        return FUNC_1(VAR_1, VAR_3);
    }

    if (FUNC_2(VAR_0, "!env") == 0) {
        return FUNC_0(VAR_1, VAR_3);
    }


    ++VAR_1->_refcnt;
    return VAR_1;
}
