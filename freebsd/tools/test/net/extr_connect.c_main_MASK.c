
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int remoteaddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_4 ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;

int FUNC_9(int VAR_6, char **VAR_7)
{

 int VAR_8, VAR_9, VAR_10 = 0;
 int VAR_11 = VAR_2;
 struct sockaddr_in VAR_12;

 while ((VAR_8 = FUNC_4(VAR_6, VAR_7, "p:")) != -1) {
  switch (VAR_8) {
  case 'p':
   VAR_11 = FUNC_0(VAR_5);
   break;
  case 'h':
  default:
   FUNC_8();
  }
 }

 FUNC_1(&VAR_12, sizeof(VAR_12));
 VAR_12.sin_len = sizeof(VAR_12);
 VAR_12.sin_family = VAR_0;
 VAR_12.sin_port = FUNC_5(VAR_11);
 VAR_12.sin_addr.s_addr = VAR_1;

 VAR_9 = FUNC_7(VAR_0, VAR_3, 0);

 while ((VAR_9 = FUNC_3(VAR_9, (struct sockaddr *)&VAR_12,
       sizeof(VAR_12))) >= 0) {
  VAR_10++;
  FUNC_2(VAR_9);
  VAR_9 = FUNC_7(VAR_0, VAR_3, 0);
 }

 FUNC_6("Exiting at %d with errno %d\n", VAR_10, VAR_4);

}
