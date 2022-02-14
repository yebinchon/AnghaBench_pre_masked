
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int cryptlen; int src; int iv; } ;
struct nitrox_kcrypt_request {int src; } ;


 int FUNC_0 (struct nitrox_kcrypt_request*,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct nitrox_kcrypt_request*,int,int,int ,int ) ;
 int FUNC_3 (int ) ;
 struct nitrox_kcrypt_request* FUNC_4 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_0, int VAR_1)
{
 struct nitrox_kcrypt_request *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = FUNC_3(VAR_0->src) + 1;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2->src, VAR_0->iv, VAR_1);
 FUNC_2(VAR_2, VAR_3, VAR_1, VAR_0->src,
          VAR_0->cryptlen);

 return 0;
}
