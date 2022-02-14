
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct date_mode {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,struct date_mode*) ;
 int FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (char*,char const*,char*) ;
 char* FUNC_4 (int ,int,struct date_mode*) ;

__attribute__((used)) static void FUNC_5(const char **VAR_0, const char *VAR_1)
{
 struct date_mode VAR_2;

 FUNC_1(VAR_1, &VAR_2);
 for (; *VAR_0; VAR_0++) {
  char *VAR_3;
  timestamp_t VAR_4;
  int VAR_5;





  VAR_4 = FUNC_2(*VAR_0, &VAR_3, 10);
  while (*VAR_3 == ' ')
   VAR_3++;
  VAR_5 = FUNC_0(VAR_3);

  FUNC_3("%s -> %s\n", *VAR_0, FUNC_4(VAR_4, VAR_5, &VAR_2));
 }
}
