
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpuinfo_x86 {int x86_phys_bits; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cpuinfo_x86*,int ) ;
 scalar_t__ FUNC_2 (struct cpuinfo_x86*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct cpuinfo_x86 *VAR_7)
{
 u64 VAR_8;
 if (FUNC_2(VAR_7, VAR_6) || FUNC_2(VAR_7, VAR_5)) {

  FUNC_4(VAR_3, VAR_8);
  if (!(VAR_8 & VAR_4))
   goto clear_all;






  VAR_7->x86_phys_bits -= (FUNC_3(0x8000001f) >> 6) & 0x3f;

  if (FUNC_0(VAR_0))
   goto clear_all;

  FUNC_4(VAR_1, VAR_8);
  if (!(VAR_8 & VAR_2))
   goto clear_sev;

  return;

clear_all:
  FUNC_1(VAR_7, VAR_6);
clear_sev:
  FUNC_1(VAR_7, VAR_5);
 }
}
