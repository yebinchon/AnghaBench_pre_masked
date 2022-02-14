
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ihv; int ubc_check; int detect_coll; int * callback; scalar_t__ reduced_round_coll; int safe_hash; scalar_t__ found_collision; scalar_t__ total; } ;
typedef TYPE_1__ SHA1_CTX ;


 int VAR_0 ;

void FUNC_0(SHA1_CTX* VAR_1)
{
 VAR_1->total = 0;
 VAR_1->ihv[0] = 0x67452301;
 VAR_1->ihv[1] = 0xEFCDAB89;
 VAR_1->ihv[2] = 0x98BADCFE;
 VAR_1->ihv[3] = 0x10325476;
 VAR_1->ihv[4] = 0xC3D2E1F0;
 VAR_1->found_collision = 0;
 VAR_1->safe_hash = VAR_0;
 VAR_1->ubc_check = 1;
 VAR_1->detect_coll = 1;
 VAR_1->reduced_round_coll = 0;
 VAR_1->callback = ((void*)0);
}
