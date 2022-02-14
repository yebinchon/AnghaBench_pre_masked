
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int const*,size_t,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (char const*,size_t*) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (char*,char*) ;

int
FUNC_14 (int VAR_6,
      char **VAR_7)
{
  FUNC_12 ((unsigned) FUNC_5 ());
  if (VAR_6 <= 1 || (VAR_6 == 2 && (!FUNC_13 ("-h", VAR_7[1]) || !FUNC_13 ("--help", VAR_7[1]))))
  {
    FUNC_10 (VAR_7[0]);
    return VAR_5;
  }

  FUNC_3 (VAR_1);
  jerry_value_t VAR_8 = FUNC_2 ();

  for (int VAR_9 = 1; VAR_9 < VAR_6; VAR_9++)
  {
    const char *VAR_10 = VAR_7[VAR_9];
    size_t VAR_11;

    const jerry_char_t *VAR_12 = FUNC_11 (VAR_10, &VAR_11);

    if (VAR_12 == ((void*)0))
    {
      VAR_8 = FUNC_1 (VAR_0, (jerry_char_t *) "");
      break;
    }
    else
    {
      VAR_8 = FUNC_4 (((void*)0), 0, VAR_12, VAR_11, VAR_3);

      if (!FUNC_9 (VAR_8))
      {
        jerry_value_t VAR_13 = VAR_8;
        VAR_8 = FUNC_8 (VAR_13);
        FUNC_7 (VAR_13);
      }
    }

    if (FUNC_9 (VAR_8))
    {
      break;
    }

    FUNC_7 (VAR_8);
    VAR_8 = FUNC_2 ();
  }

  int VAR_14 = VAR_5;

  if (FUNC_9 (VAR_8))
  {
    FUNC_6 (VAR_2, "Unhandled exception: Script Error!\n");
    VAR_14 = VAR_4;
  }

  FUNC_7 (VAR_8);
  FUNC_0 ();

  return VAR_14;
}
