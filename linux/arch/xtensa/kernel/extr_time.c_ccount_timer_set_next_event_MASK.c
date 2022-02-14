
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_1,
  struct clock_event_device *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 int VAR_5 = 0;

 FUNC_2(VAR_3);
 VAR_4 = FUNC_0() + VAR_1;
 FUNC_3(VAR_4);
 if (VAR_4 - FUNC_0() > VAR_1)
  VAR_5 = -VAR_0;
 FUNC_1(VAR_3);

 return VAR_5;
}
