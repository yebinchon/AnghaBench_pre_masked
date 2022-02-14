
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aqmq_en {int queue_enable; scalar_t__ value; } ;
typedef int u64 ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nitrox_device*,int ,scalar_t__) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct nitrox_device *VAR_0, int VAR_1)
{
 union aqmq_en VAR_2;
 u64 VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2.value = 0;
 VAR_2.queue_enable = 1;
 FUNC_1(VAR_0, VAR_3, VAR_2.value);
 FUNC_2(50, 100);
}
