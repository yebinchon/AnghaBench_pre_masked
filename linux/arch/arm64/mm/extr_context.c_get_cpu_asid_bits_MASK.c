
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static u32 FUNC_4(void)
{
 u32 VAR_2;
 int VAR_3 = FUNC_0(FUNC_2(VAR_1),
      VAR_0);

 switch (VAR_3) {
 default:
  FUNC_1("CPU%d: Unknown ASID size (%d); assuming 8-bit\n",
     FUNC_3(), VAR_3);

 case 0:
  VAR_2 = 8;
  break;
 case 2:
  VAR_2 = 16;
 }

 return VAR_2;
}
