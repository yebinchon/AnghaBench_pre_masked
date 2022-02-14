
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int) ;

int FUNC_1(struct hfi1_devdata *VAR_4, u64 VAR_5)
{
 u64 VAR_6;

 VAR_6 = ((VAR_5 & VAR_1) << VAR_2) |
  ((u64)VAR_3 << VAR_0);
 return FUNC_0(VAR_4, VAR_6);
}
