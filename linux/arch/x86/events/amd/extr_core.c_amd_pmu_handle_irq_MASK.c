
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct cpu_hw_events {int active_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_6(struct pt_regs *VAR_7)
{
 struct cpu_hw_events *VAR_8 = FUNC_1(&VAR_3);
 int VAR_9, VAR_10;






 VAR_9 = FUNC_0(VAR_8->active_mask, VAR_2);


 VAR_10 = FUNC_5(VAR_7);





 if (VAR_10) {
  FUNC_3(VAR_5,
          VAR_4 + VAR_6);

  return VAR_10;
 }

 if (FUNC_4(VAR_4, FUNC_2(VAR_5)))
  return VAR_0;

 return VAR_1;
}
