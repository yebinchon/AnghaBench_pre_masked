
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u_short ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef int token_t ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

token_t *
FUNC_6(u_short VAR_5, u_short VAR_6,
    struct sockaddr *VAR_7, struct sockaddr *VAR_8)
{
 token_t *VAR_9;
 u_char *VAR_10 = ((void*)0);
 struct sockaddr_in *VAR_11;
 struct sockaddr_in6 *VAR_12;

 if (VAR_5 == VAR_0)
  FUNC_3(VAR_9, VAR_10, sizeof(u_char) +
      5 * sizeof(u_int16_t) + 2 * sizeof(u_int32_t));
 else if (VAR_5 == VAR_1)
  FUNC_3(VAR_9, VAR_10, sizeof(u_char) +
      5 * sizeof(u_int16_t) + 8 * sizeof(u_int32_t));
 else
  return (((void*)0));

 FUNC_1(VAR_10, VAR_2);
 FUNC_2(VAR_10, FUNC_4(VAR_5));
 FUNC_2(VAR_10, FUNC_5(VAR_6));
 if (VAR_5 == VAR_0) {
  FUNC_2(VAR_10, VAR_3);
  VAR_11 = (struct sockaddr_in *)VAR_7;
  FUNC_0(VAR_10, &VAR_11->sin_port, sizeof(uint16_t));
  FUNC_0(VAR_10, &VAR_11->sin_addr.s_addr, sizeof(uint32_t));
  VAR_11 = (struct sockaddr_in *)VAR_8;
  FUNC_0(VAR_10, &VAR_11->sin_port, sizeof(uint16_t));
  FUNC_0(VAR_10, &VAR_11->sin_addr.s_addr, sizeof(uint32_t));
 } else {
  FUNC_2(VAR_10, VAR_4);
  VAR_12 = (struct sockaddr_in6 *)VAR_7;
  FUNC_0(VAR_10, &VAR_12->sin6_port, sizeof(uint16_t));
  FUNC_0(VAR_10, &VAR_12->sin6_addr, 4 * sizeof(uint32_t));
  VAR_12 = (struct sockaddr_in6 *)VAR_8;
  FUNC_0(VAR_10, &VAR_12->sin6_port, sizeof(uint16_t));
  FUNC_0(VAR_10, &VAR_12->sin6_addr, 4 * sizeof(uint32_t));
 }

 return (VAR_9);
}
