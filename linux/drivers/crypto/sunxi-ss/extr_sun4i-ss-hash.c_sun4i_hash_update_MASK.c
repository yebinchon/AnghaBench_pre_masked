
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_req_ctx {int flags; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 struct sun4i_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;

int FUNC_2(struct ahash_request *VAR_1)
{
 struct sun4i_req_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->flags = VAR_0;
 return FUNC_1(VAR_1);
}
