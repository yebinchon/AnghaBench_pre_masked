
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rdk; } ;
typedef TYPE_1__ AES_KEY ;


 int FUNC_0 (int ,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int const*,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_2 (const u32 VAR_9[4], const u32 VAR_10[4], const u32 VAR_11[16], u32 VAR_12[16])
{
  AES_KEY VAR_13;

  FUNC_1 (VAR_13.rdk, VAR_9, (u32 *) VAR_5, (u32 *) VAR_6, (u32 *) VAR_7, (u32 *) VAR_8, (u32 *) VAR_0, (u32 *) VAR_1, (u32 *) VAR_2, (u32 *) VAR_3);

  u32 VAR_14[4] = { 0 };

  VAR_14[0] = VAR_10[0];
  VAR_14[1] = VAR_10[1];
  VAR_14[2] = VAR_10[2];
  VAR_14[3] = VAR_10[3];

  for (int VAR_15 = 0; VAR_15 < 16; VAR_15 += 4)
  {
    u32 VAR_16[4] = { 0 };
    u32 VAR_17[4] = { 0 };

    VAR_16[0] = VAR_11[VAR_15 + 0];
    VAR_16[1] = VAR_11[VAR_15 + 1];
    VAR_16[2] = VAR_11[VAR_15 + 2];
    VAR_16[3] = VAR_11[VAR_15 + 3];

    FUNC_0 (VAR_13.rdk, VAR_16, VAR_17, (u32 *) VAR_0, (u32 *) VAR_1, (u32 *) VAR_2, (u32 *) VAR_3, (u32 *) VAR_4);

    VAR_17[0] ^= VAR_14[0];
    VAR_17[1] ^= VAR_14[1];
    VAR_17[2] ^= VAR_14[2];
    VAR_17[3] ^= VAR_14[3];

    VAR_12[VAR_15 + 0] = VAR_17[0];
    VAR_12[VAR_15 + 1] = VAR_17[1];
    VAR_12[VAR_15 + 2] = VAR_17[2];
    VAR_12[VAR_15 + 3] = VAR_17[3];

    VAR_14[0] = VAR_16[0];
    VAR_14[1] = VAR_16[1];
    VAR_14[2] = VAR_16[2];
    VAR_14[3] = VAR_16[3];
  }
}
