
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long long __u64 ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char const*,char const) ;

__attribute__((used)) static u8 FUNC_2(const char *VAR_0, __u64 *VAR_1, __u64 *VAR_2,
     u8 *VAR_3, u8 *VAR_4)
{
 const char VAR_5[] = "EeSsPpAaBb";
 u8 VAR_6, VAR_7;
 __u64 VAR_8, VAR_9;

 VAR_7 = 0;
 VAR_6 = 0;
 VAR_8 = 0ULL;
 VAR_9 = 0ULL;
 while (*VAR_0) {
  int VAR_10, VAR_11, VAR_12, VAR_13;
  const char *VAR_14;

  VAR_14 = FUNC_1(VAR_5, *VAR_0);
  if (!VAR_14)
   return 0;

  VAR_10 = VAR_14 - VAR_5;
  VAR_13 = (VAR_10 & 1);
  VAR_10 >>= 1;
  VAR_6 |= FUNC_0(VAR_10);

  VAR_0++;
  if (*VAR_0 >= '0' && *VAR_0 <= '7') {
   VAR_11 = *VAR_0 - '0';
   VAR_7 |= FUNC_0(VAR_11);
  } else if (*VAR_0 == '-') {
   VAR_11 = 8;
  } else {
   return 0;
  }

  VAR_12 = (VAR_11 * 5) + VAR_10;

  VAR_8 |= 1ULL << VAR_12;
  if (!VAR_13)
   VAR_9 |= 1ULL << VAR_12;
  VAR_0++;
 }
 *VAR_1 = VAR_8;
 *VAR_2 = VAR_9;
 if (VAR_3)
  *VAR_3 |= VAR_6;
 if (VAR_4)
  *VAR_4 |= VAR_7;
 return 1;
}
