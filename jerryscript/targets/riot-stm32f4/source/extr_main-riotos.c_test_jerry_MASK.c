
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script ;
typedef int jerry_value_t ;
typedef char jerry_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char const*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ) ;

int FUNC_9 (int VAR_5, char **VAR_6)
{

  (void) VAR_5;
  (void) VAR_6;

  jerry_value_t VAR_7 = FUNC_1 ();

  const jerry_char_t VAR_8[] = "print ('Hello, World!');";
  FUNC_7 ("This test run the following script code: [%s]\n\n", VAR_8);


  FUNC_2 (VAR_0);


  FUNC_8 ("print", VAR_4);


  VAR_7 = FUNC_3 (((void*)0), 0, VAR_8, sizeof (VAR_8) - 1, VAR_1);

  if (!FUNC_6 (VAR_7))
  {

    VAR_7 = FUNC_5 (VAR_7);
  }

  int VAR_9 = VAR_3;

  if (FUNC_6 (VAR_7))
  {
    FUNC_7 ("Script Error!");

    VAR_9 = VAR_2;
  }

  FUNC_4 (VAR_7);


  FUNC_0 ();

  return VAR_9;

}
