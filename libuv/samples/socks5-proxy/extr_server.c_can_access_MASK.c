
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int const s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int server_ctx ;
typedef int client_ctx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const) ;

int FUNC_1(const server_ctx *VAR_2,
               const client_ctx *VAR_3,
               const struct sockaddr *VAR_4) {
  const struct sockaddr_in6 *VAR_5;
  const struct sockaddr_in *VAR_6;
  const uint32_t *VAR_7;
  uint32_t VAR_8;
  uint32_t VAR_9;
  uint32_t VAR_10;
  uint32_t VAR_11;




  if (VAR_4->sa_family == VAR_0) {
    VAR_6 = (const struct sockaddr_in *) VAR_4;
    VAR_11 = FUNC_0(VAR_6->sin_addr.s_addr);
    return (VAR_11 >> 24) != 0x7F;
  }

  if (VAR_4->sa_family == VAR_1) {
    VAR_5 = (const struct sockaddr_in6 *) VAR_4;
    VAR_7 = (const uint32_t *) &VAR_5->sin6_addr.s6_addr;
    VAR_8 = FUNC_0(VAR_7[0]);
    VAR_9 = FUNC_0(VAR_7[1]);
    VAR_10 = FUNC_0(VAR_7[2]);
    VAR_11 = FUNC_0(VAR_7[3]);
    if (VAR_8 == 0 && VAR_9 == 0 && VAR_10 == 0 && VAR_11 == 1) {
      return 0;
    }
    if (VAR_8 == 0 && VAR_9 == 0 && VAR_10 == 0xFFFF && (VAR_11 >> 24) == 0x7F) {
      return 0;
    }
    return 1;
  }

  return 0;
}
