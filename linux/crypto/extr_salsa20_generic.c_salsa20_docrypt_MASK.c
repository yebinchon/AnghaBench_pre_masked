
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int const*,unsigned int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_1, u8 *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 __le32 VAR_5[VAR_0 / sizeof(__le32)];

 while (VAR_4 >= VAR_0) {
  FUNC_1(VAR_1, VAR_5);
  FUNC_0(VAR_2, VAR_3, (const u8 *)VAR_5,
          VAR_0);
  VAR_4 -= VAR_0;
  VAR_2 += VAR_0;
  VAR_3 += VAR_0;
 }
 if (VAR_4) {
  FUNC_1(VAR_1, VAR_5);
  FUNC_0(VAR_2, VAR_3, (const u8 *)VAR_5, VAR_4);
 }
}
