
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_port; struct in6_addr sin6_addr; void* sin6_family; int sin6_scope_id; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int port; int scope_id; int ip6; int ip; } ;
typedef TYPE_2__ netadr_t ;
struct TYPE_7__ {struct in6_addr ipv6mr_multiaddr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static void FUNC_0( netadr_t *VAR_8, struct sockaddr *VAR_9 ) {
 if( VAR_8->type == VAR_3 ) {
  ((struct sockaddr_in *)VAR_9)->sin_family = VAR_0;
  ((struct sockaddr_in *)VAR_9)->sin_port = VAR_8->port;
  ((struct sockaddr_in *)VAR_9)->sin_addr.s_addr = VAR_2;
 }
 else if( VAR_8->type == VAR_4 ) {
  ((struct sockaddr_in *)VAR_9)->sin_family = VAR_0;
  ((struct sockaddr_in *)VAR_9)->sin_addr.s_addr = *(int *)&VAR_8->ip;
  ((struct sockaddr_in *)VAR_9)->sin_port = VAR_8->port;
 }
 else if( VAR_8->type == VAR_5 ) {
  ((struct sockaddr_in6 *)VAR_9)->sin6_family = VAR_1;
  ((struct sockaddr_in6 *)VAR_9)->sin6_addr = * ((struct in6_addr *) &VAR_8->ip6);
  ((struct sockaddr_in6 *)VAR_9)->sin6_port = VAR_8->port;
  ((struct sockaddr_in6 *)VAR_9)->sin6_scope_id = VAR_8->scope_id;
 }
 else if(VAR_8->type == VAR_6)
 {
  ((struct sockaddr_in6 *)VAR_9)->sin6_family = VAR_1;
  ((struct sockaddr_in6 *)VAR_9)->sin6_addr = VAR_7.ipv6mr_multiaddr;
  ((struct sockaddr_in6 *)VAR_9)->sin6_port = VAR_8->port;
 }
}
