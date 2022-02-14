
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tpm_chip *VAR_4, u8 VAR_5, unsigned long VAR_6,
    int *VAR_7)
{
 unsigned long VAR_8;


 *VAR_7 = FUNC_1(VAR_4);
 if ((*VAR_7 != 0xFF) && (*VAR_7 & VAR_5) == VAR_5)
  return 0;

 VAR_8 = VAR_3 + VAR_6;
 do {

  FUNC_2(VAR_2, VAR_1);
  *VAR_7 = FUNC_1(VAR_4);
  if ((*VAR_7 & VAR_5) == VAR_5)
   return 0;

 } while (FUNC_0(VAR_3, VAR_8));

 return -VAR_0;
}
