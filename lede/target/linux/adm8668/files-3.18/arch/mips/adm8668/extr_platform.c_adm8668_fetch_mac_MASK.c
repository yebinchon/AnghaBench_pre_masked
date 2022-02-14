
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tulip_platform_data {int mac; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct tulip_platform_data VAR_4 ;
 struct tulip_platform_data VAR_5 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_6)
{
 u8 *VAR_7;
 u32 VAR_8;
 struct tulip_platform_data *VAR_9;

 switch (VAR_6) {
 case -1:
 case 0:
  VAR_8 = VAR_2;
  VAR_9 = &VAR_4;
  break;
 case 1:
  VAR_8 = VAR_3;
  VAR_9 = &VAR_5;
  break;
 default:
  FUNC_2("unsupported ethernet unit: %d\n", VAR_6);
  return;
 }

 VAR_7 = (u8 *)(FUNC_0(VAR_0) + VAR_1 + VAR_8);

 FUNC_1(VAR_9->mac, VAR_7, sizeof(VAR_9->mac));
}
