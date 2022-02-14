
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*,unsigned int const) ;
 int FUNC_1 (scalar_t__ const*,scalar_t__*,unsigned int const) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,unsigned int const) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__ const*,unsigned int const) ;

__attribute__((used)) static void FUNC_4(u64 *VAR_0, const u64 *VAR_1,
         const u64 *VAR_2, u64 *VAR_3)
{
 const unsigned int VAR_4 = 3;
 int VAR_5;

 FUNC_2(VAR_0, VAR_1, VAR_4);

 FUNC_2(VAR_3, &VAR_1[3], VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_0, VAR_3, VAR_4);

 VAR_3[0] = 0;
 VAR_3[1] = VAR_1[3];
 VAR_3[2] = VAR_1[4];
 VAR_5 += FUNC_0(VAR_0, VAR_0, VAR_3, VAR_4);

 VAR_3[0] = VAR_3[1] = VAR_1[5];
 VAR_3[2] = 0;
 VAR_5 += FUNC_0(VAR_0, VAR_0, VAR_3, VAR_4);

 while (VAR_5 || FUNC_1(VAR_2, VAR_0, VAR_4) != 1)
  VAR_5 -= FUNC_3(VAR_0, VAR_0, VAR_2, VAR_4);
}
