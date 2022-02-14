
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; } ;
struct sca3000_chip_info {int measurement_mode_freq; int option_mode_1_freq; int option_mode_2_freq; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct sca3000_state *VAR_3,
       const struct sca3000_chip_info *VAR_4,
       int *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_1, 1);
 if (VAR_6)
  goto error_ret;
 switch (VAR_2 & VAR_3->rx[0]) {
 case 130:
  *VAR_5 = VAR_4->measurement_mode_freq;
  break;
 case 129:
  *VAR_5 = VAR_4->option_mode_1_freq;
  break;
 case 128:
  *VAR_5 = VAR_4->option_mode_2_freq;
  break;
 default:
  VAR_6 = -VAR_0;
 }
error_ret:
 return VAR_6;
}
