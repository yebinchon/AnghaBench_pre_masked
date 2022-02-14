
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ state ;
typedef int __be64 ;


 int VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;
 int const* VAR_7 ;
 int const* VAR_8 ;
 int const FUNC_0 (int const) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const u64 VAR_9[VAR_0 + 1],
  u8 *VAR_10, const u8 *VAR_11)
{
 const __be64 *VAR_12 = (const __be64 *)VAR_11;
 __be64 *VAR_13 = (__be64 *)VAR_10;
 int VAR_14;
 u64 VAR_15;

 VAR_15 = FUNC_0(*VAR_12) ^ VAR_9[0];

 for (VAR_14 = 1; VAR_14 < VAR_0; VAR_14++) {
  VAR_15 = VAR_1[(int)(VAR_15 >> 56) ] ^
   VAR_2[(int)(VAR_15 >> 48) & 0xff] ^
   VAR_3[(int)(VAR_15 >> 40) & 0xff] ^
   VAR_4[(int)(VAR_15 >> 32) & 0xff] ^
   VAR_5[(int)(VAR_15 >> 24) & 0xff] ^
   VAR_6[(int)(VAR_15 >> 16) & 0xff] ^
   VAR_7[(int)(VAR_15 >> 8) & 0xff] ^
   VAR_8[(int)(VAR_15 ) & 0xff] ^
   VAR_9[VAR_14];
     }

 VAR_15 = (VAR_1[(int)(VAR_15 >> 56) ] & 0xff00000000000000ULL) ^
  (VAR_2[(int)(VAR_15 >> 48) & 0xff] & 0x00ff000000000000ULL) ^
  (VAR_3[(int)(VAR_15 >> 40) & 0xff] & 0x0000ff0000000000ULL) ^
  (VAR_4[(int)(VAR_15 >> 32) & 0xff] & 0x000000ff00000000ULL) ^
  (VAR_5[(int)(VAR_15 >> 24) & 0xff] & 0x00000000ff000000ULL) ^
  (VAR_6[(int)(VAR_15 >> 16) & 0xff] & 0x0000000000ff0000ULL) ^
  (VAR_7[(int)(VAR_15 >> 8) & 0xff] & 0x000000000000ff00ULL) ^
  (VAR_8[(int)(VAR_15 ) & 0xff] & 0x00000000000000ffULL) ^
  VAR_9[VAR_0];

 *VAR_13 = FUNC_1(VAR_15);
}
