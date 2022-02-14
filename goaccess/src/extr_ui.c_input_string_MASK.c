
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 char* VAR_0 ;
 char* VAR_1 ;




 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,size_t,size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *,int,int,char*,char*) ;
 int VAR_2 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int *,size_t) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (size_t) ;
 char* FUNC_14 (char*) ;

char *
FUNC_15 (WINDOW * VAR_3, int VAR_4, int VAR_5, size_t VAR_6,
              const char *VAR_7, int VAR_8, int *VAR_9)
{
  char *VAR_10 = FUNC_13 (VAR_6 + 1), *VAR_11;
  size_t VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 1, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

  FUNC_3 (VAR_3, VAR_19, VAR_18);
  VAR_18 -= 4;


  if (VAR_7) {
    VAR_17 = FUNC_0 (VAR_6, FUNC_8 (VAR_7));
    FUNC_5 (VAR_10, VAR_7, VAR_17);
    VAR_10[VAR_17] = '\0';

    VAR_15 = VAR_14 = 0;

    if (FUNC_8 (VAR_10) > VAR_18) {
      VAR_11 = FUNC_14 (&VAR_10[0]);
      VAR_11[VAR_18] = '\0';
      FUNC_7 (VAR_3, VAR_4, VAR_5, "%s", VAR_11);
      FUNC_2 (VAR_11);
    } else {
      FUNC_7 (VAR_3, VAR_4, VAR_5, "%s", VAR_10);
    }
  } else {
    VAR_10[0] = '\0';
  }

  if (VAR_8)
    FUNC_7 (VAR_3, VAR_19 - 2, 1, " %s", VAR_1);

  FUNC_11 (VAR_3, VAR_4, VAR_5 + VAR_15);
  FUNC_12 (VAR_3);

  FUNC_1 (1);
  while (VAR_16) {
    VAR_13 = FUNC_10 (VAR_2);
    switch (VAR_13) {
    case 1:
    case 262:
      VAR_14 = VAR_15 = 0;
      break;
    case 5:
    case 360:
      if (FUNC_8 (VAR_10) > VAR_18) {
        VAR_15 = VAR_18;
        VAR_14 = FUNC_8 (VAR_10) - VAR_18;
      } else {
        VAR_14 = 0;
        VAR_15 = FUNC_8 (VAR_10);
      }
      break;
    case 7:
    case 27:
      VAR_14 = VAR_15 = 0;
      if (VAR_7 && *VAR_7 == '\0')
        VAR_10[0] = '\0';
      VAR_16 = 0;
      break;
    case 9:
      if (!VAR_8)
        break;
      *VAR_9 = *VAR_9 == 0 ? 1 : 0;
      if (*VAR_9)
        FUNC_7 (VAR_3, VAR_19 - 2, 1, " %s", VAR_0);
      else if (!*VAR_9)
        FUNC_7 (VAR_3, VAR_19 - 2, 1, " %s", VAR_1);
      break;
    case 21:
      VAR_10[0] = '\0';
      VAR_14 = VAR_15 = 0;
      break;
    case 8:
    case 127:
    case 131:
      if (VAR_14 + VAR_15 > 0) {
        FUNC_6 (&VAR_10[(VAR_14 + VAR_15) - 1], &VAR_10[VAR_14 + VAR_15], (VAR_6 - (VAR_14 + VAR_15)) + 1);
        if (VAR_14 <= 0)
          VAR_15--;
        else
          VAR_14--;
      }
      break;
    case 129:
      if (VAR_15 > 0)
        VAR_15--;
      else if (VAR_14 > 0)
        VAR_14--;
      break;
    case 128:
      if ((VAR_15 + VAR_14) < FUNC_8 (VAR_10)) {
        if (VAR_15 < VAR_18)
          VAR_15++;
        else
          VAR_14++;
      }
      break;
    case 0x0a:
    case 0x0d:
    case 130:
      VAR_16 = 0;
      break;
    default:
      if (FUNC_8 (VAR_10) == VAR_6)
        break;
      if (!FUNC_4 (VAR_13))
        break;

      if (FUNC_8 (VAR_10) == VAR_14) {
        VAR_10[VAR_14 + VAR_15] = VAR_13;
        VAR_10[VAR_14 + VAR_15 + 1] = '\0';
        FUNC_9 (VAR_3, VAR_13);
      } else {
        FUNC_6 (&VAR_10[VAR_14 + VAR_15 + 1], &VAR_10[VAR_14 + VAR_15], FUNC_8 (&VAR_10[VAR_14 + VAR_15]) + 1);
        VAR_10[VAR_14 + VAR_15] = VAR_13;
      }
      if ((VAR_15 + VAR_14) < VAR_6) {
        if (VAR_15 < VAR_18)
          VAR_15++;
        else
          VAR_14++;
      }
    }
    VAR_11 = FUNC_14 (&VAR_10[VAR_14 > 0 ? VAR_14 : 0]);
    VAR_11[FUNC_0 (FUNC_8 (VAR_11), VAR_18)] = '\0';
    for (VAR_12 = FUNC_8 (VAR_11); VAR_12 < VAR_18; VAR_12++)
      FUNC_7 (VAR_3, VAR_4, VAR_5 + VAR_12, "%s", " ");
    FUNC_7 (VAR_3, VAR_4, VAR_5, "%s", VAR_11);
    FUNC_2 (VAR_11);

    FUNC_11 (VAR_3, VAR_4, VAR_5 + VAR_15);
    FUNC_12 (VAR_3);
  }
  FUNC_1 (0);

  return VAR_10;
}
