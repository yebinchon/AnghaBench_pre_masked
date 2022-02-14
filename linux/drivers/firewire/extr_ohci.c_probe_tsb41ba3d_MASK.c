
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_ohci {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct fw_ohci*,int,int) ;
 int FUNC_2 (struct fw_ohci*,int) ;

__attribute__((used)) static int FUNC_3(struct fw_ohci *VAR_1)
{

 static const u8 VAR_2[] = { 0x08, 0x00, 0x28, 0x83, 0x30, 0x05, };
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_1, 2);
 if (VAR_3 < 0)
  return VAR_3;
 if ((VAR_3 & VAR_0) != VAR_0)
  return 0;

 for (VAR_4 = FUNC_0(VAR_2) - 1; VAR_4 >= 0; VAR_4--) {
  VAR_3 = FUNC_1(VAR_1, 1, VAR_4 + 10);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_3 != VAR_2[VAR_4])
   return 0;
 }
 return 1;
}
