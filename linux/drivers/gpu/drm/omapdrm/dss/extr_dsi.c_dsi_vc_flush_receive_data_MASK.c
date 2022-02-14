
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct dsi_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct dsi_data*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct dsi_data*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct dsi_data*,int) ;

__attribute__((used)) static u16 FUNC_8(struct dsi_data *VAR_4, int VAR_5)
{

 while (FUNC_4(VAR_4, FUNC_0(VAR_5), 20, 20)) {
  u32 VAR_6;
  u8 VAR_7;
  VAR_6 = FUNC_5(VAR_4, FUNC_1(VAR_5));
  FUNC_2("\trawval %#08x\n", VAR_6);
  VAR_7 = FUNC_3(VAR_6, 5, 0);
  if (VAR_7 == VAR_0) {
   u16 VAR_8 = FUNC_3(VAR_6, 23, 8);
   FUNC_6(VAR_8);
  } else if (VAR_7 == VAR_2) {
   FUNC_2("\tDCS short response, 1 byte: %#x\n",
     FUNC_3(VAR_6, 23, 8));
  } else if (VAR_7 == VAR_3) {
   FUNC_2("\tDCS short response, 2 byte: %#x\n",
     FUNC_3(VAR_6, 23, 8));
  } else if (VAR_7 == VAR_1) {
   FUNC_2("\tDCS long response, len %d\n",
     FUNC_3(VAR_6, 23, 8));
   FUNC_7(VAR_4, VAR_5);
  } else {
   FUNC_2("\tunknown datatype 0x%02x\n", VAR_7);
  }
 }
 return 0;
}
