
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mii_bus {int dummy; } ;


 int FUNC_0 (struct mii_bus*,int) ;
 int FUNC_1 (struct mii_bus*) ;

__attribute__((used)) static void FUNC_2(struct mii_bus *VAR_0, int VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;


 FUNC_1(VAR_0);
 for (VAR_4 = 0; VAR_4 < 40; VAR_4++) {
  FUNC_0(VAR_0, 1);
 }


 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 1);

 FUNC_0(VAR_0, VAR_1);
 FUNC_0(VAR_0, !VAR_1);


 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  FUNC_0(VAR_0, (VAR_2 & 0x10) != 0);
  VAR_2 <<= 1;
 }


 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  FUNC_0(VAR_0, (VAR_3 & 0x10) != 0);
  VAR_3 <<= 1;
 }
}
