
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int,char) ;

__attribute__((used)) static int FUNC_1 (char VAR_1[VAR_0], int VAR_2, int VAR_3, int VAR_4)
{
  if ( VAR_2 == 0) return (VAR_2);
  if ((VAR_2 + VAR_4) >= VAR_0) return (VAR_2);

  char VAR_5 = VAR_1[VAR_3];

  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  {
    VAR_2 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_5);
  }

  return (VAR_2);
}
