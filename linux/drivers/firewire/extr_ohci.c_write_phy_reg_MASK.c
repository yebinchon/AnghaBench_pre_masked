
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fw_ohci const*,char*,int,int) ;
 int FUNC_4 (struct fw_ohci const*,int ) ;
 int FUNC_5 (struct fw_ohci const*,int ,int ) ;

__attribute__((used)) static int FUNC_6(const struct fw_ohci *VAR_4, int VAR_5, u32 VAR_6)
{
 int VAR_7;

 FUNC_5(VAR_4, VAR_2,
    FUNC_0(VAR_5, VAR_6));
 for (VAR_7 = 0; VAR_7 < 3 + 100; VAR_7++) {
  VAR_6 = FUNC_4(VAR_4, VAR_2);
  if (!~VAR_6)
   return -VAR_1;

  if (!(VAR_6 & VAR_3))
   return 0;

  if (VAR_7 >= 3)
   FUNC_2(1);
 }
 FUNC_3(VAR_4, "failed to write phy reg %d, val %u\n", VAR_5, VAR_6);
 FUNC_1();

 return -VAR_0;
}
