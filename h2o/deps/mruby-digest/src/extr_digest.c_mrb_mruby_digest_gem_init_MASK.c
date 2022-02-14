
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_6__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct RClass*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 struct RClass* FUNC_5 (TYPE_1__*,struct RClass*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_7 (TYPE_1__*,char*) ;
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

void
FUNC_8(mrb_state *VAR_23)
{
  struct RClass *VAR_24, *VAR_25, *VAR_26;

  FUNC_4();

  VAR_25 = FUNC_7(VAR_23, "Digest");

  VAR_24 = FUNC_5(VAR_23, VAR_25, "Base", VAR_23->object_class);
  FUNC_6(VAR_23, VAR_24, "block_length", VAR_7, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "digest", VAR_8, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "digest!", VAR_9, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "digest_length", VAR_10, FUNC_1());

  FUNC_6(VAR_23, VAR_24, "hexdigest", VAR_11, FUNC_1());

  FUNC_6(VAR_23, VAR_24, "initialize", VAR_12, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "initialize_copy", VAR_13, FUNC_2(1));
  FUNC_6(VAR_23, VAR_24, "reset", VAR_14, FUNC_1());
  FUNC_6(VAR_23, VAR_24, "update", VAR_15, FUNC_2(1));
  VAR_26 = FUNC_5(VAR_23, VAR_25, "HMAC", VAR_23->object_class);
  FUNC_3(VAR_26, VAR_1);
  FUNC_6(VAR_23, VAR_26, "block_length", VAR_16, FUNC_1());
  FUNC_6(VAR_23, VAR_26, "digest", VAR_17, FUNC_1());
  FUNC_6(VAR_23, VAR_26, "digest_length", VAR_18, FUNC_1());
  FUNC_6(VAR_23, VAR_26, "hexdigest", VAR_19, FUNC_1());
  FUNC_6(VAR_23, VAR_26, "initialize", VAR_20, FUNC_2(2));
  FUNC_6(VAR_23, VAR_26, "initialize_copy", VAR_21, FUNC_2(1));
  FUNC_6(VAR_23, VAR_26, "update", VAR_22, FUNC_2(1));
}
