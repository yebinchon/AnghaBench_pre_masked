
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jerryx_arg_t ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;
struct TYPE_4__ {int bool_field; double double_field; } ;
struct TYPE_5__ {scalar_t__ type_of_value; TYPE_1__ value; } ;
typedef TYPE_2__ double_or_bool_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int) ;
 int FUNC_7 (int const*,int const,int *,int ) ;

__attribute__((used)) static jerry_value_t
FUNC_8 (const jerry_value_t VAR_4,
                                const jerry_value_t VAR_5,
                                const jerry_value_t VAR_6[],
                                const jerry_length_t VAR_7)
{
  FUNC_1 (VAR_4);
  FUNC_1 (VAR_5);

  double_or_bool_t VAR_8;
  double_or_bool_t VAR_9;

  jerryx_arg_t VAR_10[] =
  {
    FUNC_6 (&VAR_8, VAR_2, VAR_3, 0),
    FUNC_6 (&VAR_9, VAR_2, VAR_3, 1)
  };

  jerry_value_t VAR_11 = FUNC_7 (VAR_6, VAR_7, VAR_10, FUNC_0 (VAR_10));

  FUNC_2 (!FUNC_5 (VAR_11));


  bool VAR_12 = (VAR_8 == VAR_0 && VAR_8 == 0);
  bool VAR_13 = (VAR_8 == VAR_1 && VAR_8 == 3.0);
  bool VAR_14 = (VAR_9 == VAR_0 && VAR_9 == 0);
  bool VAR_15 = (VAR_9 == VAR_1 && VAR_9 == 3.0);
  FUNC_2 ((VAR_12 && VAR_15) || (VAR_13 && VAR_14));

  FUNC_4 (VAR_11);

  return FUNC_3 ();
}
