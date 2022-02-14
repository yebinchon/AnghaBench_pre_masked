
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mct_clock_event_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct mct_clock_event_device*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 unsigned long FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_7,
       struct mct_clock_event_device *VAR_8)
{
 unsigned long VAR_9;

 FUNC_0(VAR_8);

 VAR_9 = (1 << 31) | VAR_7;


 FUNC_1(VAR_9, VAR_8->base + VAR_0);


 FUNC_1(0x1, VAR_8->base + VAR_1);

 VAR_9 = FUNC_2(VAR_6 + VAR_8->base + VAR_4);
 VAR_9 |= VAR_3 | VAR_5 |
        VAR_2;
 FUNC_1(VAR_9, VAR_8->base + VAR_4);
}
