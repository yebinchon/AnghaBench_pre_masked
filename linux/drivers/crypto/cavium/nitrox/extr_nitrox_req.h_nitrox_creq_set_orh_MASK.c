
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_crypto_request {int * orh; } ;
struct nitrox_kcrypt_request {scalar_t__ dst; struct se_crypto_request creq; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct nitrox_kcrypt_request *VAR_0)
{
 struct se_crypto_request *VAR_1 = &VAR_0->creq;

 VAR_1->orh = (u64 *)(VAR_0->dst);
 FUNC_0(VAR_1->orh);
}
