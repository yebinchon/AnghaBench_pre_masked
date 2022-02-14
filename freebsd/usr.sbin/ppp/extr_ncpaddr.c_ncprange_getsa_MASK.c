
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {void* ss_family; } ;
struct sockaddr_in6 {int sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin_addr; } ;
struct ncprange {int ncprange_family; int ncprange_ip6width; int ncprange_ip6addr; int ncprange_ip4mask; int ncprange_ip4addr; } ;




 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_storage*,char,int) ;

void
FUNC_2(const struct ncprange *VAR_1, struct sockaddr_storage *VAR_2,
               struct sockaddr_storage *VAR_3)
{
  struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_2;
  struct sockaddr_in *VAR_5 = (struct sockaddr_in *)VAR_3;

  struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *)VAR_2;
  struct sockaddr_in6 *VAR_7 = (struct sockaddr_in6 *)VAR_3;


  FUNC_1(VAR_2, '\0', sizeof(*VAR_2));
  if (VAR_3)
    FUNC_1(VAR_3, '\0', sizeof(*VAR_3));

  switch (VAR_1->ncprange_family) {
  case 129:
    VAR_4->sin_family = 129;
    VAR_4->sin_len = sizeof(*VAR_4);
    VAR_4->sin_addr = VAR_1->ncprange_ip4addr;
    if (VAR_5) {
      VAR_5->sin_family = 129;
      VAR_5->sin_len = sizeof(*VAR_4);
      VAR_5->sin_addr = VAR_1->ncprange_ip4mask;
    }
    break;


  case 128:
    VAR_6->sin6_family = 128;
    VAR_6->sin6_len = sizeof(*VAR_6);
    VAR_6->sin6_addr = VAR_1->ncprange_ip6addr;
    if (VAR_7) {
      VAR_7->sin6_family = 128;
      VAR_7->sin6_len = sizeof(*VAR_6);
      VAR_7->sin6_addr = FUNC_0(VAR_1->ncprange_ip6width);
    }
    break;


  default:
    VAR_2->ss_family = VAR_0;
    if (VAR_3)
      VAR_3->ss_family = VAR_0;
    break;
  }
}
