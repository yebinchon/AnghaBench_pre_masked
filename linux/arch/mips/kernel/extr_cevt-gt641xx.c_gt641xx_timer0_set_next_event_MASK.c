
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clock_event_device {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ,unsigned long) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_5,
      struct clock_event_device *VAR_6)
{
 u32 VAR_7;

 FUNC_2(&VAR_4);

 VAR_7 = FUNC_0(VAR_2);
 VAR_7 &= ~(VAR_1 | VAR_3);
 VAR_7 |= VAR_1;

 FUNC_1(VAR_0, VAR_5);
 FUNC_1(VAR_2, VAR_7);

 FUNC_3(&VAR_4);

 return 0;
}
