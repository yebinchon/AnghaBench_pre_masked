
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_chip {int flags; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct tpm_chip*,int ) ;
 unsigned long FUNC_1 (struct tpm_chip*,int ) ;

unsigned long FUNC_2(struct tpm_chip *VAR_1, u32 VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_2);
}
