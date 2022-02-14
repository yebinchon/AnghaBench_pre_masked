
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_cipher_req {int dummy; } ;
struct aead_request {int base; } ;


 int VAR_0 ;
 struct safexcel_cipher_req* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *,struct safexcel_cipher_req*,int ) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_1)
{
 struct safexcel_cipher_req *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(&VAR_1->base, VAR_2, VAR_0);
}
