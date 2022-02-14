
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx24113_state {int dummy; } ;


 int FUNC_0 (struct cx24113_state*,int,int) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct cx24113_state *VAR_0, u32 VAR_1)
{
 u8 VAR_2;

 if (VAR_1 <= 19000)
  VAR_2 = 0x03 << 6;
 else if (VAR_1 <= 25000)
  VAR_2 = 0x02 << 6;
 else
  VAR_2 = 0x01 << 6;

 FUNC_1("bandwidth to be set: %d\n", VAR_1);
 VAR_1 *= 10;
 VAR_1 -= 10000;
 VAR_1 /= 1000;
 VAR_1 += 5;
 VAR_1 /= 10;

 FUNC_1("bandwidth: %d %d\n", VAR_2 >> 6, VAR_1);

 VAR_2 |= VAR_1 & 0x3f;

 return FUNC_0(VAR_0, 0x1e, VAR_2);
}
