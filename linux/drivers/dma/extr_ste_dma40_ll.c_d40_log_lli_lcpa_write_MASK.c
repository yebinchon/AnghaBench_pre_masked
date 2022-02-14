
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d40_log_lli_full {int lcsp3; int lcsp2; int lcsp1; int lcsp0; } ;
struct d40_log_lli {int lcsp13; int lcsp02; } ;


 int FUNC_0 (struct d40_log_lli*,struct d40_log_lli*,int,unsigned int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct d40_log_lli_full *VAR_0,
      struct d40_log_lli *VAR_1,
      struct d40_log_lli *VAR_2,
      int VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_2->lcsp02, &VAR_0[0].lcsp0);
 FUNC_1(VAR_2->lcsp13, &VAR_0[0].lcsp1);
 FUNC_1(VAR_1->lcsp02, &VAR_0[0].lcsp2);
 FUNC_1(VAR_1->lcsp13, &VAR_0[0].lcsp3);
}
