
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stv {int dummy; } ;


 int FUNC_0 (struct stv*,int,int*) ;
 int FUNC_1 (struct stv*,int,int) ;

__attribute__((used)) static int FUNC_2(struct stv *VAR_0, u32 VAR_1, u8 VAR_2)
{
 int VAR_3;
 u8 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_3 = FUNC_0(VAR_0, VAR_1 >> 16, &VAR_6);
 if (VAR_3)
  return VAR_3;
 VAR_5 = VAR_1 & 0xff;
 VAR_4 = (VAR_1 >> 12) & 0xf;
 VAR_7 = ((VAR_2 << VAR_4) & VAR_5) | (VAR_6 & ~VAR_5);
 if (VAR_7 == VAR_6)
  return 0;
 return FUNC_1(VAR_0, VAR_1 >> 16, VAR_7);
}
