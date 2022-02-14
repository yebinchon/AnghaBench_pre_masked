
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int cpumask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clock_event_device*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 struct clock_event_device* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_4)
{
 struct clock_event_device *VAR_5 = FUNC_4(&VAR_1);

 VAR_5->cpumask = FUNC_1(FUNC_3());

 FUNC_0(VAR_5, VAR_2, 0, VAR_0);
 FUNC_2(VAR_3, 0);
 return 0;
}
