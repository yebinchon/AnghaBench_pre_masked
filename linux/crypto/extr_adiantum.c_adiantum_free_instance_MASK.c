
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_instance {int dummy; } ;
struct adiantum_instance_ctx {int hash_spawn; int blockcipher_spawn; int streamcipher_spawn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct skcipher_instance*) ;
 struct adiantum_instance_ctx* FUNC_4 (struct skcipher_instance*) ;

__attribute__((used)) static void FUNC_5(struct skcipher_instance *VAR_0)
{
 struct adiantum_instance_ctx *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_1->streamcipher_spawn);
 FUNC_2(&VAR_1->blockcipher_spawn);
 FUNC_0(&VAR_1->hash_spawn);
 FUNC_3(VAR_0);
}
