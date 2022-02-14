
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; } ;
typedef TYPE_1__ my_type_a_t ;
typedef int jerryx_arg_t ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (void**,int *,int ) ;
 int FUNC_8 (int const,int const*,int const,int *,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static jerry_value_t
FUNC_9 (const jerry_value_t VAR_5,
                         const jerry_value_t VAR_6,
                         const jerry_value_t VAR_7[],
                         const jerry_length_t VAR_8)
{
  FUNC_1 (VAR_5);

  my_type_a_t *VAR_9;

  jerryx_arg_t VAR_10[] =
  {

    FUNC_7 ((void **) &VAR_9, &VAR_3, VAR_0),

    FUNC_6 (((void*)0), 5, VAR_1)
  };

  jerry_value_t VAR_11 = FUNC_8 (VAR_6,
                                                            VAR_7,
                                                            VAR_8,
                                                            VAR_10,
                                                            FUNC_0 (VAR_10));

  if (VAR_4 == 0)
  {
    FUNC_2 (!FUNC_5 (VAR_11));
    FUNC_2 (VAR_9 == &VAR_2);
    FUNC_2 (VAR_9->x == 1);
  }
  else
  {
    FUNC_2 (FUNC_5 (VAR_11));
  }

  FUNC_4 (VAR_11);
  VAR_4++;

  return FUNC_3 ();
}
