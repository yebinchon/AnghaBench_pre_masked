
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ FUNC_3 (int,int ,int*) ;
 int FUNC_4 (char const*,int ) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 () ;

int FUNC_6 (int VAR_10, char **VAR_11)
{
 const char *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = VAR_0;
 VAR_14 = VAR_2;
 while ((VAR_15 = FUNC_2(VAR_10, VAR_11, "d:eips")) != -1)
  switch (VAR_15) {
  case 'd':
   VAR_12 = VAR_8;
   break;
  case 'e':
   VAR_14 = VAR_5;
   break;
  case 'i':
   VAR_14 = VAR_6;
   break;
  case 'p':
   VAR_14 = VAR_1;
   break;
  case 's':
   VAR_14 = VAR_7;
   break;
  case '?':
  default:
   FUNC_5();

  }
 VAR_10 -= VAR_9;
 VAR_11 += VAR_9;

 if (VAR_10 == 1) {
  VAR_12 = VAR_11[0];
  --VAR_10;
 }

 if (VAR_14 == VAR_2 || VAR_10 != 0)
  FUNC_5();

 if ((VAR_13 = FUNC_4(VAR_12, VAR_4)) < 0)
  FUNC_1(1, "open");
 if (FUNC_3(VAR_13, VAR_3, &VAR_14) < 0)
  FUNC_1(1, "ioctl");
 FUNC_0(VAR_13);

 return(0);
}
