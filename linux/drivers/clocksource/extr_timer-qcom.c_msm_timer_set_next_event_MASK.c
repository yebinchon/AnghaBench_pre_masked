
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_7,
        struct clock_event_device *VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_5 + VAR_1);

 VAR_9 &= ~VAR_2;
 FUNC_2(VAR_9, VAR_5 + VAR_1);

 FUNC_2(VAR_9, VAR_5 + VAR_0);
 FUNC_2(VAR_7, VAR_5 + VAR_3);

 if (VAR_6)
  while (FUNC_1(VAR_6) & VAR_4)
   FUNC_0();

 FUNC_2(VAR_9 | VAR_2, VAR_5 + VAR_1);
 return 0;
}
