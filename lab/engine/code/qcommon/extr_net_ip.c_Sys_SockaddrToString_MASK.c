
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sockaddr*,int,char*,int,int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(char *VAR_2, int VAR_3, struct sockaddr *VAR_4)
{
 socklen_t VAR_5;

 if (VAR_4->sa_family == VAR_0)
  VAR_5 = sizeof(struct sockaddr_in6);
 else
  VAR_5 = sizeof(struct sockaddr_in);

 if(FUNC_0(VAR_4, VAR_5, VAR_2, VAR_3, ((void*)0), 0, VAR_1) && VAR_3 > 0)
  *VAR_2 = '\0';
}
