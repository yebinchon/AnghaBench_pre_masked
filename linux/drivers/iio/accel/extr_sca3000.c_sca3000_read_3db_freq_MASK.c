
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sca3000_state {int* rx; TYPE_1__* info; } ;
struct TYPE_2__ {int measurement_mode_3db_freq; int option_mode_1_3db_freq; int option_mode_2_3db_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sca3000_state *VAR_5, int *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3, 1);
 if (VAR_7)
  return VAR_7;


 VAR_5->rx[0] &= VAR_4;
 switch (VAR_5->rx[0]) {
 case 130:
  *VAR_6 = VAR_5->info->measurement_mode_3db_freq;
  return VAR_2;
 case 131:
  return -VAR_0;
 case 129:
  *VAR_6 = VAR_5->info->option_mode_1_3db_freq;
  return VAR_2;
 case 128:
  *VAR_6 = VAR_5->info->option_mode_2_3db_freq;
  return VAR_2;
 default:
  return -VAR_1;
 }
}
