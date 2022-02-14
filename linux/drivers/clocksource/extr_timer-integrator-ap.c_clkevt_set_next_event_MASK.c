
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_4, struct clock_event_device *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_3 + VAR_0);

 FUNC_1(VAR_6 & ~VAR_1, VAR_3 + VAR_0);
 FUNC_1(VAR_4, VAR_3 + VAR_2);
 FUNC_1(VAR_6 | VAR_1, VAR_3 + VAR_0);

 return 0;
}
