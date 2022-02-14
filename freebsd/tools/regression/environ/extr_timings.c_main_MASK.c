
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {int ru_utime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,struct rusage*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int *,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_7(int VAR_9, char **VAR_10)
{
 int VAR_11;
 struct rusage VAR_12;
 struct rusage VAR_13;




 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  if (FUNC_2(VAR_4) == ((void*)0))
   FUNC_0(VAR_0, "getenv(name)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("getenv(name)", &VAR_13.ru_utime, &VAR_12.ru_utime);





 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  if (FUNC_6(VAR_4, VAR_7, 1) == -1)
   FUNC_0(VAR_0, "setenv(name, value1, 1)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("setenv(name, value1, 1)", &VAR_13.ru_utime,
     &VAR_12.ru_utime);





 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)

  if (FUNC_2(VAR_4) == ((void*)0))
   FUNC_0(VAR_0, "getenv(name)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("getenv(name)", &VAR_13.ru_utime, &VAR_12.ru_utime);





 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)

  if (FUNC_2(VAR_5) == ((void*)0))
   FUNC_0(VAR_0, "getenv(name2)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("getenv(name2)", &VAR_13.ru_utime, &VAR_12.ru_utime);





 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  if (FUNC_6(VAR_4, VAR_8, 1) == -1)
   FUNC_0(VAR_0, "setenv(name, value2, 1)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("setenv(name, value2, 1)", &VAR_13.ru_utime,
     &VAR_12.ru_utime);





 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)

  if (FUNC_2(VAR_5) == ((void*)0))
   FUNC_0(VAR_0, "getenv(name)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("getenv(name)", &VAR_13.ru_utime, &VAR_12.ru_utime);





 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)

  if (FUNC_2(VAR_5) == ((void*)0))
   FUNC_0(VAR_0, "getenv(name2)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("getenv(name2)", &VAR_13.ru_utime, &VAR_12.ru_utime);





 FUNC_3(VAR_3, &VAR_13);


 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  if (FUNC_4(VAR_6) == -1)
   FUNC_0(VAR_0, "putenv(nameValuePair)");

 FUNC_3(VAR_3, &VAR_12);

 FUNC_5("putenv(nameValuePair)", &VAR_13.ru_utime,
     &VAR_12.ru_utime);


 FUNC_1(VAR_1);
}
