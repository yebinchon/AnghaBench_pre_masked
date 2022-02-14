
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vic_device {int domain; scalar_t__ base; } ;
struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,struct pt_regs*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vic_device *VAR_1, struct pt_regs *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5 = 0;

 while ((VAR_3 = FUNC_2(VAR_1->base + VAR_0))) {
  VAR_4 = FUNC_0(VAR_3) - 1;
  FUNC_1(VAR_1->domain, VAR_4, VAR_2);
  VAR_5 = 1;
 }

 return VAR_5;
}
