
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int our_ip; int remote_ip; } ;


 int FUNC_0 (struct connection*) ;

__attribute__((used)) static int FUNC_1 (struct connection *VAR_0) {
  if (VAR_0->our_ip == 0x7f000001 && VAR_0->remote_ip == 0x7f000001) {
    return 3;
  }
  return FUNC_0(VAR_0) & -2;
}
