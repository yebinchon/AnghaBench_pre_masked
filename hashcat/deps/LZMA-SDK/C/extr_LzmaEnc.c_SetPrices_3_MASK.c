
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt32 ;
typedef int CProbPrice ;
typedef scalar_t__ CLzmaProb ;


 scalar_t__ FUNC_0 (scalar_t__ const,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(const CLzmaProb *VAR_0, UInt32 VAR_1, UInt32 *VAR_2, const CProbPrice *VAR_3)
{
  unsigned VAR_4;
  for (VAR_4 = 0; VAR_4 < 8; VAR_4 += 2)
  {
    UInt32 VAR_5 = VAR_1;
    UInt32 VAR_6;
    VAR_5 += FUNC_0(VAR_0[1 ], (VAR_4 >> 2));
    VAR_5 += FUNC_0(VAR_0[2 + (VAR_4 >> 2)], (VAR_4 >> 1) & 1);
    VAR_6 = VAR_0[4 + (VAR_4 >> 1)];
    VAR_2[VAR_4 ] = VAR_5 + FUNC_1(VAR_6);
    VAR_2[VAR_4 + 1] = VAR_5 + FUNC_2(VAR_6);
  }
}
