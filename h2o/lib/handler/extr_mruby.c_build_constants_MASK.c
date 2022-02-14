
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_19__ {int kernel_module; } ;
typedef TYPE_2__ mrb_state ;
typedef int mrb_int ;
struct TYPE_18__ {scalar_t__ len; char const* base; } ;
struct TYPE_20__ {TYPE_1__ buf; } ;
typedef TYPE_3__ h2o_token_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_21__ {char const* base; size_t len; } ;
typedef TYPE_4__ h2o_iovec_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_3__ const* VAR_28 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__ FUNC_3 (int *,char const*,scalar_t__) ;
 TYPE_3__* VAR_29 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,char*,int) ;
 int FUNC_8 (TYPE_2__*,char const*,size_t) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int,int ) ;
 int FUNC_11 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static mrb_value FUNC_18(mrb_state *VAR_30, const char *VAR_31, size_t VAR_32)
{
    mrb_value VAR_33 = FUNC_9(VAR_30, VAR_26);
    mrb_int VAR_34;

    int VAR_35 = FUNC_13(VAR_30);

    {
        h2o_mem_pool_t VAR_36;
        FUNC_5(&VAR_36);
        for (VAR_34 = 0; VAR_34 != VAR_0; ++VAR_34) {
            const h2o_token_t *VAR_37 = VAR_29 + VAR_34;
            if (VAR_37->buf.len == 0)
                continue;
            mrb_value VAR_38 = FUNC_8(VAR_30, VAR_37->buf.base, VAR_37->buf.len);
            FUNC_0(VAR_38);
            FUNC_10(VAR_30, VAR_33, VAR_34, VAR_38);
        }
        for (; VAR_34 != VAR_0 * 2; ++VAR_34) {
            const h2o_token_t *VAR_39 = VAR_29 + VAR_34 - VAR_0;
            mrb_value VAR_40 = FUNC_14();
            if (VAR_39 == VAR_28) {
                VAR_40 = FUNC_16(VAR_30, "CONTENT_TYPE");
            } else if (VAR_39->buf.len != 0) {
                h2o_iovec_t VAR_41 = FUNC_3(&VAR_36, VAR_39->buf.base, VAR_39->buf.len);
                VAR_40 = FUNC_8(VAR_30, VAR_41.base, VAR_41.len);
            }
            if (FUNC_17(VAR_40)) {
                FUNC_0(VAR_40);
                FUNC_10(VAR_30, VAR_33, VAR_34, VAR_40);
            }
        }
        FUNC_4(&VAR_36);
    }
    do { mrb_value VAR_42 = (FUNC_16(VAR_30, "REQUEST_METHOD")); FUNC_0(VAR_42); FUNC_10(VAR_30, VAR_33, VAR_18, VAR_42); } while (0);
    do { mrb_value VAR_43 = (FUNC_16(VAR_30, "SCRIPT_NAME")); FUNC_0(VAR_43); FUNC_10(VAR_30, VAR_33, VAR_19, VAR_43); } while (0);
    do { mrb_value VAR_44 = (FUNC_16(VAR_30, "PATH_INFO")); FUNC_0(VAR_44); FUNC_10(VAR_30, VAR_33, VAR_5, VAR_44); } while (0);
    do { mrb_value VAR_45 = (FUNC_16(VAR_30, "QUERY_STRING")); FUNC_0(VAR_45); FUNC_10(VAR_30, VAR_33, VAR_6, VAR_45); } while (0);
    do { mrb_value VAR_46 = (FUNC_16(VAR_30, "SERVER_NAME")); FUNC_0(VAR_46); FUNC_10(VAR_30, VAR_33, VAR_21, VAR_46); } while (0);
    do { mrb_value VAR_47 = (FUNC_16(VAR_30, "SERVER_ADDR")); FUNC_0(VAR_47); FUNC_10(VAR_30, VAR_33, VAR_20, VAR_47); } while (0);
    do { mrb_value VAR_48 = (FUNC_16(VAR_30, "SERVER_PORT")); FUNC_0(VAR_48); FUNC_10(VAR_30, VAR_33, VAR_22, VAR_48); } while (0);
    do { mrb_value VAR_49 = (FUNC_16(VAR_30, "SERVER_PROTOCOL")); FUNC_0(VAR_49); FUNC_10(VAR_30, VAR_33, VAR_23, VAR_49); } while (0);
    do { mrb_value VAR_50 = (FUNC_16(VAR_30, "CONTENT_LENGTH")); FUNC_0(VAR_50); FUNC_10(VAR_30, VAR_33, VAR_2, VAR_50); } while (0);
    do { mrb_value VAR_51 = (FUNC_16(VAR_30, "REMOTE_ADDR")); FUNC_0(VAR_51); FUNC_10(VAR_30, VAR_33, VAR_15, VAR_51); } while (0);
    do { mrb_value VAR_52 = (FUNC_16(VAR_30, "REMOTE_PORT")); FUNC_0(VAR_52); FUNC_10(VAR_30, VAR_33, VAR_16, VAR_52); } while (0);
    do { mrb_value VAR_53 = (FUNC_16(VAR_30, "REMOTE_USER")); FUNC_0(VAR_53); FUNC_10(VAR_30, VAR_33, VAR_17, VAR_53); } while (0);
    do { mrb_value VAR_54 = (FUNC_16(VAR_30, "rack.url_scheme")); FUNC_0(VAR_54); FUNC_10(VAR_30, VAR_33, VAR_14, VAR_54); } while (0);
    do { mrb_value VAR_55 = (FUNC_16(VAR_30, "rack.multithread")); FUNC_0(VAR_55); FUNC_10(VAR_30, VAR_33, VAR_12, VAR_55); } while (0);
    do { mrb_value VAR_56 = (FUNC_16(VAR_30, "rack.multiprocess")); FUNC_0(VAR_56); FUNC_10(VAR_30, VAR_33, VAR_11, VAR_56); } while (0);
    do { mrb_value VAR_57 = (FUNC_16(VAR_30, "rack.run_once")); FUNC_0(VAR_57); FUNC_10(VAR_30, VAR_33, VAR_13, VAR_57); } while (0);
    do { mrb_value VAR_58 = (FUNC_16(VAR_30, "rack.hijack?")); FUNC_0(VAR_58); FUNC_10(VAR_30, VAR_33, VAR_9, VAR_58); } while (0);
    do { mrb_value VAR_59 = (FUNC_16(VAR_30, "rack.input")); FUNC_0(VAR_59); FUNC_10(VAR_30, VAR_33, VAR_10, VAR_59); } while (0);
    do { mrb_value VAR_60 = (FUNC_16(VAR_30, "rack.errors")); FUNC_0(VAR_60); FUNC_10(VAR_30, VAR_33, VAR_8, VAR_60); } while (0);
    do { mrb_value VAR_61 = (FUNC_16(VAR_30, "rack.early_hints")); FUNC_0(VAR_61); FUNC_10(VAR_30, VAR_33, VAR_7, VAR_61); } while (0);
    do { mrb_value VAR_62 = (FUNC_16(VAR_30, "SERVER_SOFTWARE")); FUNC_0(VAR_62); FUNC_10(VAR_30, VAR_33, VAR_24, VAR_62); } while (0);
    do { mrb_value VAR_63 = (FUNC_16(VAR_30, "h2o.remaining_delegations")); FUNC_0(VAR_63); FUNC_10(VAR_30, VAR_33, VAR_3, VAR_63); } while (0);
    do { mrb_value VAR_64 = (FUNC_16(VAR_30, "h2o.remaining_reprocesses")); FUNC_0(VAR_64); FUNC_10(VAR_30, VAR_33, VAR_4, VAR_64); } while (0);
    do { mrb_value VAR_65 = (FUNC_8(VAR_30, VAR_31, VAR_32)); FUNC_0(VAR_65); FUNC_10(VAR_30, VAR_33, VAR_25, VAR_65); } while (0);




    FUNC_7(VAR_30, VAR_1, "(h2o)lib/handler/mruby/embedded/core.rb", 1);
    FUNC_6(VAR_30);

    FUNC_10(VAR_30, VAR_33, VAR_27,
                FUNC_11(VAR_30, FUNC_15(VAR_30->kernel_module), "_h2o_proc_each_to_array", 0));
    FUNC_6(VAR_30);

    FUNC_12(VAR_30, VAR_35);
    return VAR_33;
}
