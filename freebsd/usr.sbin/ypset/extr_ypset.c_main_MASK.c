
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct hostent {int h_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (struct sockaddr_in*,char*,char*) ;
 int FUNC_2 (struct sockaddr_in*,int) ;
 int FUNC_3 (int,char*,char*) ;
 int FUNC_4 (int) ;
 struct hostent* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,TYPE_1__*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 (char**) ;

int
FUNC_11(int VAR_4, char *VAR_5[])
{
 struct sockaddr_in VAR_6;
 struct hostent *VAR_7;
 char *VAR_8;
 int VAR_9;

 FUNC_10(&VAR_8);

 FUNC_2(&VAR_6, sizeof VAR_6);
 VAR_6.sin_family = VAR_0;
 VAR_6.sin_addr.s_addr = FUNC_7(VAR_1);

 while ((VAR_9 = FUNC_6(VAR_4, VAR_5, "h:d:")) != -1)
  switch (VAR_9) {
  case 'd':
   VAR_8 = VAR_2;
   break;
  case 'h':
   if (FUNC_8(VAR_2, &VAR_6.sin_addr) == 0) {
    VAR_7 = FUNC_5(VAR_2);
    if (VAR_7 == ((void*)0))
     FUNC_3(1, "host %s unknown\n", VAR_2);
    FUNC_0(VAR_7->h_addr, &VAR_6.sin_addr,
        sizeof(VAR_6.sin_addr));
   }
   break;
  default:
   FUNC_9();
  }

 if (VAR_3 + 1 != VAR_4)
  FUNC_9();

 if (FUNC_1(&VAR_6, VAR_8, VAR_5[VAR_3]))
  FUNC_4(1);
 FUNC_4(0);
}
