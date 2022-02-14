
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct octeon_i2c {scalar_t__ twsi_base; } ;


 scalar_t__ FUNC_0 (struct octeon_i2c*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct octeon_i2c *VAR_1, u64 VAR_2, u8 VAR_3)
{
 int VAR_4 = 1000;
 u64 VAR_5;

 FUNC_2(VAR_0 | VAR_2 | VAR_3, VAR_1->twsi_base + FUNC_0(VAR_1));
 do {
  VAR_5 = FUNC_1(VAR_1->twsi_base + FUNC_0(VAR_1));
  if (--VAR_4 < 0)
   return;
 } while ((VAR_5 & VAR_0) != 0);
}
