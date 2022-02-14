
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_i2c {scalar_t__ twsi_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_i2c*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct octeon_i2c *VAR_3, u64 VAR_4,
          int *VAR_5)
{
 int VAR_6 = 1000;
 u64 VAR_7;

 FUNC_2(VAR_2 | VAR_4 | VAR_1, VAR_3->twsi_base + FUNC_0(VAR_3));
 do {
  VAR_7 = FUNC_1(VAR_3->twsi_base + FUNC_0(VAR_3));
  if (--VAR_6 < 0) {

   if (VAR_5)
    *VAR_5 = -VAR_0;
   return 0;
  }
 } while ((VAR_7 & VAR_2) != 0);

 return VAR_7 & 0xFF;
}
