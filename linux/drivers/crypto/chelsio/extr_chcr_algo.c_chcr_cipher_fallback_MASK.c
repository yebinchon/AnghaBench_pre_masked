
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int FUNC_0 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;
 int FUNC_5 (int ,struct crypto_sync_skcipher*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct crypto_sync_skcipher *VAR_1,
    u32 VAR_2,
    struct scatterlist *VAR_3,
    struct scatterlist *VAR_4,
    unsigned int VAR_5,
    u8 *VAR_6,
    unsigned short VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_0, VAR_1);

 FUNC_5(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_2, ((void*)0), ((void*)0));
 FUNC_4(VAR_0, VAR_3, VAR_4,
       VAR_5, VAR_6);

 VAR_8 = VAR_7 ? FUNC_1(VAR_0) :
  FUNC_2(VAR_0);
 FUNC_6(VAR_0);

 return VAR_8;

}
