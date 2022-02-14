
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,int,int) ;
 scalar_t__ FUNC_3 (struct dsi_data*,int ,int,int) ;
 int FUNC_4 (struct dsi_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct dsi_data *VAR_0, int VAR_1)
{
 while (FUNC_3(VAR_0, FUNC_0(VAR_1), 20, 20)) {
  u32 VAR_2;
  VAR_2 = FUNC_4(VAR_0, FUNC_1(VAR_1));
  FUNC_2("\t\tb1 %#02x b2 %#02x b3 %#02x b4 %#02x\n",
    (VAR_2 >> 0) & 0xff,
    (VAR_2 >> 8) & 0xff,
    (VAR_2 >> 16) & 0xff,
    (VAR_2 >> 24) & 0xff);
 }
}
