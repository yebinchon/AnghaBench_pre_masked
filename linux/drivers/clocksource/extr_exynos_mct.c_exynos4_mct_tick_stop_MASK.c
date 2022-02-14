
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mct_clock_event_device {unsigned long base; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct mct_clock_event_device *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6 = VAR_0 | VAR_2;
 unsigned long VAR_7 = VAR_4->base + VAR_1;

 VAR_5 = FUNC_1(VAR_3 + VAR_7);
 if (VAR_5 & VAR_6) {
  VAR_5 &= ~VAR_6;
  FUNC_0(VAR_5, VAR_7);
 }
}
