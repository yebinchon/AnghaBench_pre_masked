
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_tis_data {int clkrun_enabled; scalar_t__ ilb_base_addr; } ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tpm_tis_data* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct tpm_chip *VAR_3, bool VAR_4)
{
 struct tpm_tis_data *VAR_5 = FUNC_1(&VAR_3->dev);
 u32 VAR_6;

 if (!FUNC_0(VAR_0) || !FUNC_4() ||
     !VAR_5->ilb_base_addr)
  return;

 if (VAR_4) {
  VAR_5->clkrun_enabled++;
  if (VAR_5->clkrun_enabled > 1)
   return;
  VAR_6 = FUNC_2(VAR_5->ilb_base_addr + VAR_2);


  VAR_6 &= ~VAR_1;
  FUNC_3(VAR_6, VAR_5->ilb_base_addr + VAR_2);





  FUNC_5(0xCC, 0x80);
 } else {
  VAR_5->clkrun_enabled--;
  if (VAR_5->clkrun_enabled)
   return;

  VAR_6 = FUNC_2(VAR_5->ilb_base_addr + VAR_2);


  VAR_6 |= VAR_1;
  FUNC_3(VAR_6, VAR_5->ilb_base_addr + VAR_2);





  FUNC_5(0xCC, 0x80);
 }
}
