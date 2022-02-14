
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (unsigned long,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned long,unsigned long,int *,int *,int *) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
  unsigned long *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, *VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(*VAR_3, VAR_0,
   VAR_4, VAR_5, VAR_6);
}
