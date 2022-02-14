
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s_escaped ;


 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;

void FUNC_2 (char *VAR_0, size_t VAR_1, const char VAR_2, const char VAR_3)
{
  char VAR_4[1024] = { 0 };

  size_t VAR_5 = sizeof (VAR_4);

  const size_t VAR_6 = FUNC_0 (VAR_0);

  for (size_t VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_6; VAR_7++, VAR_8++)
  {
    const char VAR_9 = VAR_0[VAR_7];

    if (VAR_9 == VAR_2)
    {
      VAR_4[VAR_8] = VAR_3;

      VAR_8++;
    }

    if (VAR_8 == VAR_5 - 2) break;

    VAR_4[VAR_8] = VAR_9;
  }

  FUNC_1 (VAR_0, VAR_4, VAR_1 - 1);
}
