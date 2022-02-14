
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {unsigned long timeout_a; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct tpm_chip*,int) ;
 int FUNC_2 (int ,int *,int) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 u8 VAR_8 = VAR_1;

 if (FUNC_1(VAR_5, VAR_6))
  return VAR_6;

 FUNC_2(FUNC_0(VAR_6), &VAR_8, 1);


 VAR_7 = VAR_4 + VAR_5->timeout_a;
 do {
  if (FUNC_1(VAR_5, VAR_6))
   return VAR_6;
  FUNC_4(VAR_3, VAR_2);
 } while (FUNC_3(VAR_4, VAR_7));

 return -VAR_0;
}
