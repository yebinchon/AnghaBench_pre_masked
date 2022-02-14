
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (struct rtl8366_smi*,int,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int,int) ;

int FUNC_2(struct rtl8366_smi *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, (VAR_4 & ~VAR_2) | VAR_3);
 return VAR_5;

}
