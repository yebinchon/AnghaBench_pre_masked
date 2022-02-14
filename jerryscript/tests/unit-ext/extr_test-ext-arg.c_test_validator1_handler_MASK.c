
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerryx_arg_t ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int*,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (double*,int ,int ) ;
 int FUNC_12 (char*,int,int ,int ) ;
 int FUNC_13 (int const,int const*,int const,int *,int ) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static jerry_value_t
FUNC_15 (const jerry_value_t VAR_5,
                         const jerry_value_t VAR_6,
                         const jerry_value_t VAR_7[],
                         const jerry_length_t VAR_8)
{
  FUNC_1 (VAR_5);

  bool VAR_9;
  double VAR_10 = 0.0;
  char VAR_11[5] = "1234";
  jerry_value_t VAR_12 = FUNC_3 ();

  jerryx_arg_t VAR_13[] =
  {

    FUNC_10 (),

    FUNC_8 (&VAR_9, VAR_0, VAR_3),

    FUNC_11 (&VAR_10, VAR_1, VAR_3),

    FUNC_12 (VAR_11, 5, VAR_0, VAR_3),

    FUNC_9 (&VAR_12, VAR_2)
  };

  jerry_value_t VAR_14 = FUNC_13 (VAR_6,
                                                            VAR_7,
                                                            VAR_8,
                                                            VAR_13,
                                                            FUNC_0 (VAR_13));

  if (VAR_4 == 0)
  {
    FUNC_2 (!FUNC_5 (VAR_14));
    FUNC_2 (VAR_9);
    FUNC_2 (VAR_10 == 10.5);
    FUNC_2 (FUNC_14 (VAR_11, "abc") == 0);
    FUNC_2 (FUNC_6 (VAR_12));
  }
  else if (VAR_4 == 1)
  {
    FUNC_2 (!FUNC_5 (VAR_14));
    FUNC_2 (VAR_9);
    FUNC_2 (VAR_10 == 10.5);
    FUNC_2 (FUNC_14 (VAR_11, "abc") == 0);
    FUNC_2 (FUNC_7 (VAR_12));
  }
  else if (VAR_4 == 2)
  {
    FUNC_2 (!FUNC_5 (VAR_14));
    FUNC_2 (VAR_9);
    FUNC_2 (VAR_10 == 10.5);
    FUNC_2 (FUNC_14 (VAR_11, "") == 0);
    FUNC_2 (FUNC_7 (VAR_12));
  }
  else
  {
    FUNC_2 (FUNC_5 (VAR_14));
  }

  FUNC_4 (VAR_14);
  FUNC_4 (VAR_12);
  VAR_4++;

  return FUNC_3 ();
}
