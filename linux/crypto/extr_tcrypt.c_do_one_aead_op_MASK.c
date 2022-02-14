
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_wait {int dummy; } ;
struct TYPE_2__ {struct crypto_wait* data; } ;
struct aead_request {TYPE_1__ base; } ;


 int FUNC_0 (int,struct crypto_wait*) ;

__attribute__((used)) static inline int FUNC_1(struct aead_request *VAR_0, int VAR_1)
{
 struct crypto_wait *VAR_2 = VAR_0->base.data;

 return FUNC_0(VAR_1, VAR_2);
}
