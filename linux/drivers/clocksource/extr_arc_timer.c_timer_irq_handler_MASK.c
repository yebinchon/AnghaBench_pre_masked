
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct clock_event_device*) ;
 struct clock_event_device* FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{




 struct clock_event_device *VAR_6 = FUNC_2(&VAR_3);
 int VAR_7 = FUNC_0(VAR_6);
 FUNC_3(VAR_0, VAR_7 | VAR_2);

 VAR_6->event_handler(VAR_6);

 return VAR_1;
}
