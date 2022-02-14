
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u64 ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int const*,unsigned int) ;
 int FUNC_1 (int const*,unsigned int) ;
 scalar_t__ FUNC_2 (int const*,int const*,unsigned int) ;
 int FUNC_3 (int const*,unsigned int) ;
 int FUNC_4 (int const*,int const*,unsigned int) ;
 int FUNC_5 (int const*,int const*,int const*,unsigned int) ;
 int FUNC_6 (int const*,int const*,int const,unsigned int) ;

__attribute__((used)) static void FUNC_7(u64 *VAR_1, const u64 *VAR_2,
         const u64 *VAR_3, unsigned int VAR_4)
{
 u64 VAR_5 = -VAR_3[0];
 u64 VAR_6[VAR_0 * 2];
 u64 VAR_7[VAR_0 * 2];

 FUNC_4(VAR_7, VAR_2, VAR_4 * 2);
 while (!FUNC_3(VAR_7 + VAR_4, VAR_4)) {
  FUNC_6(VAR_6, VAR_7 + VAR_4, VAR_5, VAR_4);
  FUNC_1(VAR_7 + VAR_4, VAR_4);
  FUNC_0(VAR_7, VAR_7, VAR_6, VAR_4 * 2);
 }
 FUNC_4(VAR_6, VAR_3, VAR_4);
 FUNC_1(VAR_6 + VAR_4, VAR_4);
 while (FUNC_2(VAR_7, VAR_6, VAR_4 * 2) >= 0)
  FUNC_5(VAR_7, VAR_7, VAR_6, VAR_4 * 2);
 FUNC_4(VAR_1, VAR_7, VAR_4);
}
