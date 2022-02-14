
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 char *VAR_5 = VAR_1;

 for (;;) {
  VAR_3 = FUNC_0(VAR_0, VAR_5, 1);
  if (VAR_3 <= 0)
   break;
  VAR_4++;
  if (VAR_4 >= (VAR_2 - 1))
   break;
  if (*VAR_5++ == '\n')
   break;
 }
 *VAR_5 = '\0';
 return (VAR_3 <= 0 ? VAR_3 : VAR_4);
}
