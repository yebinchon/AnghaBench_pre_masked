
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ clock_t ;


 char* FUNC_0 (char*,int,char*,int) ;
 float VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,float) ;
 char* FUNC_4 (int,int ) ;
 char* FUNC_5 (char*,int,char*,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_10 (char*,char*,int) ;

int FUNC_11()
{
 char *VAR_6;
 int VAR_7;
 clock_t VAR_8;
 VAR_8 = FUNC_2();
 VAR_6 = FUNC_4(VAR_5, VAR_1);
 FUNC_3(VAR_4, "Generate data in %.3f sec\n", (float)(FUNC_2() - VAR_8) / VAR_0);
 {
  VAR_8 = FUNC_2(); FUNC_9(1331);
  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
   int VAR_9 = FUNC_6() % (VAR_5 - VAR_2);
   char *VAR_10;
   VAR_10 = FUNC_5(VAR_6, VAR_5, VAR_6 + VAR_9, VAR_2, 0);

  }
  FUNC_3(VAR_4, "Search patterns in %.3f sec\n", (float)(FUNC_2() - VAR_8) / VAR_0);
 }
 if (1) {
  VAR_8 = FUNC_2(); FUNC_9(1331);
  for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
   int VAR_11 = FUNC_6() % (VAR_5 - VAR_2);
   char *VAR_12;
   VAR_12 = FUNC_0(VAR_6, VAR_5, VAR_6 + VAR_11, VAR_2);

  }
  FUNC_3(VAR_4, "Search patterns in %.3f sec\n", (float)(FUNC_2() - VAR_8) / VAR_0);
 }
 return 0;
}
