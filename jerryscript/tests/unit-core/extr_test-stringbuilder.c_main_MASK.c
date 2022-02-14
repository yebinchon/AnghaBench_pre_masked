
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_data ;
typedef char lit_utf8_byte_t ;
typedef int expected_data ;
typedef int ecma_stringbuilder_t ;
typedef int ecma_string_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_8 ;
 int * FUNC_2 (int *,char const*,int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (int ) ;
 int FUNC_7 () ;
 int * FUNC_8 (int) ;
 int * FUNC_9 (char const*,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,char const*,int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 () ;

int
FUNC_20 (void)
{
  FUNC_1 ();

  FUNC_19 ();
  FUNC_7 ();

  {
    static const lit_utf8_byte_t VAR_9[] = "A simple string";

    ecma_stringbuilder_t VAR_10 = FUNC_14 ();
    FUNC_13 (&VAR_10, VAR_9, sizeof (VAR_9) - 1);
    ecma_string_t *VAR_11 = FUNC_17 (&VAR_10);

    ecma_string_t *VAR_12 = FUNC_9 (VAR_9, sizeof (VAR_9) - 1);
    FUNC_0 (FUNC_3 (VAR_11, VAR_12));
    FUNC_4 (VAR_11);
    FUNC_4 (VAR_12);
  }

  {
    ecma_stringbuilder_t VAR_13 = FUNC_14 ();
    FUNC_12 (&VAR_13, VAR_6);
    ecma_string_t *VAR_14 = FUNC_17 (&VAR_13);

    ecma_string_t *VAR_15 = FUNC_6 (VAR_6);
    FUNC_0 (FUNC_3 (VAR_14, VAR_15));
  }

  {
    static const lit_utf8_byte_t VAR_16[] = "a";

    ecma_stringbuilder_t VAR_17 = FUNC_14 ();
    FUNC_11 (&VAR_17, VAR_3);
    ecma_string_t *VAR_18 = FUNC_17 (&VAR_17);

    ecma_string_t *VAR_19 = FUNC_9 (VAR_16, sizeof (VAR_16) - 1);
    FUNC_0 (FUNC_3 (VAR_18, VAR_19));
    FUNC_4 (VAR_18);
    FUNC_4 (VAR_19);
  }

  {
    static const lit_utf8_byte_t VAR_20[] = "A simple string";
    ecma_string_t *VAR_21 = FUNC_9 (VAR_20, sizeof (VAR_20) - 1);

    ecma_stringbuilder_t VAR_22 = FUNC_14 ();
    FUNC_10 (&VAR_22, VAR_21);
    ecma_string_t *VAR_23 = FUNC_17 (&VAR_22);

    FUNC_0 (FUNC_3 (VAR_23, VAR_21));
    FUNC_4 (VAR_23);
    FUNC_4 (VAR_21);
  }

  {
    ecma_string_t *VAR_24 = FUNC_6 (VAR_7);

    ecma_stringbuilder_t VAR_25 = FUNC_14 ();
    ecma_string_t *VAR_26 = FUNC_17 (&VAR_25);

    FUNC_0 (FUNC_3 (VAR_26, VAR_24));
  }

  {
    static const lit_utf8_byte_t VAR_27[] = "abc";

    ecma_stringbuilder_t VAR_28 = FUNC_14 ();
    FUNC_11 (&VAR_28, VAR_3);
    FUNC_11 (&VAR_28, VAR_4);
    FUNC_11 (&VAR_28, VAR_5);
    ecma_string_t *VAR_29 = FUNC_17 (&VAR_28);

    ecma_string_t *VAR_30 = FUNC_9 (VAR_27, sizeof (VAR_27) - 1);
    FUNC_0 (FUNC_3 (VAR_29, VAR_30));
    FUNC_4 (VAR_29);
    FUNC_4 (VAR_30);
  }

  {
    ecma_stringbuilder_t VAR_31 = FUNC_14 ();
    FUNC_11 (&VAR_31, VAR_0);
    FUNC_11 (&VAR_31, VAR_1);
    FUNC_11 (&VAR_31, VAR_2);
    ecma_string_t *VAR_32 = FUNC_17 (&VAR_31);

    ecma_string_t *VAR_33 = FUNC_8 (123);
    FUNC_0 (FUNC_3 (VAR_32, VAR_33));
    FUNC_4 (VAR_32);
    FUNC_4 (VAR_33);
  }

  {
    static const lit_utf8_byte_t VAR_34[] = "abc";
    ecma_string_t *VAR_35 = FUNC_8 (234);

    ecma_stringbuilder_t VAR_36 = FUNC_14 ();
    FUNC_11 (&VAR_36, VAR_0);
    FUNC_13 (&VAR_36, VAR_34, sizeof (VAR_34) - 1);
    FUNC_10 (&VAR_36, VAR_35);
    FUNC_12 (&VAR_36, VAR_6);
    ecma_string_t *VAR_37 = FUNC_17 (&VAR_36);

    static const lit_utf8_byte_t VAR_38[] = "1abc234string";
    ecma_string_t *VAR_39 = FUNC_9 (VAR_38, sizeof (VAR_38) - 1);
    FUNC_0 (FUNC_3 (VAR_37, VAR_39));
    FUNC_4 (VAR_37);
    FUNC_4 (VAR_39);
  }

  {
    static const lit_utf8_byte_t VAR_40[] = "abc";
    ecma_string_t *VAR_41 = FUNC_8 (234);

    ecma_stringbuilder_t VAR_42 = FUNC_14 ();
    FUNC_11 (&VAR_42, VAR_0);
    FUNC_13 (&VAR_42, VAR_40, sizeof (VAR_40) - 1);
    FUNC_10 (&VAR_42, VAR_41);
    FUNC_12 (&VAR_42, VAR_6);

    FUNC_16 (&VAR_42);
  }

  {
    static const lit_utf8_byte_t VAR_43[] = "abcdefghijklmnop";
    const size_t VAR_44 = VAR_8 / (sizeof (VAR_43) - 1) + 1;

    ecma_stringbuilder_t VAR_45 = FUNC_14 ();
    for (size_t VAR_46 = 0; VAR_46 < VAR_44; VAR_46++)
    {
      FUNC_13 (&VAR_45, VAR_43, sizeof (VAR_43) - 1);
    }
    ecma_string_t *VAR_47 = FUNC_17 (&VAR_45);


    ecma_string_t *VAR_48 = FUNC_6 (VAR_7);
    for (size_t VAR_49 = 0; VAR_49 < VAR_44; VAR_49++)
    {
      VAR_48 = FUNC_2 (VAR_48,
                                                VAR_43,
                                                sizeof (VAR_43) - 1,
                                                sizeof (VAR_43) - 1);
    }

    FUNC_0 (FUNC_3 (VAR_47, VAR_48));
    FUNC_4 (VAR_47);
    FUNC_4 (VAR_48);
  }

  {
    static const lit_utf8_byte_t VAR_50[] = "abc";
    ecma_string_t *VAR_51 = FUNC_8 (234);

    ecma_stringbuilder_t VAR_52 = FUNC_14 ();
    FUNC_11 (&VAR_52, VAR_0);
    FUNC_13 (&VAR_52, VAR_50, sizeof (VAR_50) - 1);

    ecma_string_t *VAR_53 = FUNC_9 (VAR_50, sizeof (VAR_50) - 1);

    FUNC_10 (&VAR_52, VAR_51);
    FUNC_12 (&VAR_52, VAR_6);
    ecma_string_t *VAR_54 = FUNC_17 (&VAR_52);

    static const lit_utf8_byte_t VAR_55[] = "1abc234string";
    ecma_string_t *VAR_56 = FUNC_9 (VAR_55, sizeof (VAR_55) - 1);
    FUNC_0 (FUNC_3 (VAR_54, VAR_56));
    FUNC_4 (VAR_54);
    FUNC_4 (VAR_56);
    FUNC_4 (VAR_53);
  }

  {
    static const lit_utf8_byte_t VAR_57[] = "abc";
    ecma_string_t *VAR_58 = FUNC_8 (234);

    ecma_stringbuilder_t VAR_59 = FUNC_15 (VAR_58);
    FUNC_13 (&VAR_59, VAR_57, sizeof (VAR_57) - 1);
    FUNC_12 (&VAR_59, VAR_6);
    ecma_string_t *VAR_60 = FUNC_17 (&VAR_59);

    static const lit_utf8_byte_t VAR_61[] = "234abcstring";
    ecma_string_t *VAR_62 = FUNC_9 (VAR_61, sizeof (VAR_61) - 1);
    FUNC_0 (FUNC_3 (VAR_60, VAR_62));
    FUNC_4 (VAR_60);
    FUNC_4 (VAR_62);
  }

  {
    ecma_stringbuilder_t VAR_63 = FUNC_14 ();
    ecma_string_t *VAR_64 = FUNC_17 (&VAR_63);

    ecma_string_t *VAR_65 = FUNC_6 (VAR_7);
    FUNC_0 (FUNC_3 (VAR_64, VAR_65));
    FUNC_4 (VAR_64);
    FUNC_4 (VAR_65);
  }

  {
    ecma_string_t *VAR_66 = FUNC_6 (VAR_7);
    ecma_stringbuilder_t VAR_67 = FUNC_15 (VAR_66);
    ecma_string_t *VAR_68 = FUNC_17 (&VAR_67);

    FUNC_0 (FUNC_3 (VAR_68, VAR_66));
    FUNC_4 (VAR_68);
    FUNC_4 (VAR_66);
  }

  {
    ecma_string_t *VAR_69 = FUNC_6 (VAR_6);
    ecma_stringbuilder_t VAR_70 = FUNC_15 (VAR_69);
    ecma_string_t *VAR_71 = FUNC_17 (&VAR_70);

    FUNC_0 (FUNC_3 (VAR_71, VAR_69));
    FUNC_4 (VAR_71);
    FUNC_4 (VAR_69);
  }

  FUNC_5 ();
  FUNC_18 ();

  return 0;
}
