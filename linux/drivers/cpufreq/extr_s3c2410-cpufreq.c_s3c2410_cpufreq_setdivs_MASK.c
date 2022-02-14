
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int h_divisor; int p_divisor; } ;
struct s3c_cpufreq_config {TYPE_1__ divs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct s3c_cpufreq_config *VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_3->divs.h_divisor == 2)
  VAR_4 |= VAR_1;

 if (VAR_3->divs.p_divisor != VAR_3->divs.h_divisor)
  VAR_4 |= VAR_2;

 FUNC_0(VAR_4, VAR_0);
}
