
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_chip {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* cmd_ready ) (struct tpm_chip*) ;} ;


 int FUNC_0 (struct tpm_chip*) ;

__attribute__((used)) static int FUNC_1(struct tpm_chip *VAR_0)
{
 if (!VAR_0->ops->cmd_ready)
  return 0;

 return VAR_0->ops->cmd_ready(VAR_0);
}
