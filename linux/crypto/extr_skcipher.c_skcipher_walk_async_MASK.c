
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_walk {int buffers; int flags; } ;
struct skcipher_request {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct skcipher_walk*,struct skcipher_request*) ;

int FUNC_2(struct skcipher_walk *VAR_1,
   struct skcipher_request *VAR_2)
{
 VAR_1->flags |= VAR_0;

 FUNC_0(&VAR_1->buffers);

 return FUNC_1(VAR_1, VAR_2);
}
