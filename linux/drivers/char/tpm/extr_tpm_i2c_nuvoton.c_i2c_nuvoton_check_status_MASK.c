
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tpm_chip*) ;

__attribute__((used)) static bool FUNC_1(struct tpm_chip *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_1);
 return (VAR_4 != VAR_0) && ((VAR_4 & VAR_2) == VAR_3);
}
