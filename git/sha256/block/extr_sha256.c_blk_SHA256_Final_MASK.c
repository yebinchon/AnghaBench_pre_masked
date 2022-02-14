
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int size; int * state; } ;
typedef TYPE_1__ blk_SHA256_CTX ;


 int FUNC_0 (TYPE_1__*,...) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int ) ;

void FUNC_3(unsigned char *VAR_0, blk_SHA256_CTX *VAR_1)
{
 static const unsigned char VAR_2[64] = { 0x80 };
 unsigned int VAR_3[2];
 int VAR_4;


 VAR_3[0] = FUNC_1((uint32_t)(VAR_1->size >> 29));
 VAR_3[1] = FUNC_1((uint32_t)(VAR_1->size << 3));

 VAR_4 = VAR_1->size & 63;
 FUNC_0(VAR_1, VAR_2, 1 + (63 & (55 - VAR_4)));
 FUNC_0(VAR_1, VAR_3, 8);


 for (VAR_4 = 0; VAR_4 < 8; VAR_4++, VAR_0 += sizeof(uint32_t))
  FUNC_2(VAR_0, VAR_1->state[VAR_4]);
}
