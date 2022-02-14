
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int dummy; } ;


 int FUNC_0 (char*,char) ;
 int FUNC_1 (struct message*,int) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*,char) ;

char *
FUNC_4(struct message *VAR_0, int VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_2 = FUNC_2(FUNC_1(VAR_0, VAR_1));
 if (VAR_1 != 0 || FUNC_0(VAR_2, '!') < 2)
  return (VAR_2);
 VAR_3 = FUNC_3(VAR_2, '!');
 VAR_3--;
 while (VAR_3 > VAR_2 && *VAR_3 != '!')
  VAR_3--;
 if (*VAR_3 == '!')
  return (VAR_3 + 1);
 return (VAR_2);
}
