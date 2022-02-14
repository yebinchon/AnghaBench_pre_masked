
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipherd_instance_ctx {int spawn; } ;
struct skcipher_instance {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct skcipher_instance*) ;
 struct skcipherd_instance_ctx* FUNC_2 (struct skcipher_instance*) ;

__attribute__((used)) static void FUNC_3(struct skcipher_instance *VAR_0)
{
 struct skcipherd_instance_ctx *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->spawn);
 FUNC_1(VAR_0);
}
