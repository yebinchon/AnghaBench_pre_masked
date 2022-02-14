
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (double) ;
 int FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 double FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ) ;

int
FUNC_22 (void)
{
  FUNC_14 (VAR_1);

  jerry_value_t VAR_2 = FUNC_3 ();

  jerry_value_t VAR_3 = FUNC_4 ((const jerry_char_t *) "foo");
  jerry_value_t VAR_4 = FUNC_4 ((const jerry_char_t *) "non_hidden_prop");
  jerry_value_t VAR_5;

  if (FUNC_15 (VAR_0))
  {
    jerry_value_t VAR_6 = FUNC_4 ((const jerry_char_t *) "bar");
    VAR_5 = FUNC_5 (VAR_6);
    FUNC_16 (VAR_6);
  }
  else
  {
    VAR_5 = FUNC_4 ((const jerry_char_t *) "non_hidden_string_prop");
  }

  jerry_value_t VAR_7 = FUNC_4 ((const jerry_char_t *) "hidden_foo");
  jerry_value_t VAR_8 = FUNC_4 ((const jerry_char_t *) "hidden_prop");
  jerry_value_t VAR_9;

  if (FUNC_15 (VAR_0))
  {
    jerry_value_t VAR_10 = FUNC_4 ((const jerry_char_t *) "bar");
    VAR_9 = FUNC_5 (VAR_10);
    FUNC_16 (VAR_10);
  }
  else
  {
    VAR_9 = FUNC_4 ((const jerry_char_t *) "hidden_string_prop");
  }

  jerry_value_t VAR_11 = FUNC_2 (5.5);
  jerry_value_t VAR_12 = FUNC_2 (6.5);
  jerry_value_t VAR_13 = FUNC_2 (7.5);

  jerry_value_t VAR_14 = FUNC_2 (8.5);
  jerry_value_t VAR_15 = FUNC_2 (9.5);
  jerry_value_t VAR_16 = FUNC_2 (10.5);


  bool VAR_17 = FUNC_18 (VAR_2, VAR_3, VAR_11);
  bool VAR_18 = FUNC_18 (VAR_2, VAR_4, VAR_12);
  bool VAR_19 = FUNC_18 (VAR_2, VAR_5, VAR_13);

  FUNC_0 (VAR_17);
  FUNC_0 (VAR_18);
  FUNC_0 (VAR_19);


  bool VAR_20 = FUNC_17 (VAR_2, VAR_7, VAR_14);
  bool VAR_21 = FUNC_17 (VAR_2, VAR_8, VAR_15);
  bool VAR_22 = FUNC_17 (VAR_2, VAR_9, VAR_16);

  FUNC_0 (VAR_20);
  FUNC_0 (VAR_21);
  FUNC_0 (VAR_22);


  jerry_value_t VAR_23 = FUNC_13 (VAR_2, VAR_3);
  jerry_value_t VAR_24 = FUNC_13 (VAR_2, VAR_4);
  jerry_value_t VAR_25 = FUNC_13 (VAR_2, VAR_5);
  jerry_value_t VAR_26 = FUNC_13 (VAR_2, VAR_7);
  jerry_value_t VAR_27 = FUNC_13 (VAR_2, VAR_8);
  jerry_value_t VAR_28 = FUNC_13 (VAR_2, VAR_9);

  FUNC_0 (FUNC_19 (VAR_23) && FUNC_8 (VAR_23));
  FUNC_0 (FUNC_19 (VAR_24) && FUNC_8 (VAR_24));
  FUNC_0 (FUNC_19 (VAR_25) && FUNC_8 (VAR_25));
  FUNC_0 (FUNC_19 (VAR_26) && !FUNC_8 (VAR_26));
  FUNC_0 (FUNC_19 (VAR_27) && !FUNC_8 (VAR_27));
  FUNC_0 (FUNC_19 (VAR_28) && !FUNC_8 (VAR_28));

  FUNC_16 (VAR_23);
  FUNC_16 (VAR_24);
  FUNC_16 (VAR_25);
  FUNC_16 (VAR_26);
  FUNC_16 (VAR_27);
  FUNC_16 (VAR_28);


  bool VAR_29 = FUNC_12 (VAR_2, VAR_3);
  bool VAR_30 = FUNC_12 (VAR_2, VAR_4);
  bool VAR_31 = FUNC_12 (VAR_2, VAR_5);
  bool VAR_32 = FUNC_12 (VAR_2, VAR_7);
  bool VAR_33 = FUNC_12 (VAR_2, VAR_8);
  bool VAR_34 = FUNC_12 (VAR_2, VAR_9);

  FUNC_0 (!VAR_29);
  FUNC_0 (!VAR_30);
  FUNC_0 (!VAR_31);
  FUNC_0 (VAR_32);
  FUNC_0 (VAR_33);
  FUNC_0 (VAR_34);


  jerry_value_t VAR_35 = FUNC_11 (VAR_2, VAR_3);
  jerry_value_t VAR_36 = FUNC_11 (VAR_2, VAR_4);
  jerry_value_t VAR_37 = FUNC_11 (VAR_2, VAR_5);
  jerry_value_t VAR_38 = FUNC_11 (VAR_2, VAR_7);
  jerry_value_t VAR_39 = FUNC_11 (VAR_2, VAR_8);
  jerry_value_t VAR_40 = FUNC_11 (VAR_2, VAR_9);

  FUNC_0 (FUNC_20 (VAR_35) && FUNC_10 (VAR_35) == 5.5);
  FUNC_0 (FUNC_20 (VAR_36) && FUNC_10 (VAR_36) == 6.5);
  FUNC_0 (FUNC_20 (VAR_37) && FUNC_10 (VAR_37) == 7.5);
  FUNC_0 (FUNC_21 (VAR_38));
  FUNC_0 (FUNC_21 (VAR_39));
  FUNC_0 (FUNC_21 (VAR_40));

  FUNC_16 (VAR_35);
  FUNC_16 (VAR_36);
  FUNC_16 (VAR_37);
  FUNC_16 (VAR_38);
  FUNC_16 (VAR_39);
  FUNC_16 (VAR_40);


  jerry_value_t VAR_41 = FUNC_9 (VAR_2, VAR_3);
  jerry_value_t VAR_42 = FUNC_9 (VAR_2, VAR_4);
  jerry_value_t VAR_43 = FUNC_9 (VAR_2, VAR_5);
  jerry_value_t VAR_44 = FUNC_9 (VAR_2, VAR_7);
  jerry_value_t VAR_45 = FUNC_9 (VAR_2, VAR_8);
  jerry_value_t VAR_46 = FUNC_9 (VAR_2, VAR_9);

  FUNC_0 (FUNC_21 (VAR_41));
  FUNC_0 (FUNC_21 (VAR_42));
  FUNC_0 (FUNC_21 (VAR_43));
  FUNC_0 (FUNC_20 (VAR_44) && FUNC_10 (VAR_44) == 8.5);
  FUNC_0 (FUNC_20 (VAR_45) && FUNC_10 (VAR_45) == 9.5);
  FUNC_0 (FUNC_20 (VAR_46) && FUNC_10 (VAR_46) == 10.5);

  FUNC_16 (VAR_41);
  FUNC_16 (VAR_42);
  FUNC_16 (VAR_43);
  FUNC_16 (VAR_44);
  FUNC_16 (VAR_45);
  FUNC_16 (VAR_46);


  bool VAR_47 = FUNC_7 (VAR_2, VAR_3);
  bool VAR_48 = FUNC_7 (VAR_2, VAR_4);
  bool VAR_49 = FUNC_7 (VAR_2, VAR_5);
  bool VAR_50 = FUNC_7 (VAR_2, VAR_7);
  bool VAR_51 = FUNC_7 (VAR_2, VAR_8);
  bool VAR_52 = FUNC_7 (VAR_2, VAR_9);

  FUNC_0 (VAR_47);
  FUNC_0 (VAR_48);
  FUNC_0 (VAR_49);
  FUNC_0 (VAR_50);
  FUNC_0 (VAR_51);
  FUNC_0 (VAR_52);

  jerry_value_t VAR_53 = FUNC_13 (VAR_2, VAR_3);
  jerry_value_t VAR_54 = FUNC_13 (VAR_2, VAR_4);
  jerry_value_t VAR_55 = FUNC_13 (VAR_2, VAR_5);
  bool VAR_56 = FUNC_12 (VAR_2, VAR_7);
  bool VAR_57 = FUNC_12 (VAR_2, VAR_8);
  bool VAR_58 = FUNC_12 (VAR_2, VAR_9);

  FUNC_0 (FUNC_19 (VAR_53)
               && !FUNC_8 (VAR_53));
  FUNC_0 (FUNC_19 (VAR_54)
               && !FUNC_8 (VAR_54));
  FUNC_0 (FUNC_19 (VAR_55)
               && !FUNC_8 (VAR_55));
  FUNC_0 (VAR_56);
  FUNC_0 (VAR_57);
  FUNC_0 (VAR_58);

  FUNC_16 (VAR_53);
  FUNC_16 (VAR_54);
  FUNC_16 (VAR_55);


  bool VAR_59 = FUNC_6 (VAR_2, VAR_7);
  bool VAR_60 = FUNC_6 (VAR_2, VAR_8);
  bool VAR_61 = FUNC_6 (VAR_2, VAR_9);

  FUNC_0 (VAR_59);
  FUNC_0 (VAR_60);
  FUNC_0 (VAR_61);

  bool VAR_62 = FUNC_12 (VAR_2, VAR_7);
  bool VAR_63 = FUNC_12 (VAR_2, VAR_8);
  bool VAR_64 = FUNC_12 (VAR_2, VAR_9);

  FUNC_0 (!VAR_62);
  FUNC_0 (!VAR_63);
  FUNC_0 (!VAR_64);


  FUNC_16 (VAR_13);
  FUNC_16 (VAR_12);
  FUNC_16 (VAR_11);

  FUNC_16 (VAR_5);
  FUNC_16 (VAR_4);
  FUNC_16 (VAR_3);

  FUNC_16 (VAR_16);
  FUNC_16 (VAR_15);
  FUNC_16 (VAR_14);

  FUNC_16 (VAR_9);
  FUNC_16 (VAR_8);
  FUNC_16 (VAR_7);

  FUNC_16 (VAR_2);

  FUNC_1 ();

  return 0;
}
