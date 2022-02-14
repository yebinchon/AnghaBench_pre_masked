
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imr_regs {int addr_hi; int addr_lo; int wmask; int rmask; } ;
struct imr_device {int reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct imr_device *VAR_4, u32 VAR_5, struct imr_regs *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8 = VAR_5 * VAR_1 + VAR_4->reg_base;
 int VAR_9;

 FUNC_4(VAR_7);

 VAR_9 = FUNC_2(VAR_3, VAR_2, VAR_8++, VAR_6->addr_lo);
 if (VAR_9)
  goto failed;

 VAR_9 = FUNC_2(VAR_3, VAR_2, VAR_8++, VAR_6->addr_hi);
 if (VAR_9)
  goto failed;

 VAR_9 = FUNC_2(VAR_3, VAR_2, VAR_8++, VAR_6->rmask);
 if (VAR_9)
  goto failed;

 VAR_9 = FUNC_2(VAR_3, VAR_2, VAR_8++, VAR_6->wmask);
 if (VAR_9)
  goto failed;

 FUNC_3(VAR_7);
 return 0;
failed:





 FUNC_3(VAR_7);
 FUNC_0(VAR_9, "IOSF-MBI write fail range 0x%08x-0x%08x unreliable\n",
      FUNC_1(VAR_6->addr_lo), FUNC_1(VAR_6->addr_hi) + VAR_0);

 return VAR_9;
}
