
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_0[4])
{
  uint32_t VAR_1, VAR_2, VAR_3, VAR_4;

  VAR_1 = FUNC_1(FUNC_0(VAR_0[0], 0),
            FUNC_0(VAR_0[3], 1),
            FUNC_0(VAR_0[2], 2),
            FUNC_0(VAR_0[1], 3));

  VAR_2 = FUNC_1(FUNC_0(VAR_0[1], 0),
            FUNC_0(VAR_0[0], 1),
            FUNC_0(VAR_0[3], 2),
            FUNC_0(VAR_0[2], 3));

  VAR_3 = FUNC_1(FUNC_0(VAR_0[2], 0),
            FUNC_0(VAR_0[1], 1),
            FUNC_0(VAR_0[0], 2),
            FUNC_0(VAR_0[3], 3));

  VAR_4 = FUNC_1(FUNC_0(VAR_0[3], 0),
            FUNC_0(VAR_0[2], 1),
            FUNC_0(VAR_0[1], 2),
            FUNC_0(VAR_0[0], 3));

  VAR_0[0] = VAR_1;
  VAR_0[1] = VAR_2;
  VAR_0[2] = VAR_3;
  VAR_0[3] = VAR_4;
}
