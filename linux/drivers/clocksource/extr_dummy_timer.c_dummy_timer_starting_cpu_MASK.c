
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {char* name; int features; int rating; int cpumask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 struct clock_event_device* FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_4)
{
 struct clock_event_device *VAR_5 = FUNC_2(&VAR_3, VAR_4);

 VAR_5->name = "dummy_timer";
 VAR_5->features = VAR_2 |
     VAR_1 |
     VAR_0;
 VAR_5->rating = 100;
 VAR_5->cpumask = FUNC_1(VAR_4);

 FUNC_0(VAR_5);
 return 0;
}
