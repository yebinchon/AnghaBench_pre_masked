
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (char*,int,scalar_t__,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

u64 FUNC_4 (HCFILE *VAR_1)
{
  u64 VAR_2 = 0;

  char *VAR_3 = (char *) FUNC_3 (VAR_0 + 1);

  char VAR_4 = '\n';

  while (!FUNC_0 (VAR_1))
  {
    size_t VAR_5 = FUNC_1 (VAR_3, sizeof (char), VAR_0, VAR_1);

    if (VAR_5 < 1) continue;

    size_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
      if (VAR_4 == '\n') VAR_2++;

      VAR_4 = VAR_3[VAR_6];
    }
  }

  FUNC_2 (VAR_3);

  return VAR_2;
}
