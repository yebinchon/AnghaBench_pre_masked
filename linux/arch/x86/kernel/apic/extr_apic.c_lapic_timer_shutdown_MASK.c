
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct clock_event_device *VAR_5)
{
 unsigned int VAR_6;


 if (VAR_5->features & VAR_3)
  return 0;

 VAR_6 = FUNC_0(VAR_0);
 VAR_6 |= (VAR_1 | VAR_4);
 FUNC_1(VAR_0, VAR_6);
 FUNC_1(VAR_2, 0);
 return 0;
}
