
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct bme680_calib {scalar_t__ range_sw_err; } ;
struct bme680_data {struct bme680_calib bme680; } ;
typedef int s64 ;


 unsigned int FUNC_0 (int,int) ;

__attribute__((used)) static u32 FUNC_1(struct bme680_data *VAR_0, u16 VAR_1,
     u8 VAR_2)
{
 struct bme680_calib *VAR_3 = &VAR_0->bme680;
 s64 VAR_4;
 u64 VAR_5;
 s64 VAR_6;
 u32 VAR_7;


 const u32 VAR_8[16] = {2147483647u, 2147483647u,
    2147483647u, 2147483647u, 2147483647u,
    2126008810u, 2147483647u, 2130303777u,
    2147483647u, 2147483647u, 2143188679u,
    2136746228u, 2147483647u, 2126008810u,
    2147483647u, 2147483647u};

 VAR_4 = ((1340 + (5 * (s64) VAR_3->range_sw_err)) *
   ((s64) VAR_8[VAR_2])) >> 16;
 VAR_5 = ((VAR_1 << 15) - 16777216) + VAR_4;
 VAR_6 = ((125000 << (15 - VAR_2)) * VAR_4) >> 9;
 VAR_6 += (VAR_5 >> 1);
 VAR_7 = FUNC_0(VAR_6, (s64) VAR_5);

 return VAR_7;
}
