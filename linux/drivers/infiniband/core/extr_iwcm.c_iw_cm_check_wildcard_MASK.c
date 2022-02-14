
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sockaddr_storage *VAR_3,
     struct sockaddr_storage *VAR_4,
     struct sockaddr_storage *VAR_5)
{
 if (VAR_3->ss_family == VAR_0) {
  struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_3;

  if (VAR_6->sin_addr.s_addr == FUNC_0(VAR_1)) {
   struct sockaddr_in *VAR_7 =
    (struct sockaddr_in *)VAR_4;
   struct sockaddr_in *VAR_8 =
    (struct sockaddr_in *)VAR_5;

   VAR_8->sin_addr = VAR_7->sin_addr;
  }
 } else {
  struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *)VAR_3;

  if (FUNC_1(&VAR_9->sin6_addr) == VAR_2) {
   struct sockaddr_in6 *VAR_10 =
    (struct sockaddr_in6 *)VAR_4;
   struct sockaddr_in6 *VAR_11 =
    (struct sockaddr_in6 *)VAR_5;

   VAR_11->sin6_addr = VAR_10->sin6_addr;
  }
 }
}
