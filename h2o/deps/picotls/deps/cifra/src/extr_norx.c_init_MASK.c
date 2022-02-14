
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* s; } ;
typedef TYPE_1__ norx32_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(norx32_ctx *VAR_4,
                 const uint8_t VAR_5[16],
                 const uint8_t VAR_6[8])
{

  VAR_4->s[0] = FUNC_1(VAR_6 + 0);
  VAR_4->s[1] = FUNC_1(VAR_6 + 4);
  VAR_4->s[2] = 0xb707322f;
  VAR_4->s[3] = 0xa0c7c90d;

  VAR_4->s[4] = FUNC_1(VAR_5 + 0);
  VAR_4->s[5] = FUNC_1(VAR_5 + 4);
  VAR_4->s[6] = FUNC_1(VAR_5 + 8);
  VAR_4->s[7] = FUNC_1(VAR_5 + 12);

  VAR_4->s[8] = 0xa3d8d930;
  VAR_4->s[9] = 0x3fa8b72c;
  VAR_4->s[10] = 0xed84eb49;
  VAR_4->s[11] = 0xedca4787;

  VAR_4->s[12] = 0x335463eb;
  VAR_4->s[13] = 0xf994220b;
  VAR_4->s[14] = 0xbe0bf5c9;
  VAR_4->s[15] = 0xd7c49104;







  VAR_4->s[12] ^= VAR_3;
  VAR_4->s[13] ^= VAR_1;
  VAR_4->s[14] ^= VAR_0;
  VAR_4->s[15] ^= VAR_2;

  FUNC_0(VAR_4);
}
