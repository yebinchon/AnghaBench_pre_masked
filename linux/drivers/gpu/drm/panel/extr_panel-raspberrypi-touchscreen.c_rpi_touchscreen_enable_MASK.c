
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_touchscreen {int dummy; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 struct rpi_touchscreen* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (struct rpi_touchscreen*,int ) ;
 int FUNC_4 (struct rpi_touchscreen*,int ,int) ;
 int FUNC_5 (struct rpi_touchscreen*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct drm_panel *VAR_17)
{
 struct rpi_touchscreen *VAR_18 = FUNC_2(VAR_17);
 int VAR_19;

 FUNC_4(VAR_18, VAR_13, 1);

 for (VAR_19 = 0; VAR_19 < 100; VAR_19++) {
  if (FUNC_3(VAR_18, VAR_12) & 1)
   break;
 }

 FUNC_5(VAR_18, VAR_0,
         VAR_1 |
         VAR_2);
 FUNC_5(VAR_18, VAR_6, 0x05);
 FUNC_5(VAR_18, VAR_8, 0x05);
 FUNC_5(VAR_18, VAR_5, 0x00);
 FUNC_5(VAR_18, VAR_7, 0x00);
 FUNC_5(VAR_18, VAR_9, 0x03);

 FUNC_5(VAR_18, VAR_15, 0x00);
 FUNC_5(VAR_18, VAR_4, 0x00100150);
 FUNC_5(VAR_18, VAR_16, 0x040f);
 FUNC_1(100);

 FUNC_5(VAR_18, VAR_10, 0x01);
 FUNC_5(VAR_18, VAR_3, 0x01);
 FUNC_1(100);


 FUNC_4(VAR_18, VAR_14, 255);






 FUNC_4(VAR_18, VAR_11, FUNC_0(2));

 return 0;
}
