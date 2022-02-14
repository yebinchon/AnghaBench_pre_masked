
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_addr; } ;
typedef int bdaddr_t ;
typedef int bdaddr ;


 int VAR_0 ;
 int FUNC_0 (void*,int *) ;
 struct hostent* FUNC_1 (void*) ;
 void* VAR_1 ;
 int FUNC_2 (int *,int,char**) ;
 int FUNC_3 (int,char*,void*,int ) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 void* VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int) ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 () ;
 int VAR_6 ;

int
FUNC_9(int VAR_7, char *VAR_8[])
{
 bdaddr_t VAR_9;
 int VAR_10;

 FUNC_5(((void*)0));
 FUNC_7(&VAR_9, VAR_0, sizeof(VAR_9));

 while ((VAR_10 = FUNC_4(VAR_7, VAR_8, "a:c:H:hv")) != -1) {
  switch (VAR_10) {
  case 'a':
   if (!FUNC_0(VAR_4, &VAR_9)) {
    struct hostent *VAR_11 = ((void*)0);

    if ((VAR_11 = FUNC_1(VAR_4)) == ((void*)0))
     FUNC_3(1, "%s: %s", VAR_4, FUNC_6(VAR_2));

    FUNC_7(&VAR_9, VAR_11->h_addr, sizeof(VAR_9));
   }
   break;

  case 'c':
   VAR_1 = VAR_4;
   break;

  case 'H':
   VAR_3 = VAR_4;
   break;

  case 'v':
   VAR_6++;
   break;

  case 'h':
  default:
   FUNC_8();

  }
 }

 VAR_7 -= VAR_5;
 VAR_8 += VAR_5;

 if (*VAR_8 == ((void*)0))
  FUNC_8();

 return (FUNC_2(&VAR_9, VAR_7, VAR_8));
}
