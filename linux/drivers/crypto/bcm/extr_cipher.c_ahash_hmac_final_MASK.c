
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int nbytes; } ;


 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 FUNC_1("ahash_hmac_final() nbytes:%u\n", VAR_0->nbytes);

 return FUNC_0(VAR_0);
}
