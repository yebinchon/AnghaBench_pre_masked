
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* status ) (struct tpm_chip*) ;scalar_t__ (* req_canceled ) (struct tpm_chip*,int) ;} ;


 int FUNC_0 (struct tpm_chip*) ;
 scalar_t__ FUNC_1 (struct tpm_chip*,int) ;

__attribute__((used)) static bool FUNC_2(struct tpm_chip *VAR_0, u8 VAR_1,
    bool VAR_2, bool *VAR_3)
{
 u8 VAR_4 = VAR_0->ops->status(VAR_0);

 *VAR_3 = 0;
 if ((VAR_4 & VAR_1) == VAR_1)
  return 1;
 if (VAR_2 && VAR_0->ops->req_canceled(VAR_0, VAR_4)) {
  *VAR_3 = 1;
  return 1;
 }
 return 0;
}
