
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (struct rtl8366_smi*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct rtl8366_smi *VAR_2,
           unsigned int VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_4 &= VAR_1;
 VAR_6 = (VAR_3 % 2) * 8;
 VAR_5 = VAR_0 + (VAR_3 / 2);

 FUNC_0(VAR_2, VAR_5, (VAR_1 << VAR_6), VAR_4 << VAR_6);

 return 0;
}
