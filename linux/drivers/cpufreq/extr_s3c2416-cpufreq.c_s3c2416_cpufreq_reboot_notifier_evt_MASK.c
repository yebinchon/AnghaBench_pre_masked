
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2416_data {int disable_dvs; scalar_t__ is_dvs; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 struct s3c2416_data VAR_4 ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_5,
            unsigned long VAR_6, void *VAR_7)
{
 struct s3c2416_data *VAR_8 = &VAR_4;
 int VAR_9;

 FUNC_2(&VAR_3);


 VAR_8->disable_dvs = 1;

 FUNC_3(&VAR_3);





 if (VAR_8->is_dvs) {
  FUNC_4("cpufreq: leave dvs on reboot\n");
  VAR_9 = FUNC_1(FUNC_0(0), VAR_0, 0);
  if (VAR_9 < 0)
   return VAR_1;
 }

 return VAR_2;
}
