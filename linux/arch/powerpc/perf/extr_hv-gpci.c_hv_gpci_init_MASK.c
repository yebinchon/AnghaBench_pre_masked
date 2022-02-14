
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hv_perf_caps {int dummy; } ;
struct TYPE_3__ {int name; int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (struct hv_perf_caps*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_4;
 unsigned long VAR_5;
 struct hv_perf_caps VAR_6;

 FUNC_1();

 if (!FUNC_0(VAR_1)) {
  FUNC_4("not a virtualized system, not enabling\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(&VAR_6);
 if (VAR_5) {
  FUNC_4("could not obtain capabilities, not enabling, rc=%ld\n",
    VAR_5);
  return -VAR_0;
 }


 VAR_3.capabilities |= VAR_2;

 VAR_4 = FUNC_3(&VAR_3, VAR_3.name, -1);
 if (VAR_4)
  return VAR_4;

 return 0;
}
