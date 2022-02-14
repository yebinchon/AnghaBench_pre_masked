
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char**,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(int VAR_11, char **VAR_12)
{
 int VAR_13;

 VAR_8 = 1;

 while ((VAR_13 = FUNC_0(VAR_11, VAR_12, "46gklmpsho")) != -1)
  switch(VAR_13) {
  case '4':
   VAR_2 = VAR_0;
   break;
  case '6':
   VAR_2 = VAR_1;
   break;
  case 'g':
   VAR_3 = 1;
   break;
  case 'k':
   VAR_4 = 1;
   break;
  case 'l':
   VAR_5 = 1;
   break;
  case 'm':
   VAR_6 = 1;
   break;
  case 'p':
   VAR_9 = 1;
   break;
  case 's':
   VAR_10 = 1;
   break;
  case 'h':
   VAR_7 = 0;
   break;
  case 'o':
   VAR_7 = 1;
   break;
  case '?':
  default:
   FUNC_1();
  }

 return VAR_8;
}
