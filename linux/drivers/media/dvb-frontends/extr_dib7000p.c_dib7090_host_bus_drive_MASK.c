
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_0, u8 VAR_1)
{
 u16 VAR_2;


 VAR_2 = FUNC_0(VAR_0, 1798) & ~((0x7) | (0x7 << 6) | (0x7 << 12));
 VAR_2 |= (VAR_1 << 12) | (VAR_1 << 6) | VAR_1;
 FUNC_1(VAR_0, 1798, VAR_2);


 VAR_2 = FUNC_0(VAR_0, 1799) & ~((0x7 << 2) | (0x7 << 8));
 VAR_2 |= (VAR_1 << 8) | (VAR_1 << 2);
 FUNC_1(VAR_0, 1799, VAR_2);


 VAR_2 = FUNC_0(VAR_0, 1800) & ~((0x7) | (0x7 << 6) | (0x7 << 12));
 VAR_2 |= (VAR_1 << 12) | (VAR_1 << 6) | VAR_1;
 FUNC_1(VAR_0, 1800, VAR_2);


 VAR_2 = FUNC_0(VAR_0, 1801) & ~((0x7 << 2) | (0x7 << 8));
 VAR_2 |= (VAR_1 << 8) | (VAR_1 << 2);
 FUNC_1(VAR_0, 1801, VAR_2);


 VAR_2 = FUNC_0(VAR_0, 1802) & ~((0x7) | (0x7 << 6) | (0x7 << 12));
 VAR_2 |= (VAR_1 << 12) | (VAR_1 << 6) | VAR_1;
 FUNC_1(VAR_0, 1802, VAR_2);

 return 0;
}
