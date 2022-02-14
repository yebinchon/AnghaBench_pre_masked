
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_len; int sin_family; int sin_addr; } ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_addr const*,int *,int) ;
 scalar_t__ FUNC_1 (char**,int *) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct sockaddr_in *VAR_2, char *VAR_3, char *VAR_4,
    const struct in_addr *VAR_5)
{

 if (FUNC_1(&VAR_4, &VAR_2->sin_addr) == 0) {
  if (VAR_5 != ((void*)0) && *VAR_4 == '/')
   FUNC_0(VAR_5, &VAR_2->sin_addr, sizeof(struct in_addr));
  else
   return 0;
 } else {
  if (*VAR_4 != ':')
   return 0;
  VAR_4++;
 }

 VAR_2->sin_len = sizeof(struct sockaddr_in);
 VAR_2->sin_family = VAR_0;

 FUNC_2(VAR_3, VAR_4, VAR_1);
 return 1;
}
