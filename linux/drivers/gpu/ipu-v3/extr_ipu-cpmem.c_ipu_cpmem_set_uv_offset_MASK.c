
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ipuv3_channel*,int ,int) ;

void FUNC_2(struct ipuv3_channel *VAR_2, u32 VAR_3, u32 VAR_4)
{
 FUNC_0((VAR_3 & 0x7) || (VAR_4 & 0x7));

 FUNC_1(VAR_2, VAR_0, VAR_3 / 8);
 FUNC_1(VAR_2, VAR_1, VAR_4 / 8);
}
