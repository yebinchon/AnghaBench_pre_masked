
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t yytype_int16 ;
typedef scalar_t__ YYSIZE_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int * VAR_8 ;
 int FUNC_4 (int ) ;
 char const** VAR_9 ;
 scalar_t__ FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6 (YYSIZE_T *VAR_10, char **VAR_11,
                yytype_int16 *VAR_12, int VAR_13)
{
  YYSIZE_T VAR_14 = FUNC_5 (VAR_5, VAR_9[VAR_13]);
  YYSIZE_T VAR_15 = VAR_14;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };

  const char *VAR_16 = VAR_5;

  char const *VAR_17[YYERROR_VERBOSE_ARGS_MAXIMUM];


  int VAR_18 = 0;
  if (VAR_13 != VAR_0)
    {
      int VAR_19 = VAR_7[*VAR_12];
      VAR_17[VAR_18++] = VAR_9[VAR_13];
      if (!FUNC_2 (VAR_19))
        {



          int VAR_20 = VAR_19 < 0 ? -VAR_19 : 0;

          int VAR_21 = VAR_1 - VAR_19 + 1;
          int VAR_22 = VAR_21 < VAR_2 ? VAR_21 : VAR_2;
          int VAR_23;

          for (VAR_23 = VAR_20; VAR_23 < VAR_22; ++VAR_23)
            if (VAR_6[VAR_23 + VAR_19] == VAR_23 && VAR_23 != VAR_4
                && !FUNC_4 (VAR_8[VAR_23 + VAR_19]))
              {
                if (VAR_18 == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    VAR_18 = 1;
                    VAR_15 = VAR_14;
                    break;
                  }
                VAR_17[VAR_18++] = VAR_9[VAR_23];
                {
                  YYSIZE_T VAR_24 = VAR_15 + FUNC_5 (VAR_5, VAR_9[VAR_23]);
                  if (VAR_15 <= VAR_24 && VAR_24 <= VAR_3)
                    VAR_15 = VAR_24;
                  else
                    return 2;
                }
              }
        }
    }

  switch (VAR_18)
    {




    default:
      case 0: VAR_16 = FUNC_1("syntax error"); break;
      case 1: VAR_16 = FUNC_1("syntax error, unexpected %s"); break;
      case 2: VAR_16 = FUNC_1("syntax error, unexpected %s, expecting %s"); break;
      case 3: VAR_16 = FUNC_1("syntax error, unexpected %s, expecting %s or %s"); break;
      case 4: VAR_16 = FUNC_1("syntax error, unexpected %s, expecting %s or %s or %s"); break;
      case 5: VAR_16 = FUNC_1("syntax error, unexpected %s, expecting %s or %s or %s or %s"); break;

    }

  {
    YYSIZE_T VAR_25 = VAR_15 + FUNC_3 (VAR_16);
    if (VAR_15 <= VAR_25 && VAR_25 <= VAR_3)
      VAR_15 = VAR_25;
    else
      return 2;
  }

  if (*VAR_10 < VAR_15)
    {
      *VAR_10 = 2 * VAR_15;
      if (! (VAR_15 <= *VAR_10
             && *VAR_10 <= VAR_3))
        *VAR_10 = VAR_3;
      return 1;
    }




  {
    char *VAR_26 = *VAR_11;
    int VAR_27 = 0;
    while ((*VAR_26 = *VAR_16) != '\0')
      if (*VAR_26 == '%' && VAR_16[1] == 's' && VAR_27 < VAR_18)
        {
          VAR_26 += FUNC_5 (VAR_26, VAR_17[VAR_27++]);
          VAR_16 += 2;
        }
      else
        {
          VAR_26++;
          VAR_16++;
        }
  }
  return 0;
}
