
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(const u8 *VAR_1, u8 *VAR_2,
         u32 VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;
 u32 VAR_6, VAR_7, VAR_8 = 0;

 do {
  VAR_6 = *VAR_1;
  VAR_7 = VAR_6 * VAR_0;

  VAR_1++;

  FUNC_0("vrl: %d, Revoked KSVs: %d\n", VAR_8++,
     VAR_6);
  FUNC_1(VAR_2, VAR_1, VAR_7);

  VAR_5 += VAR_6;
  VAR_2 += VAR_7;
  VAR_1 += VAR_7;

  VAR_4 += (VAR_7 + 1);
 } while (VAR_4 < VAR_3);

 return VAR_5;
}
