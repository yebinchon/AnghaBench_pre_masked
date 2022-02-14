
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pt {int handle; int vmx_on; } ;
struct TYPE_4__ {int config; } ;
struct TYPE_3__ {int config; int exclude_user; int exclude_kernel; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__ attr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int VAR_9 ;
 struct pt* FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_10)
{
 struct pt *VAR_11 = FUNC_5(&VAR_9);
 u64 VAR_12;


 if (!VAR_10->hw.config) {
  FUNC_3(VAR_10);
  FUNC_6(VAR_1, 0);
 }

 VAR_12 = FUNC_4(VAR_10);
 VAR_12 |= VAR_6 | VAR_7;
 if (VAR_10->attr.config & FUNC_0(0)) {
  VAR_12 |= VAR_10->attr.config & VAR_4;
 } else {
  VAR_12 |= VAR_4;
 }

 if (!VAR_10->attr.exclude_kernel)
  VAR_12 |= VAR_5;
 if (!VAR_10->attr.exclude_user)
  VAR_12 |= VAR_8;

 VAR_12 |= (VAR_10->attr.config & VAR_3);

 VAR_10->hw.config = VAR_12;
 if (FUNC_1(VAR_11->vmx_on))
  FUNC_2(&VAR_11->handle, VAR_2);
 else
  FUNC_6(VAR_0, VAR_12);
}
