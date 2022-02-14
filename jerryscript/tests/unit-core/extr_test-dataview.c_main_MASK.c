
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set_src ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;
typedef char jerry_char_t ;
typedef int get_src_little_endian ;
typedef int get_src ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,int,int ) ;
 int FUNC_8 (int ,int*,int*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

int
FUNC_21 (void)
{
  if (!FUNC_14 (VAR_3))
  {
    FUNC_15 (VAR_6, "DataView support is disabled!\n");
    return 0;
  }


  FUNC_0 (FUNC_14 (VAR_4));

  FUNC_13 (VAR_5);


  jerry_value_t VAR_8 = FUNC_3 (16);
  jerry_value_t VAR_9 = FUNC_4 (VAR_8, 0, 16);
  FUNC_0 (!FUNC_19 (VAR_9));
  FUNC_0 (FUNC_18 (VAR_9));

  jerry_length_t VAR_10 = 0;
  jerry_length_t VAR_11 = 0;;
  jerry_value_t VAR_12 = FUNC_8 (VAR_9, &VAR_10, &VAR_11);
  FUNC_0 (FUNC_1 (VAR_0, VAR_12, VAR_8));
  FUNC_0 (VAR_10 == 0);
  FUNC_0 (VAR_11 == 16);
  FUNC_16 (VAR_12);

  jerry_value_t VAR_13 = FUNC_4 (VAR_8, 12, 4);
  FUNC_0 (!FUNC_19 (VAR_9));
  FUNC_0 (FUNC_18 (VAR_13));
  VAR_12 = FUNC_8 (VAR_13, &VAR_10, &VAR_11);
  FUNC_0 (FUNC_1 (VAR_0, VAR_12, VAR_8));
  FUNC_0 (VAR_10 == 12);
  FUNC_0 (VAR_11 == 4);
  FUNC_16 (VAR_12);


  jerry_value_t VAR_14 = FUNC_5 ();
  jerry_value_t VAR_15 = FUNC_4 (VAR_14, 20, 10);
  FUNC_0 (FUNC_19 (VAR_15));
  jerry_value_t VAR_16 = FUNC_12 (VAR_15, 1);
  FUNC_0 (FUNC_9 (VAR_16) == VAR_2);
  FUNC_16 (VAR_16);
  FUNC_16 (VAR_14);

  jerry_value_t VAR_17 = FUNC_4 (VAR_8, 20, 10);
  FUNC_0 (FUNC_19 (VAR_15));
  VAR_16 = FUNC_12 (VAR_17, 1);
  FUNC_0 (FUNC_9 (VAR_16) == VAR_1);
  FUNC_16 (VAR_16);


  jerry_value_t VAR_18 = FUNC_10 ();
  jerry_value_t VAR_19 = FUNC_6 ((const jerry_char_t *) "view1");
  jerry_value_t VAR_20 = FUNC_6 ((const jerry_char_t *) "view2");
  FUNC_0 (FUNC_17 (VAR_18, VAR_19, VAR_9));
  FUNC_0 (FUNC_17 (VAR_18, VAR_20, VAR_13));

  FUNC_16 (VAR_19);
  FUNC_16 (VAR_20);
  FUNC_16 (VAR_18);

  const jerry_char_t VAR_21[] = "view1.setInt16 (12, 255)";
  FUNC_0 (FUNC_20 (FUNC_7 (VAR_21, sizeof (VAR_21) - 1, VAR_7)));

  const jerry_char_t VAR_22[] = "view2.getInt16 (0)";
  FUNC_0 (FUNC_11 (FUNC_7 (VAR_22, sizeof (VAR_22) - 1, VAR_7)) == 255);

  const jerry_char_t VAR_23[] = "view2.getInt16 (0, true)";
  FUNC_0 (FUNC_11 (FUNC_7 (VAR_23,
                                                   sizeof (VAR_23) - 1,
                                                   VAR_7)) == -256);


  FUNC_16 (VAR_13);
  FUNC_16 (VAR_9);
  FUNC_16 (VAR_8);

  FUNC_2 ();

  return 0;
}
