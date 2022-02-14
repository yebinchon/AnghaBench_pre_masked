
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,char*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,int*,char**) ;
 int FUNC_4 (int,char**,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char**) ;
 int FUNC_8 (char*,char*,char**) ;
 int FUNC_9 (char*,char*,int*) ;
 int FUNC_10 (int) ;

int
FUNC_11(int VAR_2, char *VAR_3[])
{
 char *VAR_4, *VAR_5 = ((void*)0), *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 time_t VAR_11;

 FUNC_7(&VAR_4);

 while ((VAR_9 = FUNC_4(VAR_2, VAR_3, "h:d:")) != -1)
  switch (VAR_9) {
  case 'd':
   VAR_4 = VAR_0;
   break;
  case 'h':
   VAR_5 = VAR_0;
   break;
  default:
   FUNC_6();

  }

 if (VAR_1 + 1 != VAR_2)
  FUNC_6();
 VAR_6 = VAR_3[VAR_1];

 if (VAR_5 != ((void*)0)) {
  VAR_10 = FUNC_3(VAR_4, VAR_6, VAR_5,
      &VAR_8, &VAR_7);
 } else {
  VAR_10 = FUNC_9(VAR_4, VAR_6, &VAR_8);
  if (VAR_10 == 0)
   VAR_10 = FUNC_8(VAR_4, VAR_6, &VAR_7);
 }

 if (VAR_10 != 0)
  FUNC_1(1, "no such map %s: reason: %s",
      VAR_6, FUNC_10(VAR_10));

 VAR_11 = VAR_8;
 FUNC_5("Map %s has order number %lld. %s", VAR_6,
     (long long)VAR_8, FUNC_0(&VAR_11));
 FUNC_5("The master server is %s.\n", VAR_7);

 FUNC_2(0);
}
