
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {struct i5100_priv* pvt_info; } ;
struct i5100_priv {int inject_hlinesel; int inject_eccmask1; int inject_deviceptr2; int inject_deviceptr1; scalar_t__ inject_channel; int einj; int mc; int inject_eccmask2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_6)
{
 struct i5100_priv *VAR_7 = VAR_6->pvt_info;
 u32 VAR_8;
 u16 VAR_9;
 VAR_8 = ((VAR_7->inject_hlinesel & 0x3) << 28) |
  VAR_5 |
  ((VAR_7->inject_eccmask1 & 0xffff) << 10) |
  ((VAR_7->inject_deviceptr2 & 0x1f) << 5) |
  (VAR_7->inject_deviceptr1 & 0x1f);




 VAR_9 = VAR_7->inject_eccmask2;

 if (VAR_7->inject_channel == 0) {
  FUNC_1(VAR_7->mc, VAR_1, VAR_8);
  FUNC_2(VAR_7->mc, VAR_2, VAR_9);
 } else {
  FUNC_1(VAR_7->mc, VAR_3, VAR_8);
  FUNC_2(VAR_7->mc, VAR_4, VAR_9);
 }
 FUNC_0(VAR_7->einj, VAR_0, 0xaa);
 FUNC_0(VAR_7->einj, VAR_0, 0xab);
}
