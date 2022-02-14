
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {char sin6_addr; } ;
struct sockaddr_in {char sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct drbd_connection {scalar_t__ my_addr_len; scalar_t__ peer_addr_len; int peer_addr; } ;




 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct drbd_connection *VAR_0, char **VAR_1)
{
 char *VAR_2;


 if (VAR_0->my_addr_len == 0 || VAR_0->peer_addr_len == 0)
  return;

 switch (((struct sockaddr *)&VAR_0->peer_addr)->sa_family) {
 case 128:
  VAR_2 = "ipv6";
  FUNC_0(VAR_1[4], 60, "DRBD_PEER_ADDRESS=%pI6",
    &((struct sockaddr_in6 *)&VAR_0->peer_addr)->sin6_addr);
  break;
 case 129:
  VAR_2 = "ipv4";
  FUNC_0(VAR_1[4], 60, "DRBD_PEER_ADDRESS=%pI4",
    &((struct sockaddr_in *)&VAR_0->peer_addr)->sin_addr);
  break;
 default:
  VAR_2 = "ssocks";
  FUNC_0(VAR_1[4], 60, "DRBD_PEER_ADDRESS=%pI4",
    &((struct sockaddr_in *)&VAR_0->peer_addr)->sin_addr);
 }
 FUNC_0(VAR_1[3], 20, "DRBD_PEER_AF=%s", VAR_2);
}
