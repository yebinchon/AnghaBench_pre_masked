
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int
FUNC_1(char *VAR_6)
{
 int VAR_7;

 if (VAR_5 >= VAR_1)
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 if (VAR_7 < 0)
  return (VAR_4);

 VAR_3[VAR_5] = VAR_7;
 VAR_5++;

 return (0);
}
