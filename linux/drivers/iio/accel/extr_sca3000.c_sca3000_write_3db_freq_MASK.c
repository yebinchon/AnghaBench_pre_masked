
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sca3000_state {int* rx; TYPE_1__* info; } ;
struct TYPE_2__ {int measurement_mode_3db_freq; int option_mode_1_3db_freq; int option_mode_2_3db_freq; scalar_t__ option_mode_2; scalar_t__ option_mode_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sca3000_state*,int ,int) ;
 int FUNC_1 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sca3000_state *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;

 if (VAR_7 == VAR_6->info->measurement_mode_3db_freq)
  VAR_9 = VAR_2;
 else if (VAR_6->info->option_mode_1 &&
   (VAR_7 == VAR_6->info->option_mode_1_3db_freq))
  VAR_9 = VAR_3;
 else if (VAR_6->info->option_mode_2 &&
   (VAR_7 == VAR_6->info->option_mode_2_3db_freq))
  VAR_9 = VAR_4;
 else
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_6, VAR_1, 1);
 if (VAR_8)
  return VAR_8;

 VAR_6->rx[0] &= ~VAR_5;
 VAR_6->rx[0] |= (VAR_9 & VAR_5);

 return FUNC_1(VAR_6, VAR_1, VAR_6->rx[0]);
}
