
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
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int ) ;
 int FUNC_7 (double*,int ,int ) ;
 int FUNC_8 (int const,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static jerry_value_t
FUNC_9 (const jerry_value_t VAR_4,
                               const jerry_value_t VAR_5,
                               const jerry_value_t VAR_6[],
                               const jerry_length_t VAR_7)
{
  FUNC_1 (VAR_4);
  FUNC_1 (VAR_5);
  FUNC_1 (VAR_7);

  double VAR_8 = 0;
  bool VAR_9 = 0;

  jerryx_arg_t VAR_10[] =
  {
    FUNC_7 (&VAR_8, VAR_0, VAR_2),
    FUNC_6 (&VAR_9, VAR_1, VAR_2)
  };

  jerry_value_t VAR_11 = FUNC_8 (VAR_6[0], VAR_10, FUNC_0 (VAR_10));

  FUNC_2 (FUNC_5 (VAR_11));
  FUNC_2 (VAR_8 == 1);
  FUNC_2 (!VAR_9);

  VAR_3++;
  FUNC_4 (VAR_11);

  return FUNC_3 ();
}
