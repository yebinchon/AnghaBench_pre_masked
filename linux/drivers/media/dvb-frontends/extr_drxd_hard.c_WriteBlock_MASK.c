
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct drxd_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct drxd_state*,scalar_t__,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_1,
        u32 VAR_2, u16 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 while (VAR_3 > 0) {
  u16 VAR_6 = VAR_3 > VAR_0 ? VAR_0 : VAR_3;

  if (FUNC_0(VAR_1, VAR_2, VAR_4, VAR_6, VAR_5) < 0)
   return -1;
  VAR_4 += VAR_6;
  VAR_2 += (VAR_6 >> 1);
  VAR_3 -= VAR_6;
 }
 return 0;
}
