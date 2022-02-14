
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tpm_chip {int* duration; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

unsigned long FUNC_0(struct tpm_chip *VAR_4, u32 VAR_5)
{
 int VAR_6 = VAR_2;
 int VAR_7 = 0;





 if (VAR_5 < VAR_1)
  VAR_6 = VAR_3[VAR_5];

 if (VAR_6 != VAR_2)
  VAR_7 = VAR_4->duration[VAR_6];
 if (VAR_7 <= 0)
  return 2 * 60 * VAR_0;
 else
  return VAR_7;
}
