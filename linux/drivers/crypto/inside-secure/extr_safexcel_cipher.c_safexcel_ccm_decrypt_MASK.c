
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_cipher_req {int dummy; } ;
struct aead_request {int* iv; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct safexcel_cipher_req* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *,struct safexcel_cipher_req*,int ) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_2)
{
 struct safexcel_cipher_req *VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->iv[0] < 1 || VAR_2->iv[0] > 7)
  return -VAR_0;

 return FUNC_1(&VAR_2->base, VAR_3, VAR_1);
}
