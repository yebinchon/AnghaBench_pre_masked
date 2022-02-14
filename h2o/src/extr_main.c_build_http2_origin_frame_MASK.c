
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char* scalar; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
typedef int uint16_t ;
struct TYPE_13__ {char* base; int len; } ;
typedef TYPE_3__ h2o_iovec_t ;
typedef int h2o_configurator_command_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__ FUNC_1 (int *,TYPE_3__*,size_t) ;
 int FUNC_2 (int *,TYPE_2__*,char*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (size_t) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static h2o_iovec_t *FUNC_7(h2o_configurator_command_t *VAR_1, yoml_t **VAR_2, size_t VAR_3)
{
    size_t VAR_4;
    h2o_iovec_t *VAR_5 = FUNC_3(sizeof(*VAR_5));
    uint16_t VAR_6[VAR_3];
    h2o_iovec_t VAR_7[VAR_3 * 2];
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        yoml_t *VAR_8 = VAR_2[VAR_4];
        if (VAR_8->type != VAR_0) {
            FUNC_2(VAR_1, VAR_8, "element of a sequence passed to http2-origin-frame must be a scalar");
            FUNC_0(VAR_5);
            return ((void*)0);
        }
        size_t VAR_9 = FUNC_6(VAR_2[VAR_4]->data.scalar);
        VAR_6[VAR_4] = FUNC_5(VAR_9);
        VAR_7[VAR_4 * 2].base = (char *)&VAR_6[VAR_4];
        VAR_7[VAR_4 * 2].len = 2;
        VAR_7[VAR_4 * 2 + 1].base = VAR_2[VAR_4]->data.scalar;
        VAR_7[VAR_4 * 2 + 1].len = VAR_9;
        FUNC_4(VAR_7[VAR_4 * 2 + 1].base, VAR_9);
    }
    *VAR_5 = FUNC_1(((void*)0), VAR_7, VAR_3 * 2);
    return VAR_5;
}
