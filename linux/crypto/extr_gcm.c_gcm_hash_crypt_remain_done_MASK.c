
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {struct aead_request* data; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aead_request*,int) ;
 int FUNC_1 (struct aead_request*,int ) ;

__attribute__((used)) static void FUNC_2(struct crypto_async_request *VAR_1,
           int VAR_2)
{
 struct aead_request *VAR_3 = VAR_1->data;

 if (VAR_2)
  goto out;

 VAR_2 = FUNC_1(VAR_3, 0);
 if (VAR_2 == -VAR_0)
  return;

out:
 FUNC_0(VAR_3, VAR_2);
}
