
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int answer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 char FUNC_4 (char) ;

__attribute__((used)) static int FUNC_5(void)
{
 char VAR_2[1024];

 if (FUNC_0(VAR_2, sizeof(VAR_2), VAR_1)) {
  size_t VAR_3 = FUNC_2(VAR_2);
  int VAR_4 = 0, VAR_5;


  if (VAR_3 >= 2 && VAR_2[VAR_3-2] == '\r') {
   VAR_2[VAR_3-2] = '\0';
   VAR_4 = 1;
  } else if (VAR_3 >= 1 && VAR_2[VAR_3-1] == '\n') {
   VAR_2[VAR_3-1] = '\0';
   VAR_4 = 1;
  }

  if (!VAR_4)
   while ((VAR_5 = FUNC_1()) != VAR_0 && VAR_5 != '\n')
    ;
 } else


  return 0;

 if (FUNC_4(VAR_2[0]) == 'y' && !VAR_2[1])
  return 1;
 if (!FUNC_3(VAR_2, "yes", sizeof(VAR_2)))
  return 1;
 if (FUNC_4(VAR_2[0]) == 'n' && !VAR_2[1])
  return 0;
 if (!FUNC_3(VAR_2, "no", sizeof(VAR_2)))
  return 0;


 return -1;
}
