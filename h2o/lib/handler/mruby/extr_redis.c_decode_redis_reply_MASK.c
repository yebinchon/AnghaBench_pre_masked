
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; size_t elements; int len; int str; int integer; struct TYPE_3__** element; } ;
typedef TYPE_1__ redisReply ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int ,size_t,int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int *,int ,char*,int,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static mrb_value FUNC_9(mrb_state *VAR_0, redisReply *VAR_1, mrb_value VAR_2)
{
    mrb_value VAR_3;

    switch (VAR_1->type) {
    case 128:
    case 129:
        VAR_3 = FUNC_8(VAR_0, VAR_1->str, VAR_1->len);
        break;
    case 133:
        VAR_3 = FUNC_2(VAR_0, (mrb_int)VAR_1->elements);
        mrb_int VAR_4;
        for (VAR_4 = 0; VAR_4 != VAR_1->elements; ++VAR_4)
            FUNC_3(VAR_0, VAR_3, VAR_4, FUNC_9(VAR_0, VAR_1->element[VAR_4], VAR_2));
        break;
    case 131:
        VAR_3 = FUNC_4((mrb_int)VAR_1->integer);
        break;
    case 130:
        VAR_3 = FUNC_6();
        break;
    case 132: {
        mrb_value VAR_5 = FUNC_7(FUNC_1(VAR_0, "CommandError"));
        VAR_3 = FUNC_5(VAR_0, VAR_5, "new", 2, FUNC_8(VAR_0, VAR_1->str, VAR_1->len), VAR_2);
    } break;
    default:
        FUNC_0(!"FIXME");
    }

    return VAR_3;
}
