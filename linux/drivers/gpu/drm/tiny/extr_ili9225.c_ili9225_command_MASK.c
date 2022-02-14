
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mipi_dbi {int dummy; } ;


 int FUNC_0 (struct mipi_dbi*,int,int*,int) ;

__attribute__((used)) static inline int FUNC_1(struct mipi_dbi *VAR_0, u8 VAR_1, u16 VAR_2)
{
 u8 VAR_3[2] = { VAR_2 >> 8, VAR_2 & 0xff };

 return FUNC_0(VAR_0, VAR_1, VAR_3, 2);
}
