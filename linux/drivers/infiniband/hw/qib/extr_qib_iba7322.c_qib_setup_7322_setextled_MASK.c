
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_pportdata {int led_override; int port; struct qib_devdata* dd; } ;
struct qib_devdata {TYPE_1__* cspec; scalar_t__ diag_client; } ;
struct TYPE_2__ {int extctrl; int gpio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 int FUNC_3 (struct qib_devdata*,int ,int) ;
 int FUNC_4 (struct qib_pportdata*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_15, u32 VAR_16)
{
 struct qib_devdata *VAR_17 = VAR_15->dd;
 u64 VAR_18, VAR_19 = 0, VAR_20;
 unsigned long VAR_21;
 int VAR_22, VAR_23;





 if (VAR_17->diag_client)
  return;


 if (VAR_15->led_override) {
  VAR_23 = (VAR_15->led_override & VAR_11);
  VAR_22 = (VAR_15->led_override & VAR_10);
 } else if (VAR_16) {
  VAR_20 = FUNC_2(VAR_15, VAR_13);
  VAR_23 = FUNC_1(VAR_20) ==
   VAR_8;
  VAR_22 = FUNC_0(VAR_20) == VAR_9;
 } else {
  VAR_23 = 0;
  VAR_22 = 0;
 }

 FUNC_5(&VAR_17->cspec->gpio_lock, VAR_21);
 VAR_18 = VAR_17->cspec->extctrl & (VAR_15->port == 1 ?
  ~VAR_1 : ~VAR_4);
 if (VAR_23) {
  VAR_18 |= VAR_15->port == 1 ? VAR_0 : VAR_3;





  VAR_19 = ((66600 * 1000UL / 4) << VAR_7) |
   ((187500 * 1000UL / 4) << VAR_6);
 }
 if (VAR_22)
  VAR_18 |= VAR_15->port == 1 ? VAR_2 : VAR_5;
 VAR_17->cspec->extctrl = VAR_18;
 FUNC_3(VAR_17, VAR_12, VAR_17->cspec->extctrl);
 FUNC_6(&VAR_17->cspec->gpio_lock, VAR_21);

 if (VAR_19)
  FUNC_4(VAR_15, VAR_14, VAR_19);
}
