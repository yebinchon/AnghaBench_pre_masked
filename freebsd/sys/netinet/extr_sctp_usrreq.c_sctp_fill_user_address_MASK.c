
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int sa_len; } ;


 int FUNC_0 (struct sockaddr_storage*,struct sockaddr*,int ) ;
 scalar_t__ FUNC_1 (struct sockaddr_in6*,struct sockaddr_in6*) ;

__attribute__((used)) static uint32_t
FUNC_2(struct sockaddr_storage *VAR_0, struct sockaddr *VAR_1)
{






 FUNC_0(VAR_0, VAR_1, VAR_1->sa_len);
 return (0);
}
