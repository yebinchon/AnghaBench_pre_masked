
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pit_data {int base; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 struct pit_data* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct clock_event_device *VAR_1)
{
 struct pit_data *VAR_2 = FUNC_0(VAR_1);


 FUNC_1(VAR_2->base, VAR_0, 0);
}
