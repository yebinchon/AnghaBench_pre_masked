
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {int dummy; } ;
struct skcipher_request {int dummy; } ;


 int FUNC_0 (struct skcipher_request*,struct skcipher_walk*) ;
 int FUNC_1 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_2(struct skcipher_request *VAR_0)
{
 struct skcipher_walk VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1, VAR_0, 0);
 if (VAR_2)
  return VAR_2;
 return FUNC_0(VAR_0, &VAR_1);
}
