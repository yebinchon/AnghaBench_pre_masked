
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimd_driver_data {int timing_base; } ;
struct fimd_context {int triggering; int irq_flags; void* regs; struct fimd_driver_data* driver_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct fimd_context* FUNC_2 (struct device*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,void*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_3)
{
 struct fimd_context *VAR_4 = FUNC_2(VAR_3);
 const struct fimd_driver_data *VAR_5 = VAR_4->driver_data;
 void *VAR_6 = VAR_4->regs + VAR_5->timing_base;
 u32 VAR_7;





 if (FUNC_0(&VAR_4->triggering))
  return;


 FUNC_1(&VAR_4->triggering, 1);

 VAR_7 = FUNC_3(VAR_6 + VAR_2);
 VAR_7 |= (VAR_1 | VAR_0);
 FUNC_5(VAR_7, VAR_6 + VAR_2);





 if (!FUNC_4(0, &VAR_4->irq_flags))
  FUNC_1(&VAR_4->triggering, 0);
}
