
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_scope_id; int sin6_port; int sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_5__ {int scope_id; int port; int ip6; int type; int ip; } ;
typedef TYPE_2__ netadr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1( struct sockaddr *VAR_4, netadr_t *VAR_5 ) {
 if (VAR_4->sa_family == VAR_0) {
  VAR_5->type = VAR_2;
  *(int *)&VAR_5->ip = ((struct sockaddr_in *)VAR_4)->sin_addr.s_addr;
  VAR_5->port = ((struct sockaddr_in *)VAR_4)->sin_port;
 }
 else if(VAR_4->sa_family == VAR_1)
 {
  VAR_5->type = VAR_3;
  FUNC_0(VAR_5->ip6, &((struct sockaddr_in6 *)VAR_4)->sin6_addr, sizeof(VAR_5->ip6));
  VAR_5->port = ((struct sockaddr_in6 *)VAR_4)->sin6_port;
  VAR_5->scope_id = ((struct sockaddr_in6 *)VAR_4)->sin6_scope_id;
 }
}
