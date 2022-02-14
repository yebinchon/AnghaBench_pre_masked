
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipuv3_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ipuv3_channel*,int ,unsigned int) ;

void FUNC_2(struct ipuv3_channel *VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 FUNC_0((VAR_5 & 0x7) || (VAR_6 & 0x7));

 FUNC_1(VAR_3, VAR_0, VAR_4 - 1);
 FUNC_1(VAR_3, VAR_1, VAR_5 / 8);
 FUNC_1(VAR_3, VAR_2, VAR_6 / 8);
}
