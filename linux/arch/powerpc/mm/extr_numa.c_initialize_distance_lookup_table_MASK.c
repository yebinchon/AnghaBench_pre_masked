
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (int ) ;
 int ** VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_4,
  const __be32 *VAR_5)
{
 int VAR_6;

 if (!VAR_3)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  const __be32 *VAR_7;

  VAR_7 = &VAR_5[FUNC_0(VAR_1[VAR_6]) - 1];
  VAR_0[VAR_4][VAR_6] = FUNC_1(VAR_7, 1);
 }
}
