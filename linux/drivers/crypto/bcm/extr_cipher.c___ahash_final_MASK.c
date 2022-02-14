
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_reqctx_s {int is_final; } ;
struct ahash_request {int nbytes; } ;


 int FUNC_0 (struct ahash_request*) ;
 struct iproc_reqctx_s* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct iproc_reqctx_s *VAR_1 = FUNC_1(VAR_0);

 FUNC_2("ahash_final() nbytes:%u\n", VAR_0->nbytes);

 VAR_1->is_final = 1;

 return FUNC_0(VAR_0);
}
