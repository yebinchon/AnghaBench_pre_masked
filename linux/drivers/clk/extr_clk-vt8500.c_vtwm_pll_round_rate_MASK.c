
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pll {int type; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;




 long FUNC_0 (unsigned long,int ,int ) ;
 long FUNC_1 (unsigned long,int ,int ,int ) ;
 long FUNC_2 (unsigned long,int ,int ,int ) ;
 long FUNC_3 (unsigned long,int ,int ,int ) ;
 struct clk_pll* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (unsigned long,unsigned long,int *,int *) ;
 int FUNC_6 (unsigned long,unsigned long,int *,int *,int *) ;
 int FUNC_7 (unsigned long,unsigned long,int *,int *,int *,int *) ;
 int FUNC_8 (unsigned long,unsigned long,int *,int *,int *) ;

__attribute__((used)) static long FUNC_9(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 struct clk_pll *VAR_4 = FUNC_4(VAR_1);
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 long VAR_9;
 int VAR_10;

 switch (VAR_4->type) {
 case 131:
  VAR_10 = FUNC_5(VAR_2, *VAR_3, &VAR_6, &VAR_7);
  if (!VAR_10)
   VAR_9 = FUNC_0(*VAR_3, VAR_6, VAR_7);
  break;
 case 130:
  VAR_10 = FUNC_6(VAR_2, *VAR_3, &VAR_6, &VAR_7, &VAR_8);
  if (!VAR_10)
   VAR_9 = FUNC_1(*VAR_3, VAR_6, VAR_7, VAR_8);
  break;
 case 129:
  VAR_10 = FUNC_7(VAR_2, *VAR_3, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
  if (!VAR_10)
   VAR_9 = FUNC_2(*VAR_3, VAR_6, VAR_7, VAR_8);
  break;
 case 128:
  VAR_10 = FUNC_8(VAR_2, *VAR_3, &VAR_6, &VAR_7, &VAR_8);
  if (!VAR_10)
   VAR_9 = FUNC_3(*VAR_3, VAR_6, VAR_7, VAR_8);
  break;
 default:
  VAR_10 = -VAR_0;
 }

 if (VAR_10)
  return VAR_10;

 return VAR_9;
}
