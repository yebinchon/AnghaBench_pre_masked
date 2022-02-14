
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sfe_ipv6_tcp_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(const struct sfe_ipv6_tcp_hdr *VAR_6, const u32 VAR_7,
          u32 *VAR_8)
{
 u32 VAR_9 = sizeof(struct sfe_ipv6_tcp_hdr);
 u8 *VAR_10 = (u8 *)VAR_6 + VAR_9;




 if (FUNC_0(VAR_7 == VAR_9 + VAR_1 + 1 + 1)
     && FUNC_0(VAR_10[0] == VAR_3)
     && FUNC_0(VAR_10[1] == VAR_3)
     && FUNC_0(VAR_10[2] == VAR_5)
     && FUNC_0(VAR_10[3] == VAR_1)) {
  return 1;
 }




 while (VAR_9 < VAR_7) {
  u8 VAR_11;
  u8 VAR_12;

  VAR_10 = (u8 *)VAR_6 + VAR_9;
  VAR_12 = *VAR_10;





  if (VAR_12 == VAR_3) {
   VAR_9++;
   continue;
  }

  if (VAR_12 == VAR_4) {
   u32 VAR_13 = 0;
   u8 VAR_14 = 1 + 1;

   VAR_11 = *(VAR_10 + 1);
   if ((VAR_11 < (1 + 1 + VAR_0))
       || ((VAR_11 - (1 + 1)) % (VAR_0))
       || (VAR_11 > (VAR_7 - VAR_9))) {
    return 0;
   }

   VAR_14 += 4;
   while (VAR_14 < VAR_11) {
    u32 VAR_15;
    u8 *VAR_16 = VAR_10 + VAR_14;
    VAR_15 = (VAR_16[0] << 24) | (VAR_16[1] << 16) | (VAR_16[2] << 8) | VAR_16[3];
    if (VAR_15 > VAR_13) {
     VAR_13 = VAR_15;
    }
    VAR_14 += VAR_0;
   }
   if (VAR_13 > *VAR_8) {
    *VAR_8 = VAR_13;
   }
   VAR_9 += VAR_11;
   continue;
  }
  if (VAR_12 == VAR_2) {
   return 1;
  }
  VAR_11 = *(VAR_10 + 1);
  if (VAR_11 < 2) {
   return 0;
  }
  VAR_9 += VAR_11;
 }

 return 1;
}
