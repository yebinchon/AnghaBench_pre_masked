
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int remote_ipv6; int remote_ip; } ;


 char* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline char *FUNC_1 (struct connection *VAR_0) { return FUNC_0 (VAR_0->remote_ip, VAR_0->remote_ipv6); }
