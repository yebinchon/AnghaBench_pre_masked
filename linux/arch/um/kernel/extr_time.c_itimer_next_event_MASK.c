
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_5,
        struct clock_event_device *VAR_6)
{
 VAR_5 += 1;

 if (VAR_3 != VAR_1) {
  FUNC_2(VAR_2);
  FUNC_1(VAR_4 + VAR_5);
 }

 if (VAR_3 != VAR_0)
  return FUNC_0(VAR_5);

 return 0;
}
