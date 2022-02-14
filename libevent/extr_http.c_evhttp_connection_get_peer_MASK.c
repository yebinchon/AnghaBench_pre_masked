
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {char* address; int port; } ;
typedef int ev_uint16_t ;



void
FUNC_0(struct evhttp_connection *VAR_0,
    char **VAR_1, ev_uint16_t *VAR_2)
{
 *VAR_1 = VAR_0->address;
 *VAR_2 = VAR_0->port;
}
