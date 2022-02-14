
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct f71805f_data {int* fan_ctrl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct f71805f_data*,int ) ;
 int FUNC_2 (struct f71805f_data*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct f71805f_data *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if ((VAR_3 & 0x41) != 0x01) {
  FUNC_3("Starting monitoring operations\n");
  FUNC_2(VAR_2, VAR_0, (VAR_3 | 0x01) & ~0x40);
 }





 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_2->fan_ctrl[VAR_4] = FUNC_1(VAR_2,
        FUNC_0(VAR_4));




  if (VAR_2->fan_ctrl[VAR_4] & VAR_1) {
   VAR_2->fan_ctrl[VAR_4] &= ~VAR_1;
   FUNC_2(VAR_2, FUNC_0(VAR_4),
           VAR_2->fan_ctrl[VAR_4]);
  }
 }
}
