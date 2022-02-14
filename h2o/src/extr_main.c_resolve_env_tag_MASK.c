
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * scalar; } ;
struct TYPE_7__ {scalar_t__ type; int _refcnt; TYPE_1__ data; int * tag; } ;
typedef TYPE_2__ yoml_t ;
typedef int resolve_tag_arg_t ;
struct TYPE_8__ {int * base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 TYPE_5__ FUNC_3 (int *,char const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static yoml_t *FUNC_4(yoml_t *VAR_3, resolve_tag_arg_t *VAR_4)
{
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_2, "value of !env must be a scalar");
        return ((void*)0);
    }

    const char *VAR_5;
    if ((VAR_5 = FUNC_2(VAR_3->data.scalar)) == ((void*)0))
        VAR_5 = "";



    FUNC_1(VAR_3->data.scalar);
    FUNC_1(VAR_3->tag);
    VAR_3->tag = ((void*)0);

    VAR_3->data.scalar = FUNC_3(((void*)0), VAR_5, VAR_0).base;
    ++VAR_3->_refcnt;

    return VAR_3;
}
