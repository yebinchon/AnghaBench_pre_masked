
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* s; } ;
typedef TYPE_1__ norx32_ctx ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(norx32_ctx *VAR_3, size_t VAR_4)
{
  FUNC_0(VAR_4 < VAR_0);
  VAR_3->s[VAR_4 / VAR_2] ^= 0x01 << ((VAR_4 % VAR_2) * 8);
  VAR_3->s[VAR_1 - 1] ^= 0x80000000;
}
