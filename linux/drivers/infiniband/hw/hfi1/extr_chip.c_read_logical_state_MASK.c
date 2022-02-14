
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;

u32 FUNC_1(struct hfi1_devdata *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 return (VAR_4 >> VAR_2)
    & VAR_1;
}
