
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u16 ;
struct intel_guc_client {unsigned long doorbell_id; int stage_id; TYPE_1__* guc; } ;
struct TYPE_2__ {int doorbell_bitmap; } ;


 int FUNC_0 (char*,int ,int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (struct intel_guc_client*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct intel_guc_client *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 u16 VAR_6;

 FUNC_1(VAR_3->doorbell_id != VAR_1);






 VAR_4 = 0;
 VAR_5 = VAR_2 / 2;
 if (FUNC_4(VAR_3)) {
  VAR_4 = VAR_5;
  VAR_5 += VAR_4;
 }

 VAR_6 = FUNC_3(VAR_3->guc->doorbell_bitmap, VAR_5, VAR_4);
 if (VAR_6 == VAR_5)
  return -VAR_0;

 FUNC_2(VAR_6, VAR_3->guc->doorbell_bitmap);
 VAR_3->doorbell_id = VAR_6;
 FUNC_0("client %u (high prio=%s) reserved doorbell: %d\n",
    VAR_3->stage_id, FUNC_5(FUNC_4(VAR_3)),
    VAR_6);
 return 0;
}
