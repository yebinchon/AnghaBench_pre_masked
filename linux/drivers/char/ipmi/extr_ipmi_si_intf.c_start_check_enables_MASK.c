
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int si_state; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smi_info*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(struct smi_info *VAR_3)
{
 unsigned char VAR_4[2];

 VAR_4[0] = (VAR_1 << 2);
 VAR_4[1] = VAR_0;

 FUNC_0(VAR_3, VAR_4, 2);
 VAR_3->si_state = VAR_2;
}
