
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {int total; } ;
struct aead_request {int cryptlen; } ;


 int FUNC_0 (struct skcipher_walk*,struct aead_request*,int) ;

int FUNC_1(struct skcipher_walk *VAR_0,
          struct aead_request *VAR_1, bool VAR_2)
{
 VAR_0->total = VAR_1->cryptlen;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
