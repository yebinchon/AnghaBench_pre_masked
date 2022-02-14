
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_ohci*,int ) ;
 int FUNC_2 (struct fw_ohci*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fw_ohci *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 FUNC_2(VAR_4, VAR_2, VAR_3);
 for (VAR_6 = 0; VAR_6 < 500; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  if (!~VAR_5)
   return -VAR_1;

  if (!(VAR_5 & VAR_3))
   return 0;

  FUNC_0(1);
 }

 return -VAR_0;
}
