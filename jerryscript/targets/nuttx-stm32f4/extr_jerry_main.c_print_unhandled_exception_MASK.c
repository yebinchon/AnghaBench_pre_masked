
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int msg ;
typedef int jerry_value_t ;
typedef int jerry_size_t ;
typedef char jerry_char_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char const*,int) ;
 char* FUNC_11 (char*,size_t*) ;
 scalar_t__ FUNC_12 (char*,char**) ;

__attribute__((used)) static void
FUNC_13 (jerry_value_t VAR_4)
{
  FUNC_0 (FUNC_8 (VAR_4));

  VAR_4 = FUNC_3 (VAR_4, 0);
  jerry_value_t VAR_5 = FUNC_9 (VAR_4);
  jerry_size_t VAR_6 = FUNC_2 (VAR_5);
  jerry_char_t VAR_7[256];

  FUNC_6 (VAR_4);

  if (VAR_6 >= 256)
  {
    const char VAR_8[] = "[Error message too long]";
    VAR_6 = sizeof (VAR_8) / sizeof (char) - 1;
    FUNC_10 (VAR_7, VAR_8, VAR_6);
  }
  else
  {
    jerry_size_t VAR_9 = FUNC_7 (VAR_5, VAR_7, VAR_6);
    FUNC_0 (VAR_9 == VAR_6);
    VAR_7[VAR_6] = 0;

    if (FUNC_4 (VAR_1)
        && FUNC_1 (VAR_4) == VAR_0)
    {
      jerry_char_t *VAR_10 = VAR_7 + VAR_9;
      uint32_t VAR_11 = 0;
      uint32_t VAR_12 = 0;
      char *VAR_13 = ((void*)0);
      char *VAR_14 = ((void*)0);


      for (jerry_char_t *VAR_15 = VAR_7; VAR_15 < VAR_10; VAR_15++)
      {
        if (*VAR_15 == '[')
        {
          VAR_15++;

          if (*VAR_15 == '<')
          {
            break;
          }

          VAR_13 = (char *) VAR_15;
          while (VAR_15 < VAR_10 && *VAR_15 != ':')
          {
            VAR_15++;
          }

          VAR_14 = (char *) VAR_15++;

          VAR_11 = FUNC_12 ((char *) VAR_15, (char **) &VAR_15);

          VAR_15++;

          VAR_12 = FUNC_12 ((char *) VAR_15, ((void*)0));
          break;
        }
      }

      if (VAR_11 != 0 && VAR_12 != 0)
      {
        uint32_t VAR_16 = 1;

        bool VAR_17 = 0;
        uint32_t VAR_18 = 0;


        *VAR_14 = '\0';

        size_t VAR_19;
        const jerry_char_t *VAR_20 = FUNC_11 (VAR_13, &VAR_19);


        *VAR_14 = ':';


        while (VAR_20[VAR_18] != '\0')
        {
          if (VAR_20[VAR_18] == '\n')
          {
            VAR_16++;
          }

          if (VAR_11 < VAR_3
              || (VAR_11 >= VAR_16
                  && (VAR_11 - VAR_16) <= VAR_3))
          {

            VAR_17 = 1;
          }

          if (VAR_16 > VAR_11)
          {
            break;
          }

          if (VAR_17)
          {
            FUNC_5 (VAR_2, "%c", VAR_20[VAR_18]);
          }

          VAR_18++;
        }

        FUNC_5 (VAR_2, "\n");

        while (--VAR_12)
        {
          FUNC_5 (VAR_2, "~");
        }

        FUNC_5 (VAR_2, "^\n");
      }
    }
  }

  FUNC_5 (VAR_2, "Script Error: %s\n", VAR_7);
  FUNC_6 (VAR_5);
}
