
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2 (char VAR_3[VAR_0], int VAR_4, int VAR_5, char VAR_6[VAR_0], int VAR_7, int VAR_8, int VAR_9)
{
  if ((VAR_4 + VAR_9) > VAR_0) return (VAR_1);

  if (VAR_5 > VAR_4) return (VAR_1);

  if (VAR_8 > VAR_7) return (VAR_1);

  if ((VAR_8 + VAR_9) > VAR_7) return (VAR_1);

  if (VAR_9 < 1) return (VAR_2);

  FUNC_1 (VAR_6, VAR_6 + VAR_8, VAR_7 - VAR_8);

  FUNC_0 (VAR_6 + VAR_9, VAR_3 + VAR_5, VAR_4 - VAR_5);

  FUNC_0 (VAR_3 + VAR_5, VAR_6, VAR_4 - VAR_5 + VAR_9);

  return (VAR_4 + VAR_9);
}
