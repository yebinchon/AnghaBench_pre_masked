
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cpuinfo_x86 {int x86; int x86_model; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct cpuinfo_x86 *VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6;
 u64 VAR_7;
 bool VAR_8;
 u32 VAR_9[VAR_1];

 if (VAR_3->x86 == 0x15 && VAR_4 == 4) {
  VAR_9[0] = 0x00000413;
  VAR_9[1] = 0xc0000408;
  VAR_6 = 2;
 } else if (VAR_3->x86 == 0x17 &&
     (VAR_3->x86_model >= 0x10 && VAR_3->x86_model <= 0x2F)) {

  if (FUNC_4(VAR_4) != VAR_2)
   return;

  VAR_9[0] = FUNC_1(VAR_4);
  VAR_6 = 1;
 } else {
  return;
 }

 FUNC_3(VAR_0, VAR_7);


 VAR_8 = !(VAR_7 & FUNC_0(18));
 if (VAR_8)
  FUNC_5(VAR_0, VAR_7 | FUNC_0(18));


 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_2(VAR_9[VAR_5], 62);


 if (VAR_8)
  FUNC_5(VAR_0, VAR_7);
}
