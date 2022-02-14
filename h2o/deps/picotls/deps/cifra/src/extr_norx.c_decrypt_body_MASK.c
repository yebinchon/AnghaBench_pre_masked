
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * s; } ;
typedef TYPE_1__ norx32_ctx ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_1__*,int const*,int*,size_t,size_t) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (int ,int*) ;

__attribute__((used)) static void FUNC_5(norx32_ctx *VAR_4,
                         const uint8_t *VAR_5, uint8_t *VAR_6, size_t VAR_7)
{
  if (VAR_7 == 0)
    return;


  while (VAR_7 >= VAR_1)
  {
    FUNC_2(VAR_4, VAR_0);
    FUNC_0(VAR_4, VAR_5, VAR_6, 0, VAR_2);
    VAR_6 += VAR_1;
    VAR_5 += VAR_1;
    VAR_7 -= VAR_1;
  }


  size_t VAR_8 = 0;
  FUNC_2(VAR_4, VAR_0);

  FUNC_3(VAR_4, VAR_7);


  while (VAR_7 >= VAR_3)
  {
    FUNC_0(VAR_4, VAR_5, VAR_6, VAR_8, VAR_8 + 1);
    VAR_6 += VAR_3;
    VAR_5 += VAR_3;
    VAR_7 -= VAR_3;
    VAR_8 += 1;
  }


  uint8_t VAR_9[VAR_3];
  FUNC_4(VAR_4->s[VAR_8], VAR_9);

  for (size_t VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  {
    uint8_t VAR_11 = VAR_5[VAR_10];
    VAR_6[VAR_10] = VAR_9[VAR_10] ^ VAR_11;
    VAR_9[VAR_10] = VAR_11;
  }

  VAR_4->s[VAR_8] = FUNC_1(VAR_9);
}
