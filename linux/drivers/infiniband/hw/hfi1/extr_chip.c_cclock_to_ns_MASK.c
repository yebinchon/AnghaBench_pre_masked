
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_devdata {scalar_t__ icode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

u32 FUNC_0(struct hfi1_devdata *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 if (VAR_3->icode == VAR_2)
  VAR_5 = (VAR_4 * VAR_1) / 1000;
 else
  VAR_5 = (VAR_4 * VAR_0) / 1000;
 if (VAR_4 && !VAR_5)
  VAR_5 = 1;
 return VAR_5;
}
