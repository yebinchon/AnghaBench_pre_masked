
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {unsigned int debounce; void* debounce_en; } ;
struct gpio_bank {TYPE_2__ context; void* dbck_enable_mask; int dbck; TYPE_1__* regs; scalar_t__ base; int dbck_flag; } ;
struct TYPE_3__ {scalar_t__ debounce_en; scalar_t__ debounce; } ;


 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gpio_bank*) ;
 void* FUNC_5 (scalar_t__,void*,int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct gpio_bank *VAR_3, unsigned VAR_4,
       unsigned VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 bool VAR_8 = !!VAR_5;

 if (!VAR_3->dbck_flag)
  return -VAR_1;

 if (VAR_8) {
  VAR_5 = FUNC_1(VAR_5, 31) - 1;
  if ((VAR_5 & VAR_2) != VAR_5)
   return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_4);

 FUNC_3(VAR_3->dbck);
 FUNC_6(VAR_5, VAR_3->base + VAR_3->regs->debounce);

 VAR_6 = FUNC_5(VAR_3->base + VAR_3->regs->debounce_en, VAR_7, VAR_8);
 VAR_3->dbck_enable_mask = VAR_6;

 FUNC_2(VAR_3->dbck);
 FUNC_4(VAR_3);
 if (VAR_3->dbck_enable_mask) {
  VAR_3->context.debounce = VAR_5;
  VAR_3->context.debounce_en = VAR_6;
 }

 return 0;
}
