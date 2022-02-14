
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_1(struct clock_event_device *VAR_2, bool VAR_3)
{

 if (VAR_2->features & VAR_0)
  return 0;

 FUNC_0(VAR_1, VAR_3, 1);
 return 0;
}
