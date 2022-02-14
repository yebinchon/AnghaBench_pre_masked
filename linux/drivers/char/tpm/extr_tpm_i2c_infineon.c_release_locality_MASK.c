
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static void FUNC_3(struct tpm_chip *VAR_3, int VAR_4, int VAR_5)
{
 u8 VAR_6;
 if (FUNC_1(FUNC_0(VAR_4), &VAR_6, 1) < 0)
  return;

 if (VAR_5 || (VAR_6 & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  VAR_6 = VAR_0;
  FUNC_2(FUNC_0(VAR_4), &VAR_6, 1);
 }
}
