
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
typedef int sin ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (int,char*,char*,int ) ;
 void* FUNC_2 (long) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 long FUNC_6 (char*,char**,int) ;
 int FUNC_7 (struct sockaddr_in,long) ;
 int FUNC_8 (struct sockaddr_in,long) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_3, char *VAR_4[])
{
 struct sockaddr_in VAR_5;
 long VAR_6, VAR_7;
 char *VAR_8;

 if (VAR_3 < 2)
  FUNC_9();
 if (FUNC_4(VAR_4[1], "client") == 0) {
  if (VAR_3 != 5)
   FUNC_9();

  FUNC_0(&VAR_5, sizeof(VAR_5));
  VAR_5.sin_len = sizeof(VAR_5);
  VAR_5.sin_family = VAR_0;

  if (FUNC_3(VAR_4[2], &VAR_5.sin_addr) != 1)
   FUNC_1(-1, "%s: %s", VAR_4[2], FUNC_5(VAR_1));

  VAR_6 = FUNC_6(VAR_4[3], &VAR_8, 10);
  if (VAR_6 < 1 || VAR_6 > 65535 || *VAR_8 != '\0')
   FUNC_9();
  VAR_5.sin_port = FUNC_2(VAR_6);

  VAR_7 = FUNC_6(VAR_4[4], &VAR_8, 10);
  if (*VAR_8 != '\0')
   FUNC_9();

  FUNC_7(VAR_5, VAR_7);

 } else if (FUNC_4(VAR_4[1], "server") == 0) {
  if (VAR_3 != 4)
   FUNC_9();

  FUNC_0(&VAR_5, sizeof(VAR_5));
  VAR_5.sin_len = sizeof(VAR_5);
  VAR_5.sin_family = VAR_0;
  VAR_5.sin_addr.s_addr = VAR_2;

  VAR_6 = FUNC_6(VAR_4[2], &VAR_8, 10);
  if (VAR_6 < 1 || VAR_6 > 65535 || *VAR_8 != '\0')
   FUNC_9();
  VAR_5.sin_port = FUNC_2(VAR_6);

  VAR_7 = FUNC_6(VAR_4[3], &VAR_8, 10);
  if (*VAR_8 != '\0')
   FUNC_9();

  FUNC_8(VAR_5, VAR_7);
 } else
  FUNC_9();

 return (0);
}
