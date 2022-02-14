
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clock_event_device *VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_3 + VAR_1);
 int VAR_6 = FUNC_0() / 8;
 int VAR_7;

 VAR_7 = VAR_6 * 20 / (3 * VAR_0) * 0x25000;
 FUNC_2(VAR_7, VAR_3 + VAR_2);
 VAR_5 |= (1 << 0) | (1 << 2) | (1 << 9);
 FUNC_2(VAR_5, VAR_3 + VAR_1);
 return 0;
}
