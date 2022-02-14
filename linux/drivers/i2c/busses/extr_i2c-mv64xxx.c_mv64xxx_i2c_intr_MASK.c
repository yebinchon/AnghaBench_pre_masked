
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ control; scalar_t__ status; } ;
struct mv64xxx_i2c_data {int cntl_bits; int lock; TYPE_1__ reg_offsets; scalar_t__ reg_base; scalar_t__ irq_clear_inverted; scalar_t__ offload_enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv64xxx_i2c_data*) ;
 int FUNC_1 (struct mv64xxx_i2c_data*,int) ;
 int FUNC_2 (struct mv64xxx_i2c_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_3, void *VAR_4)
{
 struct mv64xxx_i2c_data *VAR_5 = VAR_4;
 unsigned long VAR_6;
 u32 VAR_7;
 irqreturn_t VAR_8 = VAR_1;

 FUNC_4(&VAR_5->lock, VAR_6);

 if (VAR_5->offload_enabled)
  VAR_8 = FUNC_2(VAR_5);

 while (FUNC_3(VAR_5->reg_base + VAR_5->reg_offsets.control) &
      VAR_2) {
  VAR_7 = FUNC_3(VAR_5->reg_base + VAR_5->reg_offsets.status);
  FUNC_1(VAR_5, VAR_7);
  FUNC_0(VAR_5);

  if (VAR_5->irq_clear_inverted)
   FUNC_6(VAR_5->cntl_bits | VAR_2,
          VAR_5->reg_base + VAR_5->reg_offsets.control);

  VAR_8 = VAR_0;
 }
 FUNC_5(&VAR_5->lock, VAR_6);

 return VAR_8;
}
