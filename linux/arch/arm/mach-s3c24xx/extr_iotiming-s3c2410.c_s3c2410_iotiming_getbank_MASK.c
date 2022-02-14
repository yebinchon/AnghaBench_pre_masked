
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long hclk_tns; } ;
struct s3c_cpufreq_config {TYPE_1__ freq; } ;
struct s3c2410_iobank_timing {unsigned long bankcon; int tacc; void* tacs; void* tcos; void* tcoh; void* tcah; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 void* FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

void FUNC_2(struct s3c_cpufreq_config *VAR_5,
         struct s3c2410_iobank_timing *VAR_6)
{
 unsigned long VAR_7 = VAR_6->bankcon;
 unsigned long VAR_8 = VAR_5->freq.hclk_tns;

 VAR_6->tcah = FUNC_0(VAR_8, VAR_7 >> VAR_2);
 VAR_6->tcoh = FUNC_0(VAR_8, VAR_7 >> VAR_3);
 VAR_6->tcos = FUNC_0(VAR_8, VAR_7 >> VAR_4);
 VAR_6->tacs = FUNC_0(VAR_8, VAR_7 >> VAR_1);
 VAR_6->tacc = FUNC_1(VAR_8, VAR_7 >> VAR_0);
}
