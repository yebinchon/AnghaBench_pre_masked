
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int (* load_data ) (struct rk_crypto_info*,int ,int *) ;int sg_src; } ;


 int FUNC_0 (struct rk_crypto_info*) ;
 int FUNC_1 (struct rk_crypto_info*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct rk_crypto_info *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->load_data(VAR_0, VAR_0->sg_src, ((void*)0));
 if (!VAR_1)
  FUNC_0(VAR_0);
 return VAR_1;
}
