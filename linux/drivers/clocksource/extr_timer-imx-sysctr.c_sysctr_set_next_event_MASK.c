
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_3,
     struct clock_event_device *VAR_4)
{
 u32 VAR_5, VAR_6;
 u64 VAR_7;

 FUNC_1(0);

 VAR_7 = FUNC_0();

 VAR_7 += VAR_3;

 VAR_5 = (VAR_7 >> 32) & 0x00fffff;
 VAR_6 = VAR_7 & 0xffffffff;

 FUNC_2(VAR_5, VAR_2 + VAR_0);
 FUNC_2(VAR_6, VAR_2 + VAR_1);

 FUNC_1(1);

 return 0;
}
