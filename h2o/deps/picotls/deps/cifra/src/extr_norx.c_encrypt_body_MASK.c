
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int partial ;
typedef int norx32_ctx ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int const*,int*) ;
 int FUNC_1 (int*,int const*,size_t) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(norx32_ctx *VAR_2,
                         const uint8_t *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
  if (VAR_5 == 0)
    return;


  while (VAR_5 >= VAR_1)
  {
    FUNC_3(VAR_2, VAR_0);
    FUNC_0(VAR_2, VAR_3, VAR_4);
    VAR_3 += VAR_1;
    VAR_4 += VAR_1;
    VAR_5 -= VAR_1;
  }


  uint8_t VAR_6[VAR_1];
  FUNC_2(VAR_6, 0, sizeof VAR_6);
  FUNC_1(VAR_6, VAR_3, VAR_5);
  VAR_6[VAR_5] ^= 0x01;
  VAR_6[sizeof(VAR_6) - 1] ^= 0x80;

  FUNC_3(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_6, VAR_6);

  FUNC_1(VAR_4, VAR_6, VAR_5);
}
