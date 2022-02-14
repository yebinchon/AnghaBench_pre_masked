
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int remote_ip; int our_ip; } ;



int FUNC_0 (struct connection *VAR_0) {
  if ((VAR_0->remote_ip & 0xff000000) != 0x0a000000 && (VAR_0->remote_ip & 0xff000000) != 0x7f000000) {
    return 0;
  }
  return ((VAR_0->our_ip ^ VAR_0->remote_ip) & 0xffff0000) ? 0 : 1;
}
