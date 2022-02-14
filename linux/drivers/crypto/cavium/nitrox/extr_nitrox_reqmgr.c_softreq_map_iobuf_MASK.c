
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_crypto_request {int dummy; } ;
struct nitrox_softreq {int dummy; } ;


 int FUNC_0 (struct nitrox_softreq*,struct se_crypto_request*) ;
 int FUNC_1 (struct nitrox_softreq*,struct se_crypto_request*) ;
 int FUNC_2 (struct nitrox_softreq*) ;

__attribute__((used)) static inline int FUNC_3(struct nitrox_softreq *VAR_0,
        struct se_crypto_request *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0);

 return VAR_2;
}
