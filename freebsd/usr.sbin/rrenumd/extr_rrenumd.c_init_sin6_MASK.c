
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_family; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (struct sockaddr_in6*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct sockaddr_in6 *VAR_1, const char *VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->sin6_len = sizeof(*VAR_1);
 VAR_1->sin6_family = VAR_0;
 if (FUNC_0(VAR_0, VAR_2, &VAR_1->sin6_addr) != 1)
  ;
}
