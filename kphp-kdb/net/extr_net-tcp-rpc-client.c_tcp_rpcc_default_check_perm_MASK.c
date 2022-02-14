
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int flags; int remote_ip; int our_ip; scalar_t__ remote_ipv6; scalar_t__ our_ipv6; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1 (struct connection *VAR_2) {
  int VAR_3 = -1, VAR_4 = -1;
  if (VAR_2->flags & VAR_0) {
    if (FUNC_0 (VAR_2->our_ipv6) && FUNC_0 (VAR_2->remote_ipv6)) {
      VAR_3 = 0;
    } else if (*((int *)(VAR_2->our_ipv6)) != *((int *)(VAR_2->remote_ipv6))) {
      return 0;
    } else {
      VAR_3 = ((int *)(VAR_2->our_ipv6))[1] ^ ((int *)(VAR_2->remote_ipv6))[1];
      VAR_4 = 0xffff;
    }
  } else {
    if ((VAR_2->remote_ip & 0xff000000) != 0x0a000000 && (VAR_2->remote_ip & 0xff000000) != 0x7f000000) {
      return 0;
    }
    VAR_3 = (VAR_2->our_ip ^ VAR_2->remote_ip);
    VAR_4 = 0xffff0000;
  }
  if (VAR_1 <= 0) {
    return (VAR_3 & VAR_4) ? 0 : 1;
  }
  return (VAR_3 & VAR_4) ? 2 : 3;
}
