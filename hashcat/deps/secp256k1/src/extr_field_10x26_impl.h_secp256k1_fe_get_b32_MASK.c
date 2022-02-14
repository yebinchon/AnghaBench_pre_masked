
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* n; int normalized; } ;
typedef TYPE_1__ secp256k1_fe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_0, const secp256k1_fe *VAR_1) {




    VAR_0[0] = (VAR_1->n[9] >> 14) & 0xff;
    VAR_0[1] = (VAR_1->n[9] >> 6) & 0xff;
    VAR_0[2] = ((VAR_1->n[9] & 0x3F) << 2) | ((VAR_1->n[8] >> 24) & 0x3);
    VAR_0[3] = (VAR_1->n[8] >> 16) & 0xff;
    VAR_0[4] = (VAR_1->n[8] >> 8) & 0xff;
    VAR_0[5] = VAR_1->n[8] & 0xff;
    VAR_0[6] = (VAR_1->n[7] >> 18) & 0xff;
    VAR_0[7] = (VAR_1->n[7] >> 10) & 0xff;
    VAR_0[8] = (VAR_1->n[7] >> 2) & 0xff;
    VAR_0[9] = ((VAR_1->n[7] & 0x3) << 6) | ((VAR_1->n[6] >> 20) & 0x3f);
    VAR_0[10] = (VAR_1->n[6] >> 12) & 0xff;
    VAR_0[11] = (VAR_1->n[6] >> 4) & 0xff;
    VAR_0[12] = ((VAR_1->n[6] & 0xf) << 4) | ((VAR_1->n[5] >> 22) & 0xf);
    VAR_0[13] = (VAR_1->n[5] >> 14) & 0xff;
    VAR_0[14] = (VAR_1->n[5] >> 6) & 0xff;
    VAR_0[15] = ((VAR_1->n[5] & 0x3f) << 2) | ((VAR_1->n[4] >> 24) & 0x3);
    VAR_0[16] = (VAR_1->n[4] >> 16) & 0xff;
    VAR_0[17] = (VAR_1->n[4] >> 8) & 0xff;
    VAR_0[18] = VAR_1->n[4] & 0xff;
    VAR_0[19] = (VAR_1->n[3] >> 18) & 0xff;
    VAR_0[20] = (VAR_1->n[3] >> 10) & 0xff;
    VAR_0[21] = (VAR_1->n[3] >> 2) & 0xff;
    VAR_0[22] = ((VAR_1->n[3] & 0x3) << 6) | ((VAR_1->n[2] >> 20) & 0x3f);
    VAR_0[23] = (VAR_1->n[2] >> 12) & 0xff;
    VAR_0[24] = (VAR_1->n[2] >> 4) & 0xff;
    VAR_0[25] = ((VAR_1->n[2] & 0xf) << 4) | ((VAR_1->n[1] >> 22) & 0xf);
    VAR_0[26] = (VAR_1->n[1] >> 14) & 0xff;
    VAR_0[27] = (VAR_1->n[1] >> 6) & 0xff;
    VAR_0[28] = ((VAR_1->n[1] & 0x3f) << 2) | ((VAR_1->n[0] >> 24) & 0x3);
    VAR_0[29] = (VAR_1->n[0] >> 16) & 0xff;
    VAR_0[30] = (VAR_1->n[0] >> 8) & 0xff;
    VAR_0[31] = VAR_1->n[0] & 0xff;
}
