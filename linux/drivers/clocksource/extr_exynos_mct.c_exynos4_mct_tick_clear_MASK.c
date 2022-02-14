
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mct_clock_event_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct mct_clock_event_device *VAR_2)
{

 if (FUNC_1(VAR_1 + VAR_2->base + VAR_0) & 1)
  FUNC_0(0x1, VAR_2->base + VAR_0);
}
