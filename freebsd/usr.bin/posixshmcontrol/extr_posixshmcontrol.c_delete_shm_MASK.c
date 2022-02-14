
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, char **VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_3 = 0;
 for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
  VAR_4 = FUNC_0(VAR_1[VAR_2]);
  if (VAR_4 != 0 && VAR_3 == 0)
   VAR_3 = VAR_4;
 }
 return (VAR_3);
}
