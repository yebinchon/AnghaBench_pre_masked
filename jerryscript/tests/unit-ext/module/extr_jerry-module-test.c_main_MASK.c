
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

int
FUNC_14 (int VAR_10, char **VAR_11)
{
  (void) VAR_10;
  (void) VAR_11;
  jerry_value_t VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
  jerry_value_t VAR_15;


  FUNC_12 ();
  FUNC_13 ();


  FUNC_7 (VAR_0);

  VAR_12 = FUNC_6 ();

  VAR_13 = FUNC_3 (VAR_9);
  VAR_14 = FUNC_4 ((const jerry_char_t *) "require");
  VAR_15 = FUNC_9 (VAR_12, VAR_14, VAR_13);
  FUNC_0 (!FUNC_11 (VAR_15));
  FUNC_0 (FUNC_10 (VAR_15) && FUNC_5 (VAR_15));
  FUNC_8 (VAR_15);
  FUNC_8 (VAR_14);
  FUNC_8 (VAR_13);

  VAR_13 = FUNC_3 (VAR_8);
  VAR_14 = FUNC_4 ((const jerry_char_t *) "clear_require_cache");
  VAR_15 = FUNC_9 (VAR_12, VAR_14, VAR_13);
  FUNC_0 (!FUNC_11 (VAR_15));
  FUNC_0 (FUNC_10 (VAR_15) && FUNC_5 (VAR_15));
  FUNC_8 (VAR_15);
  FUNC_8 (VAR_14);
  FUNC_8 (VAR_13);

  FUNC_8 (VAR_12);

  FUNC_1 (VAR_1, 42);
  FUNC_1 (VAR_2, 29);
  FUNC_1 (VAR_3, 1);
  FUNC_1 (VAR_4, 1);
  FUNC_1 (VAR_5, 1);
  FUNC_1 (VAR_6, 1);
  FUNC_1 (VAR_7, 1);

  FUNC_2 ();
}
