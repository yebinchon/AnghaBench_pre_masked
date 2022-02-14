
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_addr; } ;
typedef int bdaddr_t ;
typedef int bdaddr ;


 int FUNC_0 (int ,int *) ;
 struct hostent* FUNC_1 (int ) ;
 int FUNC_2 (int *,int,char**) ;
 int FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_4, char *VAR_5[])
{
 int VAR_6;
 bdaddr_t VAR_7;

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));


 while ((VAR_6 = FUNC_4(VAR_4, VAR_5, "a:nh")) != -1) {
  switch (VAR_6) {
  case 'a':
   if (!FUNC_0(VAR_2, &VAR_7)) {
    struct hostent *VAR_8 = ((void*)0);

    if ((VAR_8 = FUNC_1(VAR_2)) == ((void*)0))
     FUNC_3(1, "%s: %s", VAR_2, FUNC_5(VAR_0));

    FUNC_6(&VAR_7, VAR_8->h_addr, sizeof(VAR_7));
   }
   break;

  case 'n':
   VAR_1 = 1;
   break;

  case 'h':
  default:
   FUNC_8();
   break;
  }
 }

 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;

 if (*VAR_5 == ((void*)0))
  FUNC_8();

 return (FUNC_2(&VAR_7, VAR_4, VAR_5));
}
