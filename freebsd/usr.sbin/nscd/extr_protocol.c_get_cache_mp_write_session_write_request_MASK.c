
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_mp_write_session_write_request {int dummy; } ;
struct comm_element {scalar_t__ type; struct cache_mp_write_session_write_request c_mp_ws_write_request; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cache_mp_write_session_write_request* (*) (struct comm_element*)) ;
 int FUNC_1 (struct cache_mp_write_session_write_request* (*) (struct comm_element*)) ;
 int FUNC_2 (int) ;

struct cache_mp_write_session_write_request *
FUNC_3(struct comm_element *VAR_1)
{

 FUNC_0(FUNC_3);
 FUNC_2(VAR_1->type == VAR_0);
 FUNC_1(FUNC_3);
 return (&VAR_1->c_mp_ws_write_request);
}
