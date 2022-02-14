
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct d71_pipeline {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct d71_pipeline*) ;
 int FUNC_1 (struct d71_pipeline*) ;
 int FUNC_2 (struct d71_pipeline*) ;

__attribute__((used)) static u64 FUNC_3(struct d71_pipeline *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = 0ULL;

 if (VAR_7 & (VAR_4 | VAR_5))
  VAR_8 |= FUNC_2(VAR_6);

 if (VAR_7 & (VAR_0 | VAR_1))
  VAR_8 |= FUNC_0(VAR_6);

 if (VAR_7 & (VAR_2 | VAR_3))
  VAR_8 |= FUNC_1(VAR_6);

 return VAR_8;
}
