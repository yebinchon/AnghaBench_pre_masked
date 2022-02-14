
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {int extctrl; int gpio_out; int gpio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct qib_devdata*,int ) ;
 int FUNC_3 (struct qib_devdata*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct qib_devdata *VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 u64 VAR_11, VAR_12;
 unsigned long VAR_13;

 if (VAR_10) {

  VAR_9 &= VAR_10;
  VAR_8 &= VAR_10;
  FUNC_4(&VAR_7->cspec->gpio_lock, VAR_13);
  VAR_7->cspec->extctrl &= ~((u64)VAR_10 << FUNC_1(VAR_0, VAR_3));
  VAR_7->cspec->extctrl |= ((u64) VAR_9 << FUNC_1(VAR_0, VAR_3));
  VAR_12 = (VAR_7->cspec->gpio_out & ~VAR_10) | VAR_8;

  FUNC_3(VAR_7, VAR_4, VAR_7->cspec->extctrl);
  FUNC_3(VAR_7, VAR_6, VAR_12);
  VAR_7->cspec->gpio_out = VAR_12;
  FUNC_5(&VAR_7->cspec->gpio_lock, VAR_13);
 }
 VAR_11 = FUNC_2(VAR_7, VAR_5);
 return FUNC_0(VAR_11, VAR_1, VAR_2);
}
