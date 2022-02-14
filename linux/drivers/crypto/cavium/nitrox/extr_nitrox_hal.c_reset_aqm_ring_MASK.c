
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aqmq_en {void* value; scalar_t__ queue_enable; } ;
union aqmq_cmp_cnt {void* value; } ;
union aqmq_activity_stat {int queue_active; void* value; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 void* FUNC_3 (struct nitrox_device*,int ) ;
 int FUNC_4 (struct nitrox_device*,int ,void*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct nitrox_device *VAR_1, int VAR_2)
{
 union aqmq_en VAR_3;
 union aqmq_activity_stat VAR_4;
 union aqmq_cmp_cnt VAR_5;
 int VAR_6 = VAR_0;
 u64 VAR_7;


 VAR_7 = FUNC_2(VAR_2);
 VAR_3.value = 0;
 VAR_3.queue_enable = 0;
 FUNC_4(VAR_1, VAR_7, VAR_3.value);


 FUNC_6(100, 150);
 VAR_7 = FUNC_0(VAR_2);
 do {
  VAR_4.value = FUNC_3(VAR_1, VAR_7);
  if (!VAR_4.queue_active)
   break;
  FUNC_5(50);
 } while (VAR_6--);


 VAR_7 = FUNC_1(VAR_2);
 VAR_5.value = FUNC_3(VAR_1, VAR_7);
 FUNC_4(VAR_1, VAR_7, VAR_5.value);
 FUNC_6(50, 100);
}
