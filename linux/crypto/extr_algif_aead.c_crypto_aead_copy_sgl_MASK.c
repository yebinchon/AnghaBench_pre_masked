
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;
 int FUNC_4 (int ,struct crypto_sync_skcipher*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct crypto_sync_skcipher *VAR_2,
    struct scatterlist *VAR_3,
    struct scatterlist *VAR_4, unsigned int VAR_5)
{
 FUNC_0(VAR_1, VAR_2);

 FUNC_4(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_0,
          ((void*)0), ((void*)0));
 FUNC_3(VAR_1, VAR_3, VAR_4, VAR_5, ((void*)0));

 return FUNC_1(VAR_1);
}
