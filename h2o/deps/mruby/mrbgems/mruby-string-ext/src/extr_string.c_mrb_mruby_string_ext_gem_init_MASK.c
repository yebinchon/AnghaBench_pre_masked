
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {struct RClass* fixnum_class; struct RClass* string_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int) ;
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
 int VAR_28 ;
 int VAR_29 ;

void
FUNC_6(mrb_state* VAR_30)
{
  struct RClass * VAR_31 = VAR_30->string_class;

  FUNC_5(VAR_30, VAR_31, "dump", VAR_11, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "getbyte", VAR_13, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "setbyte", VAR_18, FUNC_2(2));
  FUNC_5(VAR_30, VAR_31, "byteslice", VAR_1, FUNC_2(1)|FUNC_1(1));
  FUNC_5(VAR_30, VAR_31, "swapcase!", VAR_25, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "swapcase", VAR_24, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "concat", VAR_3, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "<<", VAR_3, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "count", VAR_4, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "tr", VAR_26, FUNC_2(2));
  FUNC_5(VAR_30, VAR_31, "tr!", VAR_27, FUNC_2(2));
  FUNC_5(VAR_30, VAR_31, "tr_s", VAR_28, FUNC_2(2));
  FUNC_5(VAR_30, VAR_31, "tr_s!", VAR_29, FUNC_2(2));
  FUNC_5(VAR_30, VAR_31, "squeeze", VAR_19, FUNC_1(1));
  FUNC_5(VAR_30, VAR_31, "squeeze!", VAR_20, FUNC_1(1));
  FUNC_5(VAR_30, VAR_31, "delete", VAR_9, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "delete!", VAR_10, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "start_with?", VAR_21, FUNC_3());
  FUNC_5(VAR_30, VAR_31, "end_with?", VAR_12, FUNC_3());
  FUNC_5(VAR_30, VAR_31, "hex", VAR_14, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "oct", VAR_16, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "chr", VAR_2, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "succ", VAR_22, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "succ!", VAR_23, FUNC_0());
  FUNC_4(VAR_30, VAR_31, "next", "succ");
  FUNC_4(VAR_30, VAR_31, "next!", "succ!");
  FUNC_5(VAR_30, VAR_31, "ord", VAR_17, FUNC_0());
  FUNC_5(VAR_30, VAR_31, "delete_prefix!", VAR_6, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "delete_prefix", VAR_5, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "delete_suffix!", VAR_8, FUNC_2(1));
  FUNC_5(VAR_30, VAR_31, "delete_suffix", VAR_7, FUNC_2(1));

  FUNC_5(VAR_30, VAR_31, "__lines", VAR_15, FUNC_0());
  FUNC_5(VAR_30, VAR_30->fixnum_class, "chr", VAR_0, FUNC_0());
}
