
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_4)
{
 u32 VAR_5;

 FUNC_2(&VAR_3);

 VAR_5 = FUNC_0(VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_0;
 FUNC_1(VAR_1, VAR_5);

 FUNC_3(&VAR_3);
 return 0;
}
