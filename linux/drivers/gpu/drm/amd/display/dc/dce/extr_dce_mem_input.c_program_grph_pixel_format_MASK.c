
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_mem_input {int dummy; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;


 int FUNC_0 (char*) ;
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
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int,int ,int,int ,int) ;
__attribute__((used)) static void FUNC_4(
 struct dce_mem_input *VAR_11,
 enum surface_pixel_format VAR_12)
{
 uint32_t VAR_13 = 0, VAR_14 = 0;
 uint32_t VAR_15 = 0, VAR_16 = 0;
 uint32_t VAR_17 = 0, VAR_18 = 0;

 if (VAR_12 == 135 ||


  VAR_12 == 137 ||
  VAR_12 == 136 ||
  VAR_12 == 138) {

  VAR_13 = 2;
  VAR_14 = 2;
 }

 FUNC_1(VAR_9, 0,
   VAR_8, VAR_13,
   VAR_0, VAR_14);

 switch (VAR_12) {
 case 129:
  VAR_15 = 0;
  VAR_16 = 0;
  break;
 case 134:
  VAR_15 = 1;
  VAR_16 = 0;
  break;
 case 128:
  VAR_15 = 1;
  VAR_16 = 1;
  break;
 case 130:
 case 135:
  VAR_15 = 2;
  VAR_16 = 0;
  break;
 case 131:
 case 137:
 case 136:
  VAR_15 = 2;
  VAR_16 = 1;
  break;
 case 138:
  VAR_17 = 1;
  VAR_18 = 1;

 case 132:
 case 133:
  VAR_15 = 3;
  VAR_16 = 0;
  break;
 default:
  FUNC_0("unsupported grph pixel format");
  break;
 }

 FUNC_2(VAR_1,
   VAR_2, VAR_15,
   VAR_3, VAR_16);

 FUNC_3(VAR_10,
   VAR_7, VAR_18,
   VAR_6, VAR_17,
   VAR_5, VAR_17,
   VAR_4, VAR_17);
}
