
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct admhcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct admhcd*,unsigned int) ;
 int FUNC_1 (struct admhcd*,char*,unsigned int) ;
 int FUNC_2 (struct admhcd*,unsigned int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct admhcd *VAR_5, unsigned VAR_6)
{
 u32 VAR_7;

 FUNC_1(VAR_5, "reset port%d\n", VAR_6);
 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (!(VAR_7 & VAR_0))
  return -VAR_4;

 FUNC_2(VAR_5, VAR_6, VAR_3);
 FUNC_3(10);
 FUNC_2(VAR_5, VAR_6, (VAR_2 | VAR_1));
 FUNC_3(100);

 return 0;
}
