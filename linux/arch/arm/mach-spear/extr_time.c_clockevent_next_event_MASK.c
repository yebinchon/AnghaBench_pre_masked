
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_4,
     struct clock_event_device *VAR_5)
{
 u16 VAR_6 = FUNC_2(VAR_3 + FUNC_0(VAR_0));

 if (VAR_6 & VAR_1)
  FUNC_3(VAR_6 & ~VAR_1, VAR_3 + FUNC_0(VAR_0));

 FUNC_3(VAR_4, VAR_3 + FUNC_1(VAR_0));

 VAR_6 |= VAR_1 | VAR_2;
 FUNC_3(VAR_6, VAR_3 + FUNC_0(VAR_0));

 return 0;
}
