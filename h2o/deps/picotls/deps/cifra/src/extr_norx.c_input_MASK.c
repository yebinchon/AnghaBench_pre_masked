
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int partial ;
typedef int norx32_ctx ;
struct TYPE_4__ {int member_1; int * member_0; } ;
typedef TYPE_1__ blockctx ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t*,int,int const*,size_t,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(norx32_ctx *VAR_2, uint32_t VAR_3,
                  const uint8_t *VAR_4, size_t VAR_5)
{
  uint8_t VAR_6[VAR_0];
  size_t VAR_7 = 0;
  blockctx VAR_8 = { *VAR_2, &VAR_3 };


  FUNC_0(VAR_6, &VAR_7, sizeof VAR_6,
                          VAR_4, VAR_5,
                          VAR_1,
                          &VAR_8);


  FUNC_2(VAR_6 + VAR_7, 0, sizeof(VAR_6) - VAR_7);
  VAR_6[VAR_7] = 0x01;
  VAR_6[sizeof(VAR_6) - 1] ^= 0x80;

  FUNC_1(&VAR_8, VAR_6);
}
