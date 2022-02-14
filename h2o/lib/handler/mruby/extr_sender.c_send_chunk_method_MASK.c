
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int inflight; } ;
struct TYPE_10__ {scalar_t__ bytes_left; int final_sent; } ;
struct st_h2o_mruby_callback_sender_t {TYPE_5__* receiving; TYPE_4__ sending; TYPE_1__ super; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_11__ {scalar_t__ sender; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;
struct TYPE_14__ {int * base; } ;
struct TYPE_13__ {scalar_t__ bytes; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_7__ FUNC_1 (TYPE_5__**,scalar_t__) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*,TYPE_5__**,int ) ;
 int FUNC_4 (scalar_t__,char const*,scalar_t__) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,char const**,scalar_t__*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static mrb_value FUNC_10(mrb_state *VAR_2, mrb_value VAR_3)
{
    const char *VAR_4;
    mrb_int VAR_5;
    mrb_value VAR_6;


    FUNC_7(VAR_2, "so", &VAR_4, &VAR_5, &VAR_6);

    h2o_mruby_generator_t *VAR_7 = FUNC_2(VAR_2, VAR_6);

    {
        mrb_value VAR_8 = FUNC_0(VAR_2, VAR_7);
        if (!FUNC_8(VAR_8))
            FUNC_6(VAR_2, VAR_8);
    }


    if (VAR_5 != 0) {
        struct st_h2o_mruby_callback_sender_t *VAR_9 = (void *)VAR_7->sender;
        if (VAR_9->super.bytes_left != VAR_1 && VAR_9->super.bytes_left < VAR_5)
            VAR_5 = VAR_9->super.bytes_left;
        if (VAR_5 != 0) {
            if ((FUNC_1(&VAR_9->receiving, VAR_5)).base == ((void*)0)) {
                mrb_value VAR_10 = FUNC_5(VAR_2, VAR_0, "failed to allocate memory");
                FUNC_6(VAR_2, VAR_10);
            }
            FUNC_4(VAR_9->receiving->bytes + VAR_9->receiving->size, VAR_4, VAR_5);
            VAR_9->receiving->size += VAR_5;
            if (!VAR_9->super.final_sent && !VAR_9->sending.inflight)
                FUNC_3(VAR_7, &VAR_9->sending, &VAR_9->receiving, 0);
        }
    }

    return FUNC_9();
}
