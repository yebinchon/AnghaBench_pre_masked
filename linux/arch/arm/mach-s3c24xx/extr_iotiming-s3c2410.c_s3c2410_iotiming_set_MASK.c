
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_iotimings {TYPE_1__* bank; } ;
struct s3c_cpufreq_config {int dummy; } ;
struct s3c2410_iobank_timing {int bankcon; } ;
struct TYPE_2__ {struct s3c2410_iobank_timing* io_2410; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

void FUNC_2(struct s3c_cpufreq_config *VAR_1,
     struct s3c_iotimings *VAR_2)
{
 struct s3c2410_iobank_timing *VAR_3;
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = VAR_2->bank[VAR_4].io_2410;
  if (!VAR_3)
   continue;

  FUNC_0(VAR_3->bankcon, FUNC_1(VAR_4));
 }
}
