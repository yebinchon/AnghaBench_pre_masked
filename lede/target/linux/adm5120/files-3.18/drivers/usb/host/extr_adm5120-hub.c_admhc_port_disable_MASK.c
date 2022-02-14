
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct admhcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct admhcd*,unsigned int) ;
 int FUNC_1 (struct admhcd*,char*,unsigned int) ;
 int FUNC_2 (struct admhcd*,unsigned int,int ) ;

__attribute__((used)) static inline int FUNC_3(struct admhcd *VAR_3, unsigned VAR_4)
{
 u32 VAR_5;

 FUNC_1(VAR_3, "disable port%d\n", VAR_4);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!(VAR_5 & VAR_0))
  return -VAR_2;

 FUNC_2(VAR_3, VAR_4, VAR_1);

 return 0;
}
