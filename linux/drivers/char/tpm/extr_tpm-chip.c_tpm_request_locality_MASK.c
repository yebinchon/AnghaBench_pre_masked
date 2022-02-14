
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_chip {int locality; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* request_locality ) (struct tpm_chip*,int ) ;} ;


 int FUNC_0 (struct tpm_chip*,int ) ;

__attribute__((used)) static int FUNC_1(struct tpm_chip *VAR_0)
{
 int VAR_1;

 if (!VAR_0->ops->request_locality)
  return 0;

 VAR_1 = VAR_0->ops->request_locality(VAR_0, 0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_0->locality = VAR_1;
 return 0;
}
