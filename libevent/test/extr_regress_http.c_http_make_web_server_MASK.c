
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_server {scalar_t__ ssl; int port; int http; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 struct http_server *VAR_5 = (struct http_server *)VAR_4;
 VAR_5->http = FUNC_0(&VAR_5->port, VAR_1, VAR_5->ssl ? VAR_0 : 0);
}
