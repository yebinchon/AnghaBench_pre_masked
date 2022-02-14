
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct drxd_state {int dummy; } ;


 int FUNC_0 (struct drxd_state*,int,int,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_0, u8 * VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return 0;

 while (!VAR_2) {
  u16 VAR_3;
  u32 VAR_4 = VAR_1[0] | (VAR_1[1] << 8) |
      (VAR_1[2] << 16) | (VAR_1[3] << 24);

  if (VAR_4 == 0xFFFFFFFF)
   break;
  VAR_1 += sizeof(u32);

  VAR_3 = VAR_1[0] | (VAR_1[1] << 8);
  VAR_1 += sizeof(u16);
  if (!VAR_3)
   break;
  VAR_2 = FUNC_0(VAR_0, VAR_4, VAR_3 * 2, VAR_1, 0);
  VAR_1 += (VAR_3 * 2);
 }
 return VAR_2;
}
