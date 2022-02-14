
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int msg ;
typedef int jerry_value_t ;
typedef int jerry_size_t ;
typedef char jerry_char_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 char* VAR_4 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,char const*,int) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*,size_t*) ;
 scalar_t__ FUNC_19 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_20 (jerry_value_t VAR_5)
{
  FUNC_0 (!FUNC_12 (VAR_5));

  jerry_char_t VAR_6[256];

  if (FUNC_13 (VAR_5))
  {
    jerry_value_t VAR_7 = FUNC_1 ((const jerry_char_t *) "stack");
    jerry_value_t VAR_8 = FUNC_4 (VAR_5, VAR_7);
    FUNC_9 (VAR_7);

    if (!FUNC_12 (VAR_8)
        && FUNC_11 (VAR_8))
    {
      FUNC_17 ("Exception backtrace:\n");

      uint32_t VAR_9 = FUNC_2 (VAR_8);


      if (VAR_9 > 32)
      {
        VAR_9 = 32;
      }

      for (uint32_t VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
      {
        jerry_value_t VAR_11 = FUNC_5 (VAR_8, VAR_10);

        if (!FUNC_12 (VAR_11)
            && FUNC_14 (VAR_11))
        {
          jerry_size_t VAR_12 = FUNC_6 (VAR_11);

          if (VAR_12 >= 256)
          {
            FUNC_17 ("%3u: [Backtrace string too long]\n", VAR_10);
          }
          else
          {
            jerry_size_t VAR_13 = FUNC_10 (VAR_11, VAR_6, VAR_12);
            FUNC_0 (VAR_13 == VAR_12);
            VAR_6[VAR_13] = 0;

            FUNC_17 ("%3u: %s\n", VAR_10, VAR_6);
          }
        }

        FUNC_9 (VAR_11);
      }
    }
    FUNC_9 (VAR_8);
  }

  jerry_value_t VAR_14 = FUNC_15 (VAR_5);
  jerry_size_t VAR_15 = FUNC_6 (VAR_14);

  if (VAR_15 >= 256)
  {
    const char VAR_16[] = "[Error message too long]";
    VAR_15 = sizeof (VAR_16) / sizeof (char) - 1;
    FUNC_16 (VAR_6, VAR_16, VAR_15 + 1);
  }
  else
  {
    jerry_size_t VAR_17 = FUNC_10 (VAR_14, VAR_6, VAR_15);
    FUNC_0 (VAR_17 == VAR_15);
    VAR_6[VAR_17] = 0;

    if (FUNC_7 (VAR_1)
        && FUNC_3 (VAR_5) == VAR_0)
    {
      jerry_char_t *VAR_18 = VAR_6 + VAR_17;
      unsigned int VAR_19 = 0;
      unsigned int VAR_20 = 0;
      char *VAR_21 = ((void*)0);
      char *VAR_22 = ((void*)0);


      for (jerry_char_t *VAR_23 = VAR_6; VAR_23 < VAR_18; VAR_23++)
      {
        if (*VAR_23 == '[')
        {
          VAR_23++;

          if (*VAR_23 == '<')
          {
            break;
          }

          VAR_21 = (char *) VAR_23;
          while (VAR_23 < VAR_18 && *VAR_23 != ':')
          {
            VAR_23++;
          }

          VAR_22 = (char *) VAR_23++;

          VAR_19 = (unsigned int) FUNC_19 ((char *) VAR_23, (char **) &VAR_23, 10);

          VAR_23++;

          VAR_20 = (unsigned int) FUNC_19 ((char *) VAR_23, ((void*)0), 10);
          break;
        }
      }

      if (VAR_19 != 0 && VAR_20 != 0)
      {
        unsigned int VAR_24 = 1;

        bool VAR_25 = 0;
        unsigned int VAR_26 = 0;

        size_t VAR_27;


        *VAR_22 = '\0';

        FUNC_18 (VAR_21, &VAR_27);


        *VAR_22 = ':';


        while ((VAR_26 < VAR_27) && (VAR_4[VAR_26] != '\0'))
        {
          if (VAR_4[VAR_26] == '\n')
          {
            VAR_24++;
          }

          if (VAR_19 < VAR_3
              || (VAR_19 >= VAR_24
                  && (VAR_19 - VAR_24) <= VAR_3))
          {

            VAR_25 = 1;
          }

          if (VAR_24 > VAR_19)
          {
            break;
          }

          if (VAR_25)
          {
            FUNC_8 (VAR_2, "%c", VAR_4[VAR_26]);
          }

          VAR_26++;
        }

        FUNC_8 (VAR_2, "\n");

        while (--VAR_20)
        {
          FUNC_8 (VAR_2, "~");
        }

        FUNC_8 (VAR_2, "^\n");
      }
    }
  }

  FUNC_8 (VAR_2, "Script Error: %s\n", VAR_6);
  FUNC_9 (VAR_14);
}
