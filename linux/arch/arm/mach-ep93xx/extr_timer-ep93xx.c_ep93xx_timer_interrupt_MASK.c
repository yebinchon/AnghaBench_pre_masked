
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int (* event_handler ) (struct clock_event_device*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct clock_event_device *VAR_4 = VAR_3;


 FUNC_1(1, VAR_0);

 VAR_4->event_handler(VAR_4);

 return VAR_1;
}
