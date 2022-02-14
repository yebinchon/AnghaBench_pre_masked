
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {size_t size; TYPE_6__* elements; } ;
struct TYPE_16__ {int scalar; TYPE_1__ mapping; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
typedef int h2o_pathconf_t ;
struct TYPE_18__ {TYPE_10__* hostconf; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_19__ {int value; TYPE_3__* key; } ;
struct TYPE_14__ {int fallback_path; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 int * FUNC_2 (TYPE_10__*,int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_6__*,size_t,int,int (*) (void const*,void const*)) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_7(h2o_configurator_command_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    size_t VAR_5;


    for (VAR_5 = 0; VAR_5 != VAR_4->data.mapping.size; ++VAR_5) {
        yoml_t *VAR_6 = VAR_4->data.mapping.elements[VAR_5].key;
        if (VAR_6->type != VAR_0) {
            FUNC_3(VAR_2, VAR_6, "key (representing the virtual path) must be a string");
            return -1;
        }
        if (FUNC_5(VAR_6->data.scalar) == 0) {
            FUNC_3(VAR_2, VAR_6, "key (representing the virtual path) must not be an empty string");
            return -1;
        }
    }
    FUNC_4(VAR_4->data.mapping.elements, VAR_4->data.mapping.size, sizeof(VAR_4->data.mapping.elements[0]),
          (int (*)(const void *, const void *))VAR_1);

    for (VAR_5 = 0; VAR_5 != VAR_4->data.mapping.size; ++VAR_5) {
        yoml_t *VAR_7 = VAR_4->data.mapping.elements[VAR_5].key, *VAR_8;
        if ((VAR_8 = FUNC_1(VAR_2, VAR_4->data.mapping.elements[VAR_5].value)) == ((void*)0))
            return -1;
        h2o_pathconf_t *VAR_9 = FUNC_2(VAR_3->hostconf, VAR_7->data.scalar, 0);
        int VAR_10 = FUNC_0(VAR_3, VAR_9, VAR_8);
        FUNC_6(VAR_8, ((void*)0));
        if (VAR_10 != 0)
            return VAR_10;
    }


    return FUNC_0(VAR_3, &VAR_3->hostconf->fallback_path, ((void*)0));
}
