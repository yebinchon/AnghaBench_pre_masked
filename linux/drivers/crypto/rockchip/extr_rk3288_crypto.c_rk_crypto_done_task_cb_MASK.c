
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {scalar_t__ err; int async_req; int (* complete ) (int ,scalar_t__) ;scalar_t__ (* update ) (struct rk_crypto_info*) ;} ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct rk_crypto_info*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct rk_crypto_info *VAR_1 = (struct rk_crypto_info *)VAR_0;

 if (VAR_1->err) {
  VAR_1->complete(VAR_1->async_req, VAR_1->err);
  return;
 }

 VAR_1->err = VAR_1->update(VAR_1);
 if (VAR_1->err)
  VAR_1->complete(VAR_1->async_req, VAR_1->err);
}
