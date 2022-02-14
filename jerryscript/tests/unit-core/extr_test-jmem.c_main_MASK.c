
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (size_t*,size_t) ;
 size_t* FUNC_7 (size_t*,size_t,size_t) ;
 int FUNC_8 () ;

int
FUNC_9 (void)
{
  FUNC_1 ();

  FUNC_8 ();
  FUNC_3 ();

  {
    uint8_t *VAR_1 = (uint8_t *) FUNC_5 (VAR_0);
    uint8_t *VAR_2 = (uint8_t *) FUNC_5 (VAR_0);
    uint8_t *VAR_3 = (uint8_t *) FUNC_5 (VAR_0);



    for (uint8_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
      VAR_2[VAR_4] = VAR_4;
    }


    VAR_2 = FUNC_7 (VAR_2, VAR_0, VAR_0 * 2);



    for (uint8_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
      FUNC_0 (VAR_2[VAR_5] == VAR_5);
    }

    for (uint8_t VAR_6 = VAR_0; VAR_6 < VAR_0 * 2; VAR_6++)
    {
      VAR_2[VAR_6] = VAR_6;
    }

    uint8_t *VAR_7 = (uint8_t *) FUNC_5 (VAR_0 * 2);



    FUNC_6 (VAR_3, VAR_0);




    VAR_2 = (uint8_t *) FUNC_7 (VAR_2, VAR_0 * 2, VAR_0 * 3);



    for (uint8_t VAR_8 = 0; VAR_8 < VAR_0 * 2; VAR_8++)
    {
      FUNC_0 (VAR_2[VAR_8] == VAR_8);
    }


    VAR_2 = (uint8_t *) FUNC_7 (VAR_2, VAR_0 * 3, VAR_0);



    for (uint8_t VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    {
      FUNC_0 (VAR_2[VAR_9] == VAR_9);
    }

    for (uint8_t VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
    {
      VAR_1[VAR_10] = VAR_10;
    }


    VAR_1 = (uint8_t *) FUNC_7 (VAR_1, VAR_0, VAR_0 * 2);



    for (uint8_t VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
    {
      FUNC_0 (VAR_1[VAR_11] == VAR_11);
    }

    FUNC_6 (VAR_1, VAR_0 * 2);
    FUNC_6 (VAR_2, VAR_0);
    FUNC_6 (VAR_7, VAR_0 * 2);
  }

  FUNC_2 ();
  FUNC_4 ();

  return 0;
}
