
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int size ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int*,int) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_3, int VAR_4)
{

 if (VAR_4 <= VAR_2)
  return (VAR_3);
 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3);
 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_0("rmtd: cannot allocate buffer space\n");
  FUNC_1(4);
 }
 VAR_2 = VAR_4;
 while (VAR_4 > 1024 &&
        FUNC_4(0, VAR_0, VAR_1, &VAR_4, sizeof (VAR_4)) < 0)
  VAR_4 -= 1024;
 return (VAR_3);
}
