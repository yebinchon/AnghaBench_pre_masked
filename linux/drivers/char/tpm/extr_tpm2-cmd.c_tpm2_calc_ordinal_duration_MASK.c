
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_chip {unsigned long* duration; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

unsigned long FUNC_2(struct tpm_chip *VAR_2, u32 VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4 != VAR_1)
  return VAR_2->duration[VAR_4];
 else
  return FUNC_0(VAR_0);
}
