
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcs_bmc {int channel; } ;
struct aspeed_kcs_bmc {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct aspeed_kcs_bmc* FUNC_0 (struct kcs_bmc*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct kcs_bmc *VAR_13, bool VAR_14)
{
 struct aspeed_kcs_bmc *VAR_15 = FUNC_0(VAR_13);

 switch (VAR_13->channel) {
 case 1:
  if (VAR_14) {
   FUNC_1(VAR_15->map, VAR_4,
     VAR_5, VAR_5);
   FUNC_1(VAR_15->map, VAR_0,
     VAR_1, VAR_1);
  } else {
   FUNC_1(VAR_15->map, VAR_0,
     VAR_1, 0);
   FUNC_1(VAR_15->map, VAR_4,
     VAR_5, 0);
  }
  break;

 case 2:
  if (VAR_14) {
   FUNC_1(VAR_15->map, VAR_4,
     VAR_6, VAR_6);
   FUNC_1(VAR_15->map, VAR_0,
     VAR_2, VAR_2);
  } else {
   FUNC_1(VAR_15->map, VAR_0,
     VAR_2, 0);
   FUNC_1(VAR_15->map, VAR_4,
     VAR_6, 0);
  }
  break;

 case 3:
  if (VAR_14) {
   FUNC_1(VAR_15->map, VAR_4,
     VAR_7, VAR_7);
   FUNC_1(VAR_15->map, VAR_0,
     VAR_3, VAR_3);
   FUNC_1(VAR_15->map, VAR_8,
     VAR_9, VAR_9);
  } else {
   FUNC_1(VAR_15->map, VAR_0,
     VAR_3, 0);
   FUNC_1(VAR_15->map, VAR_8,
     VAR_9, 0);
   FUNC_1(VAR_15->map, VAR_4,
     VAR_7, 0);
  }
  break;

 case 4:
  if (VAR_14)
   FUNC_1(VAR_15->map, VAR_10,
     VAR_11 | VAR_12,
     VAR_11 | VAR_12);
  else
   FUNC_1(VAR_15->map, VAR_10,
     VAR_11 | VAR_12,
     0);
  break;

 default:
  break;
 }
}
