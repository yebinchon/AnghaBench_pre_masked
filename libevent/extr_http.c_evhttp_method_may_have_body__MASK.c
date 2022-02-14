
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_connection {int dummy; } ;
typedef int ev_uint16_t ;
typedef enum evhttp_cmd_type { ____Placeholder_evhttp_cmd_type } evhttp_cmd_type ;


 int VAR_0 ;
 int FUNC_0 (struct evhttp_connection*,int,int*) ;

__attribute__((used)) static int
FUNC_1(struct evhttp_connection *VAR_1, enum evhttp_cmd_type VAR_2)
{
 ev_uint16_t VAR_3;
 FUNC_0(VAR_1, VAR_2, &VAR_3);
 return (VAR_3 & VAR_0) ? 1 : 0;
}
