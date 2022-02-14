
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int cpumask; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*,int ,int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 struct clock_event_device* FUNC_3 (int *,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_4)
{
 struct clock_event_device *VAR_5 = FUNC_3(&VAR_1, VAR_4);

 VAR_5->cpumask = FUNC_1(VAR_4);
 FUNC_0(VAR_5, VAR_2, 100, 0x7fffffff);

 FUNC_2(VAR_3, VAR_0);
 return 0;
}
