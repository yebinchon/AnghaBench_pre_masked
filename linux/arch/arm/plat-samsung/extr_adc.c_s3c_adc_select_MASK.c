
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_adc_client {int channel; int is_ts; int (* select_cb ) (struct s3c_adc_client*,int) ;} ;
struct adc_device {scalar_t__ regs; int pdev; } ;
typedef enum s3c_cpu_type { ____Placeholder_s3c_cpu_type } s3c_cpu_type ;
struct TYPE_2__ {int driver_data; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct s3c_adc_client*,int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct adc_device *VAR_11,
      struct s3c_adc_client *VAR_12)
{
 unsigned VAR_13 = FUNC_2(VAR_11->regs + VAR_0);
 enum s3c_cpu_type VAR_14 = FUNC_1(VAR_11->pdev)->driver_data;

 VAR_12->select_cb(VAR_12, 1);

 if (VAR_14 == VAR_6 || VAR_14 == VAR_9)
  VAR_13 &= ~VAR_1;
 VAR_13 &= ~VAR_3;
 VAR_13 &= ~VAR_2;

 if (!VAR_12->is_ts) {
  if (VAR_14 == VAR_10)
   FUNC_4(VAR_12->channel & 0xf, VAR_11->regs + VAR_5);
  else if (VAR_14 == VAR_7 || VAR_14 == VAR_8)
   FUNC_4(VAR_12->channel & 0xf,
      VAR_11->regs + VAR_4);
  else
   VAR_13 |= FUNC_0(VAR_12->channel);
 }

 FUNC_4(VAR_13, VAR_11->regs + VAR_0);
}
