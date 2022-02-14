
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_gmu {int idle_level; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct a6xx_gmu*,int ,int ,int) ;
 int FUNC_1 (struct a6xx_gmu*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct a6xx_gmu *VAR_15)
{

 FUNC_1(VAR_15, VAR_14, 0x1);

 FUNC_1(VAR_15, VAR_10, 0x9c40400);

 switch (VAR_15->idle_level) {
 case 129:
  FUNC_1(VAR_15, VAR_11,
   VAR_9);
  FUNC_0(VAR_15, VAR_10, 0,
   VAR_1 |
   VAR_0);

 case 128:
  FUNC_1(VAR_15, VAR_12,
   VAR_9);
  FUNC_0(VAR_15, VAR_10, 0,
   VAR_1 |
   VAR_2);
 }


 FUNC_0(VAR_15, VAR_13, 0,
  VAR_8 |
  VAR_6 |
  VAR_4 |
  VAR_7 |
  VAR_3 |
  VAR_5);
}
