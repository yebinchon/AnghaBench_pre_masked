
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct condition_basic {int dummy; } ;
struct TYPE_11__ {int flags; int type; int value; struct TYPE_11__* left; struct TYPE_11__* right; } ;
typedef TYPE_1__ query_t ;
typedef TYPE_2__* condition_t ;
typedef void* condition_func_t ;
struct TYPE_12__ {struct TYPE_12__* true_branch; struct TYPE_12__* false_branch; void* eval; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
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
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_2__* FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 TYPE_2__* FUNC_8 (int) ;

condition_t FUNC_9 (query_t *VAR_86, condition_t VAR_87, condition_t VAR_88, int VAR_89) {
  if (VAR_86->flags & 1) {
    condition_t VAR_90 = VAR_87;
    VAR_87 = VAR_88;
    VAR_88 = VAR_90;
  }
  if (VAR_86->flags & 2) {
    condition_func_t VAR_91, VAR_92;
    switch (VAR_86->type) {
      FUNC_5 (VAR_39);
      FUNC_5 (VAR_58);
      FUNC_5 (VAR_0);
      FUNC_5 (VAR_18);
      FUNC_5 (VAR_78);
    default:
      FUNC_6 (0);
    }
    condition_t VAR_93 = FUNC_8 (sizeof (struct condition_basic));
    condition_t VAR_94 = FUNC_8 (sizeof (struct condition_basic));
    VAR_93->eval = VAR_91;
    VAR_94->eval = VAR_92;
    VAR_93->false_branch = VAR_94->false_branch = VAR_88;
    VAR_93->true_branch = VAR_94->true_branch = FUNC_9 (VAR_86->left, VAR_87, VAR_94, VAR_89);
    return VAR_93;
  }

  switch (VAR_86->type) {
  case 135:
    return FUNC_9 (VAR_86->left, FUNC_9 (VAR_86->right, VAR_87, VAR_88, VAR_89), VAR_88, VAR_89);
  case 129:
    return FUNC_9 (VAR_86->left, VAR_87, FUNC_9 (VAR_86->right, VAR_87, VAR_88, VAR_89), VAR_89);
  case 130:
    return FUNC_9 (VAR_86->left, VAR_88, VAR_87, VAR_89);
  case 132:
    return VAR_88;
  case 128:
    return VAR_87;
  case 131:
    return FUNC_7 (VAR_87, VAR_88, VAR_89);
  case 134:
  case 133:
    VAR_86->value = VAR_86->type - 134;
    FUNC_0 (VAR_12);

    FUNC_1 (VAR_69);
    FUNC_1 (VAR_50);
    FUNC_0 (VAR_20);
    FUNC_0 (VAR_17);
    FUNC_1 (VAR_11);
    FUNC_1 (VAR_13);
    FUNC_1 (VAR_15);
    FUNC_1 (VAR_9);
    FUNC_1 (VAR_41);
    FUNC_0 (VAR_65);
    FUNC_0 (VAR_79);
    FUNC_0 (VAR_63);
    FUNC_1 (VAR_14);
    FUNC_0 (VAR_70);
    FUNC_1 (VAR_47);
    FUNC_0 (VAR_80);
    FUNC_0 (VAR_10);
    FUNC_0 (VAR_66);
    FUNC_0 (VAR_51);
    FUNC_1 (VAR_48);
    FUNC_1 (VAR_36);
    FUNC_0 (VAR_42);
    FUNC_1 (VAR_21);
    FUNC_1 (VAR_28);
    FUNC_1 (VAR_29);
    FUNC_1 (VAR_30);
    FUNC_1 (VAR_31);
    FUNC_1 (VAR_32);
    FUNC_1 (VAR_33);
    FUNC_1 (VAR_34);
    FUNC_1 (VAR_35);
    FUNC_1 (VAR_22);
    FUNC_1 (VAR_23);
    FUNC_1 (VAR_24);
    FUNC_1 (VAR_25);
    FUNC_1 (VAR_26);
    FUNC_1 (VAR_27);
    FUNC_1 (VAR_81);
    FUNC_0 (VAR_59);
    FUNC_0 (VAR_45);
    FUNC_0 (VAR_44);
    FUNC_0 (VAR_54);
    FUNC_4 (VAR_60);
    FUNC_3 (VAR_52);
    FUNC_2 (VAR_61);
    FUNC_3 (VAR_71);
    FUNC_3 (VAR_49);
    FUNC_3 (VAR_68);
    FUNC_1 (VAR_62);
    FUNC_0 (VAR_67);
    FUNC_0 (VAR_46);
    FUNC_0 (VAR_85);
    FUNC_0 (VAR_64);

    FUNC_0 (VAR_83);
    FUNC_0 (VAR_82);
    FUNC_0 (VAR_84);
    FUNC_0 (VAR_40);
    FUNC_0 (VAR_16);
    FUNC_1 (VAR_43);
    FUNC_0 (VAR_37);
    FUNC_0 (VAR_38);

    FUNC_0 (VAR_57);
    FUNC_1 (VAR_56);
    FUNC_1 (VAR_55);

    FUNC_0 (VAR_2);
    FUNC_0 (VAR_1);
    FUNC_0 (VAR_3);
    FUNC_0 (VAR_6);
    FUNC_0 (VAR_7);
    FUNC_0 (VAR_8);
    FUNC_3 (VAR_4);
    FUNC_3 (VAR_5);

    FUNC_3 (VAR_53);
    FUNC_3 (VAR_19);

    FUNC_0 (VAR_74);
    FUNC_0 (VAR_72);
    FUNC_0 (VAR_76);
    FUNC_1 (VAR_75);
    FUNC_0 (VAR_73);
    FUNC_3 (VAR_77);

  default:
    FUNC_6 (0);
  }
}
