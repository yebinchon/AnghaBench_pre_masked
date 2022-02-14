
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int (* enqueue ) (struct rk_crypto_info*,int *) ;int align_size; } ;
struct ablkcipher_request {int base; int nbytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rk_crypto_info*,int *) ;

__attribute__((used)) static int FUNC_2(struct rk_crypto_info *VAR_1,
    struct ablkcipher_request *VAR_2)
{
 if (!FUNC_0(VAR_2->nbytes, VAR_1->align_size))
  return -VAR_0;
 else
  return VAR_1->enqueue(VAR_1, &VAR_2->base);
}
