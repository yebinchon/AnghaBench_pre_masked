
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin_addr; } ;
struct ncpaddr {int ncpaddr_family; int ncpaddr_ip6addr; int ncpaddr_ip4addr; } ;




 int VAR_0 ;
 int FUNC_0 (struct sockaddr_storage*,char,int) ;

void
FUNC_1(const struct ncpaddr *VAR_1, struct sockaddr_storage *VAR_2)
{
  struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_2;

  struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6 *)VAR_2;


  FUNC_0(VAR_2, '\0', sizeof(*VAR_2));

  switch (VAR_1->ncpaddr_family) {
  case 129:
    VAR_3->sin_family = 129;
    VAR_3->sin_len = sizeof(*VAR_3);
    VAR_3->sin_addr = VAR_1->ncpaddr_ip4addr;
    break;


  case 128:
    VAR_4->sin6_family = 128;
    VAR_4->sin6_len = sizeof(*VAR_4);
    VAR_4->sin6_addr = VAR_1->ncpaddr_ip6addr;
    break;


  default:
    VAR_2->ss_family = VAR_0;
    break;
  }
}
