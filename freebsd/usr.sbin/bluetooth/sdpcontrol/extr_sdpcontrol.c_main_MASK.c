
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_addr; } ;
typedef int bdaddr_t ;
typedef int bdaddr ;


 char* VAR_0 ;
 int FUNC_0 (char*,int *) ;
 struct hostent* FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,int,int,char**) ;
 int FUNC_3 (int,char*,char*,int ) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_4, char *VAR_5[])
{
 char const *VAR_6 = VAR_0;
 int VAR_7, VAR_8;
 bdaddr_t VAR_9;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_8 = 0;


 while ((VAR_7 = FUNC_4(VAR_4, VAR_5, "a:c:lh")) != -1) {
  switch (VAR_7) {
  case 'a':
   if (!FUNC_0(VAR_2, &VAR_9)) {
    struct hostent *VAR_10 = ((void*)0);

    if ((VAR_10 = FUNC_1(VAR_2)) == ((void*)0))
     FUNC_3(1, "%s: %s", VAR_2, FUNC_5(VAR_1));

    FUNC_6(&VAR_9, VAR_10->h_addr, sizeof(VAR_9));
   }
   break;

  case 'c':
   VAR_6 = VAR_2;
   break;

  case 'l':
   VAR_8 = 1;
   break;

  case 'h':
  default:
   FUNC_8();

  }
 }

 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;

 if (*VAR_5 == ((void*)0))
  FUNC_8();

 return (FUNC_2(&VAR_9, VAR_6, VAR_8, VAR_4, VAR_5));
}
