
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u8 ;
typedef int u64 ;
typedef int __le64 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline __le64 FUNC_1(u8 VAR_0,
      u64 VAR_1, u64 VAR_2, u64 VAR_3)
{
 return FUNC_0(
      ((VAR_1 & 0xfffffffcULL) << 32) |

      ((VAR_0 & 3ULL) << 30) |

      ((VAR_2 & 0x7ffULL) << 16) |

      (VAR_3 & 0x7ffULL));
}
