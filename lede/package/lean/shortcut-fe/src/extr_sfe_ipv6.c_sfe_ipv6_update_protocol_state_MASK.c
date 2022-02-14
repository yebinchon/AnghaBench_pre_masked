
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv6_connection {int dummy; } ;
struct sfe_connection_create {int protocol; } ;



 int FUNC_0 (struct sfe_ipv6_connection*,struct sfe_connection_create*) ;

__attribute__((used)) static void
FUNC_1(struct sfe_ipv6_connection *VAR_0,
          struct sfe_connection_create *VAR_1)
{
 switch (VAR_1->protocol) {
 case 128:
  FUNC_0(VAR_0, VAR_1);
  break;
 }
}
