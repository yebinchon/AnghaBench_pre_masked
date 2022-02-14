
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct dcn10_link_encoder {int dummy; } ;


 int FUNC_0 (struct dcn10_link_encoder*,int) ;
 int FUNC_1 (struct dcn10_link_encoder*,int) ;
 int FUNC_2 (struct dcn10_link_encoder*,int*) ;

__attribute__((used)) static void FUNC_3(
 struct dcn10_link_encoder *VAR_0,
 const uint8_t *VAR_1)
{

 FUNC_1(VAR_0, 0);



 FUNC_0(VAR_0, 1);




 FUNC_1(VAR_0, 1);


 {
  uint16_t VAR_2[8];

  VAR_2[0] =
   ((VAR_1[1] & 0x03) << 8) | VAR_1[0];
  VAR_2[1] =
   ((VAR_1[2] & 0x0f) << 6) | ((VAR_1[1] >> 2) & 0x3f);
  VAR_2[2] =
   ((VAR_1[3] & 0x3f) << 4) | ((VAR_1[2] >> 4) & 0x0f);
  VAR_2[3] =
   (VAR_1[4] << 2) | ((VAR_1[3] >> 6) & 0x03);
  VAR_2[4] =
   ((VAR_1[6] & 0x03) << 8) | VAR_1[5];
  VAR_2[5] =
   ((VAR_1[7] & 0x0f) << 6) | ((VAR_1[6] >> 2) & 0x3f);
  VAR_2[6] =
   ((VAR_1[8] & 0x3f) << 4) | ((VAR_1[7] >> 4) & 0x0f);
  VAR_2[7] =
   (VAR_1[9] << 2) | ((VAR_1[8] >> 6) & 0x03);

  FUNC_2(VAR_0, VAR_2);
 }



 FUNC_1(VAR_0, 1);
}
