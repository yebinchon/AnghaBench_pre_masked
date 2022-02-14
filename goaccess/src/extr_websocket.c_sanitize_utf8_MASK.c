
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;




 int FUNC_0 (int*,int*,unsigned char) ;
 char* FUNC_1 (int,int) ;

__attribute__((used)) static char *
FUNC_2 (const char *VAR_0, int VAR_1)
{
  char *VAR_2 = ((void*)0);
  uint32_t VAR_3 = 128, VAR_4 = 128, VAR_5 = 0;
  int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

  VAR_2 = FUNC_1 (VAR_1 + 1, sizeof (char));
  for (; VAR_6 < VAR_1; VAR_4 = VAR_3, ++VAR_6) {
    switch (FUNC_0 (&VAR_3, &VAR_5, (unsigned char) VAR_0[VAR_6])) {
    case 129:

      if (VAR_8) {
        for (VAR_9 = VAR_6 - VAR_8; VAR_9 < VAR_6; ++VAR_9)
          VAR_2[VAR_7++] = '?';
      } else {
        VAR_2[VAR_7++] = '?';
      }
      VAR_3 = 128;
      if (VAR_4 != 128)
        VAR_6--;
      VAR_8 = 0;
      break;
    case 128:

      if (VAR_8)
        for (VAR_9 = VAR_6 - VAR_8; VAR_9 < VAR_6; ++VAR_9)
          VAR_2[VAR_7++] = VAR_0[VAR_9];
      VAR_2[VAR_7++] = VAR_0[VAR_6];
      VAR_8 = 0;
      break;
    default:

      VAR_8++;
      break;
    }
  }

  return VAR_2;
}
