
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* r; int s; } ;
typedef TYPE_1__ cf_poly1305 ;


 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(cf_poly1305 *VAR_0,
                      const uint8_t VAR_1[16],
                      const uint8_t VAR_2[16])
{
  FUNC_1(VAR_0, 0, sizeof *VAR_0);

  VAR_0->r[0] = VAR_1[0];
  VAR_0->r[1] = VAR_1[1];
  VAR_0->r[2] = VAR_1[2];
  VAR_0->r[3] = VAR_1[3] & 0x0f;
  VAR_0->r[4] = VAR_1[4] & 0xfc;
  VAR_0->r[5] = VAR_1[5];
  VAR_0->r[6] = VAR_1[6];
  VAR_0->r[7] = VAR_1[7] & 0x0f;
  VAR_0->r[8] = VAR_1[8] & 0xfc;
  VAR_0->r[9] = VAR_1[9];
  VAR_0->r[10] = VAR_1[10];
  VAR_0->r[11] = VAR_1[11] & 0x0f;
  VAR_0->r[12] = VAR_1[12] & 0xfc;
  VAR_0->r[13] = VAR_1[13];
  VAR_0->r[14] = VAR_1[14];
  VAR_0->r[15] = VAR_1[15] & 0x0f;
  VAR_0->r[16] = 0;

  FUNC_0(VAR_0->s, VAR_2, 16);
}
