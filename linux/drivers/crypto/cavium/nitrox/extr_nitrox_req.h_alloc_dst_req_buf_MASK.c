
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_crypto_request {int gfp; } ;
struct nitrox_kcrypt_request {int dst; struct se_crypto_request creq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct nitrox_kcrypt_request *VAR_3,
        int VAR_4)
{
 int VAR_5 = VAR_2 + VAR_0;
 struct se_crypto_request *VAR_6 = &VAR_3->creq;

 VAR_3->dst = FUNC_0(VAR_4, VAR_5, VAR_6->gfp);
 if (!VAR_3->dst)
  return -VAR_1;

 return 0;
}
