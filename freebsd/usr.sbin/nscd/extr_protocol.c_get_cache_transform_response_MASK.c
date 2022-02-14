
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_transform_response {int dummy; } ;
struct comm_element {scalar_t__ type; struct cache_transform_response c_transform_response; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cache_transform_response* (*) (struct comm_element*)) ;
 int FUNC_1 (struct cache_transform_response* (*) (struct comm_element*)) ;
 int FUNC_2 (int) ;

struct cache_transform_response *
FUNC_3(struct comm_element *VAR_1)
{

 FUNC_0(FUNC_3);
 FUNC_2(VAR_1->type == VAR_0);
 FUNC_1(FUNC_3);
 return (&VAR_1->c_transform_response);
}
