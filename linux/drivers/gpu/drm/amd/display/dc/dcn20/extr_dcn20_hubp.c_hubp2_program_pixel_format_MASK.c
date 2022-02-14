
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int VAR_4 ;
 struct dcn20_hubp* FUNC_3 (struct hubp*) ;

void FUNC_4(
 struct hubp *VAR_5,
 enum surface_pixel_format VAR_6)
{
 struct dcn20_hubp *VAR_7 = FUNC_3(VAR_5);
 uint32_t VAR_8 = 3;
 uint32_t VAR_9 = 2;


 if (VAR_6 == 144
   || VAR_6 == 146
   || VAR_6 == 145
   || VAR_6 == 147) {
  VAR_8 = 2;
  VAR_9 = 3;
 }

 FUNC_2(VAR_3,
   VAR_0, VAR_9,
   VAR_1, VAR_8);



 switch (VAR_6) {
 case 143:
  FUNC_1(VAR_2,
    VAR_4, 1);
  break;
 case 134:
  FUNC_1(VAR_2,
    VAR_4, 3);
  break;
 case 139:
 case 144:
  FUNC_1(VAR_2,
    VAR_4, 8);
  break;
 case 140:
 case 146:
 case 145:
  FUNC_1(VAR_2,
    VAR_4, 10);
  break;
 case 142:
  FUNC_1(VAR_2,
    VAR_4, 22);
  break;
 case 141:
 case 147:
  FUNC_1(VAR_2,
    VAR_4, 24);
  break;

 case 131:
  FUNC_1(VAR_2,
    VAR_4, 65);
  break;
 case 130:
  FUNC_1(VAR_2,
    VAR_4, 64);
  break;
 case 133:
  FUNC_1(VAR_2,
    VAR_4, 67);
  break;
 case 132:
  FUNC_1(VAR_2,
    VAR_4, 66);
  break;
 case 128:
  FUNC_1(VAR_2,
    VAR_4, 12);
  break;
 default:
  FUNC_0();
  break;
 }


}
