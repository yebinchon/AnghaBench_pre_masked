
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct RHash {int flags; int ht; } ;
typedef int mrb_value ;
struct TYPE_11__ {int hash_class; } ;
typedef TYPE_1__ mrb_state ;
typedef int htable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,char*,int *) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (struct RHash*) ;
 int FUNC_13 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static mrb_value
FUNC_15(mrb_state *VAR_4, mrb_value VAR_5)
{
  mrb_value VAR_6;
  struct RHash* VAR_7;
  htable *VAR_8;
  mrb_value VAR_9, VAR_10;

  FUNC_5(VAR_4, "o", &VAR_6);
  if (FUNC_11(VAR_4, VAR_5, VAR_6)) return VAR_5;
  if ((FUNC_14(VAR_5) != FUNC_14(VAR_6)) || (FUNC_10(VAR_4, VAR_5) != FUNC_10(VAR_4, VAR_6))) {
      FUNC_13(VAR_4, VAR_0, "initialize_copy should take same class object");
  }

  VAR_8 = FUNC_3(VAR_5);
  VAR_7 = (struct RHash*)FUNC_9(VAR_4, VAR_3, VAR_4->hash_class);
  VAR_7->ht = FUNC_4(VAR_4, VAR_8);

  if (FUNC_0(VAR_5)) {
    VAR_7->flags |= VAR_1;
  }
  if (FUNC_1(VAR_5)) {
    VAR_7->flags |= VAR_2;
  }
  VAR_10 = FUNC_12(VAR_7);
  VAR_9 = FUNC_2(VAR_5);
  if (!FUNC_8(VAR_9)) {
      FUNC_7(VAR_4, VAR_10, FUNC_6(VAR_4, "ifnone"), VAR_9);
  }
  return VAR_10;
}
