
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mixer_context {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct mixer_context*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct mixer_context *VAR_0,
  int VAR_1, const u8 *VAR_2, unsigned int VAR_3)
{

 FUNC_0(VAR_3 & 3);
 for (; VAR_3; VAR_3 -= 4, VAR_1 += 4, VAR_2 += 4) {
  u32 VAR_4 = (VAR_2[0] << 24) | (VAR_2[1] << 16) |
   (VAR_2[2] << 8) | VAR_2[3];
  FUNC_1(VAR_0, VAR_1, VAR_4);
 }
}
