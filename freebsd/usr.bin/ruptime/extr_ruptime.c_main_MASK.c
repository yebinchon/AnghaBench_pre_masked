
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (void const*,void const*) ;
 int FUNC_5 (void const*,void const*) ;
 int * FUNC_6 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,int,int (*) (void const*,void const*)) ;
 int FUNC_8 (void const*,void const*) ;
 int FUNC_9 (void const*,void const*) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_4, char *VAR_5[])
{
 int (*VAR_6)(const void *, const void *);
 int VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_6 = FUNC_4;
 while ((VAR_8 = FUNC_3(VAR_4, VAR_5, "alrut")) != -1)
  switch (VAR_8) {
  case 'a':
   VAR_7 = 1;
   break;
  case 'l':
   VAR_6 = FUNC_5;
   break;
  case 'r':
   VAR_3 = -1;
   break;
  case 't':
   VAR_6 = FUNC_8;
   break;
  case 'u':
   VAR_6 = FUNC_9;
   break;
  default:
   FUNC_10();
  }
 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;

 if (FUNC_0(VAR_0) || (VAR_1 = FUNC_6(".")) == ((void*)0))
  FUNC_1(1, "%s", VAR_0);

 FUNC_7(*VAR_5, VAR_7, VAR_6);
 while (*VAR_5++ != ((void*)0)) {
  if (*VAR_5 == ((void*)0))
   break;
  FUNC_7(*VAR_5, VAR_7, VAR_6);
 }
 FUNC_2(0);
}
