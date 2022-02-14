
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int const*,unsigned int,int) ;
 int FUNC_1 (scalar_t__*,int *,int const*,unsigned int,int) ;
 int FUNC_2 (scalar_t__*,int *,int const*,unsigned int,int) ;
 int FUNC_3 (scalar_t__*,int *,int const*,unsigned int,int) ;
 int FUNC_4 (scalar_t__*,int *,int const*,unsigned int,int) ;
 int FUNC_5 (scalar_t__*,int *,int const*,unsigned int,int) ;
 int FUNC_6 (scalar_t__*,int *,int const*,unsigned int,int) ;
 scalar_t__ FUNC_7 (unsigned int,int) ;
 int FUNC_8 (scalar_t__*,int *,int const*,unsigned int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_9(u32 *VAR_3, u8 *VAR_4, const u8 *VAR_5,
     unsigned int VAR_6, int VAR_7)
{
 while (VAR_6 >= VAR_0 * 4) {
  FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  VAR_6 -= VAR_0 * 4;
  VAR_5 += VAR_0 * 4;
  VAR_4 += VAR_0 * 4;
  VAR_3[12] += 4;
 }
 if (VAR_6 > VAR_0) {
  FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  VAR_3[12] += FUNC_7(VAR_6, 4);
  return;
 }
 if (VAR_6) {
  FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  VAR_3[12]++;
 }
}
