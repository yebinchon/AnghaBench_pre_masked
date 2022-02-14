
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct clock_event_device VAR_3 ;
 int FUNC_1 (struct clock_event_device*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct clock_event_device *VAR_6 = &VAR_3;

 FUNC_0(&VAR_2, VAR_1);

 VAR_6->event_handler(VAR_6);
 return VAR_0;
}
