
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_crypto_request {int * comp; } ;
struct nitrox_kcrypt_request {scalar_t__ dst; struct se_crypto_request creq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct nitrox_kcrypt_request *VAR_1)
{
 struct se_crypto_request *VAR_2 = &VAR_1->creq;

 VAR_2->comp = (u64 *)(VAR_1->dst + VAR_0);
 FUNC_0(VAR_2->comp);
}
