
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_crypto_request {int gfp; } ;
struct nitrox_kcrypt_request {int src; struct se_crypto_request creq; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct nitrox_kcrypt_request *VAR_1,
        int VAR_2, int VAR_3)
{
 struct se_crypto_request *VAR_4 = &VAR_1->creq;

 VAR_1->src = FUNC_0(VAR_2, VAR_3, VAR_4->gfp);
 if (!VAR_1->src)
  return -VAR_0;

 return 0;
}
