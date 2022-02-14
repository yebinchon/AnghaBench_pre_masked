
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dib7000p_state {int dummy; } ;


 int FUNC_0 (struct dib7000p_state*,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dib7000p_state *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 FUNC_1("Configure DibStream Tx\n");

 FUNC_0(VAR_0, 1615, 1);
 FUNC_0(VAR_0, 1603, VAR_1);
 FUNC_0(VAR_0, 1605, VAR_2);
 FUNC_0(VAR_0, 1606, VAR_3);
 FUNC_0(VAR_0, 1608, VAR_4);
 FUNC_0(VAR_0, 1609, (VAR_5 >> 16) & 0xffff);
 FUNC_0(VAR_0, 1610, VAR_5 & 0xffff);
 FUNC_0(VAR_0, 1612, VAR_6);
 FUNC_0(VAR_0, 1615, 0);

 return 0;
}
