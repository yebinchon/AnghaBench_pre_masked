
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kcs_bmc {int channel; } ;
struct aspeed_kcs_bmc {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct aspeed_kcs_bmc* FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct kcs_bmc *VAR_7, u16 VAR_8)
{
 struct aspeed_kcs_bmc *VAR_9 = FUNC_0(VAR_7);

 switch (VAR_7->channel) {
 case 1:
  FUNC_1(VAR_9->map, VAR_0,
    VAR_1, 0);
  FUNC_2(VAR_9->map, VAR_2, VAR_8 >> 8);
  FUNC_2(VAR_9->map, VAR_3, VAR_8 & 0xFF);
  break;

 case 2:
  FUNC_1(VAR_9->map, VAR_0,
    VAR_1, VAR_1);
  FUNC_2(VAR_9->map, VAR_2, VAR_8 >> 8);
  FUNC_2(VAR_9->map, VAR_3, VAR_8 & 0xFF);
  break;

 case 3:
  FUNC_2(VAR_9->map, VAR_4, VAR_8 >> 8);
  FUNC_2(VAR_9->map, VAR_5, VAR_8 & 0xFF);
  break;

 case 4:
  FUNC_2(VAR_9->map, VAR_6, ((VAR_8 + 1) << 16) |
   VAR_8);
  break;

 default:
  break;
 }
}
