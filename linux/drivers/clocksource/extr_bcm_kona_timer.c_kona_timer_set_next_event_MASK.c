
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct clock_event_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ tmr_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int*,int*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_4,
      struct clock_event_device *VAR_5)
{
 uint32_t VAR_6, VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3.tmr_regs, &VAR_7, &VAR_6);
 if (VAR_9)
  return VAR_9;


 FUNC_2(VAR_6 + VAR_4, VAR_3.tmr_regs + VAR_0);


 VAR_8 = FUNC_1(VAR_3.tmr_regs + VAR_2);
 VAR_8 |= (1 << VAR_1);
 FUNC_2(VAR_8, VAR_3.tmr_regs + VAR_2);

 return 0;
}
