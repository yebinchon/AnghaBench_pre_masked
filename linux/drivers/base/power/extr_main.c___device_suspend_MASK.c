
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int direct_complete; int wakeup_path; int may_skip_resume; int must_resume; int is_suspended; int completion; scalar_t__ syscore; } ;
struct device {TYPE_6__ power; TYPE_5__* driver; TYPE_4__* bus; TYPE_3__* class; TYPE_2__* type; TYPE_1__* pm_domain; } ;
typedef int pm_message_t ;
typedef int * pm_callback_t ;
struct TYPE_11__ {int * pm; } ;
struct TYPE_10__ {scalar_t__ suspend; int * pm; } ;
struct TYPE_9__ {int * pm; } ;
struct TYPE_8__ {int * pm; } ;
struct TYPE_7__ {int ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int *,struct device*,int ,char const*) ;
 int FUNC_10 (struct device*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct device*) ;
 int FUNC_13 (struct device*,int ,scalar_t__,char*) ;
 int FUNC_14 (struct device*,int ,char*) ;
 int * FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 scalar_t__ FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*,int ) ;
 scalar_t__ FUNC_21 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_22(struct device *VAR_3, pm_message_t VAR_4, bool VAR_5)
{
 pm_callback_t VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 FUNC_0(VAR_2);

 FUNC_1(VAR_3);
 FUNC_2(0);

 FUNC_10(VAR_3, VAR_5);

 if (VAR_1) {
  VAR_3->power.direct_complete = 0;
  goto Complete;
 }







 if (FUNC_16(VAR_3) && FUNC_5(VAR_3))
  FUNC_20(VAR_3, 0);

 if (FUNC_21()) {
  VAR_3->power.direct_complete = 0;
  VAR_1 = -VAR_0;
  goto Complete;
 }

 if (VAR_3->power.syscore)
  goto Complete;


 if (FUNC_5(VAR_3) || VAR_3->power.wakeup_path)
  VAR_3->power.direct_complete = 0;

 if (VAR_3->power.direct_complete) {
  if (FUNC_19(VAR_3)) {
   FUNC_17(VAR_3);
   if (FUNC_19(VAR_3)) {
    FUNC_14(VAR_3, VAR_4, "direct-complete ");
    goto Complete;
   }

   FUNC_18(VAR_3);
  }
  VAR_3->power.direct_complete = 0;
 }

 VAR_3->power.may_skip_resume = 0;
 VAR_3->power.must_resume = 0;

 FUNC_12(&VAR_2, VAR_3);
 FUNC_4(VAR_3);

 if (VAR_3->pm_domain) {
  VAR_7 = "power domain ";
  VAR_6 = FUNC_15(&VAR_3->pm_domain->ops, VAR_4);
  goto Run;
 }

 if (VAR_3->type && VAR_3->type->pm) {
  VAR_7 = "type ";
  VAR_6 = FUNC_15(VAR_3->type->pm, VAR_4);
  goto Run;
 }

 if (VAR_3->class && VAR_3->class->pm) {
  VAR_7 = "class ";
  VAR_6 = FUNC_15(VAR_3->class->pm, VAR_4);
  goto Run;
 }

 if (VAR_3->bus) {
  if (VAR_3->bus->pm) {
   VAR_7 = "bus ";
   VAR_6 = FUNC_15(VAR_3->bus->pm, VAR_4);
  } else if (VAR_3->bus->suspend) {
   FUNC_14(VAR_3, VAR_4, "legacy bus ");
   VAR_8 = FUNC_13(VAR_3, VAR_4, VAR_3->bus->suspend,
      "legacy bus ");
   goto End;
  }
 }

 Run:
 if (!VAR_6 && VAR_3->driver && VAR_3->driver->pm) {
  VAR_7 = "driver ";
  VAR_6 = FUNC_15(VAR_3->driver->pm, VAR_4);
 }

 VAR_8 = FUNC_9(VAR_6, VAR_3, VAR_4, VAR_7);

 End:
 if (!VAR_8) {
  VAR_3->power.is_suspended = 1;
  if (FUNC_5(VAR_3))
   VAR_3->power.wakeup_path = 1;

  FUNC_8(VAR_3);
  FUNC_7(VAR_3);
 }

 FUNC_6(VAR_3);
 FUNC_11(&VAR_2);

 Complete:
 if (VAR_8)
  VAR_1 = VAR_8;

 FUNC_3(&VAR_3->power.completion);
 FUNC_2(VAR_8);
 return VAR_8;
}
