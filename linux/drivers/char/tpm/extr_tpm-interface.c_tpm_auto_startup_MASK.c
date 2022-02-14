
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_chip {int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_chip*) ;
 int FUNC_1 (struct tpm_chip*) ;

int FUNC_2(struct tpm_chip *VAR_2)
{
 int VAR_3;

 if (!(VAR_2->ops->flags & VAR_1))
  return 0;

 if (VAR_2->flags & VAR_0)
  VAR_3 = FUNC_1(VAR_2);
 else
  VAR_3 = FUNC_0(VAR_2);

 return VAR_3;
}
