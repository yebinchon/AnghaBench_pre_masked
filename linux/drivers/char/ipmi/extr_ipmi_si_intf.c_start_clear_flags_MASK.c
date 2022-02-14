
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int si_state; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct smi_info*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(struct smi_info *VAR_4)
{
 unsigned char VAR_5[3];


 VAR_5[0] = (VAR_1 << 2);
 VAR_5[1] = VAR_0;
 VAR_5[2] = VAR_3;

 FUNC_0(VAR_4, VAR_5, 3);
 VAR_4->si_state = VAR_2;
}
