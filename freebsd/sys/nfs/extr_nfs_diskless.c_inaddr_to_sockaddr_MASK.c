
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_1, struct sockaddr_in *VAR_2)
{
 u_int32_t VAR_3[4];
 char *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_2->sin_len = sizeof(*VAR_2);
 VAR_2->sin_family = VAR_0;

 if ((VAR_4 = FUNC_3(VAR_1)) == ((void*)0))
  return (1);
 VAR_5 = FUNC_4(VAR_4, "%d.%d.%d.%d", &VAR_3[0], &VAR_3[1], &VAR_3[2], &VAR_3[3]);
 FUNC_1(VAR_4);
 if (VAR_5 != 4)
  return (1);
 VAR_2->sin_addr.s_addr =
     FUNC_2((VAR_3[0] << 24) | (VAR_3[1] << 16) | (VAR_3[2] << 8) | VAR_3[3]);
 return (0);
}
