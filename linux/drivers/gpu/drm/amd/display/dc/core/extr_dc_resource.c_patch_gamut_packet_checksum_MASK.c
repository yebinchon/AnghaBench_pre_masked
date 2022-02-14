
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct dc_info_packet {size_t* sb; scalar_t__ valid; } ;



__attribute__((used)) static void FUNC_0(
  struct dc_info_packet *VAR_0)
{

 if (VAR_0->valid) {
  uint8_t VAR_1 = 0;
  uint8_t *VAR_2;
  uint8_t VAR_3;


  VAR_2 = &VAR_0->sb[3];

  for (VAR_3 = 0; VAR_3 <= VAR_0->sb[1]; VAR_3++)
   VAR_1 += VAR_2[VAR_3];

  VAR_0->sb[2] = (uint8_t) (0x100 - VAR_1);
 }
}
