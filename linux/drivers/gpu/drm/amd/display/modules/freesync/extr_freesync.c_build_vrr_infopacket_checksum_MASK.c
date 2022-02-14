
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_info_packet {unsigned char* sb; int valid; scalar_t__ hb3; scalar_t__ hb2; scalar_t__ hb1; scalar_t__ hb0; } ;



__attribute__((used)) static void FUNC_0(unsigned int *VAR_0,
  struct dc_info_packet *VAR_1)
{

 unsigned int VAR_2 = 0;
 unsigned char VAR_3 = 0;

 VAR_3 += VAR_1->hb0;
 VAR_3 += VAR_1->hb1;
 VAR_3 += VAR_1->hb2;
 VAR_3 += VAR_1->hb3;

 for (VAR_2 = 1; VAR_2 <= *VAR_0; VAR_2++)
  VAR_3 += VAR_1->sb[VAR_2];


 VAR_1->sb[0] = (unsigned char)(0x100 - VAR_3);

 VAR_1->valid = 1;
}
