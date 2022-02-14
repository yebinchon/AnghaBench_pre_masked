
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct s3c_iotimings {TYPE_1__* bank; } ;
struct s3c_cpufreq_config {int dummy; } ;
struct s3c2412_iobank_timing {int dummy; } ;
struct TYPE_2__ {struct s3c2412_iobank_timing* io_2412; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 struct s3c2412_iobank_timing* FUNC_2 (int,int ) ;
 int FUNC_3 (struct s3c_cpufreq_config*,struct s3c2412_iobank_timing*,unsigned int) ;
 int FUNC_4 (char*,struct s3c_iotimings*) ;

int FUNC_5(struct s3c_cpufreq_config *VAR_4,
    struct s3c_iotimings *VAR_5)
{
 struct s3c2412_iobank_timing *VAR_6;
 u32 VAR_7 = FUNC_0(VAR_3);
 unsigned int VAR_8;



 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (!FUNC_1(VAR_8, VAR_7))
   continue;

  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_5->bank[VAR_8].io_2412 = VAR_6;
  FUNC_3(VAR_4, VAR_6, VAR_8);
 }

 FUNC_4("get", VAR_5);
 return 0;
}
