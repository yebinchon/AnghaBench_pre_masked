
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_job {int num_unpins; int num_slots; int timeout; int first_get; int syncpt_end; int syncpt_id; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;

void FUNC_1(struct device *VAR_0, struct host1x_job *VAR_1)
{
 FUNC_0(VAR_0, "    SYNCPT_ID   %d\n", VAR_1->syncpt_id);
 FUNC_0(VAR_0, "    SYNCPT_VAL  %d\n", VAR_1->syncpt_end);
 FUNC_0(VAR_0, "    FIRST_GET   0x%x\n", VAR_1->first_get);
 FUNC_0(VAR_0, "    TIMEOUT     %d\n", VAR_1->timeout);
 FUNC_0(VAR_0, "    NUM_SLOTS   %d\n", VAR_1->num_slots);
 FUNC_0(VAR_0, "    NUM_HANDLES %d\n", VAR_1->num_unpins);
}
