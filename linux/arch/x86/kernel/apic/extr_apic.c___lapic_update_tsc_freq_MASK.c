
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct clock_event_device* FUNC_2 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
 struct clock_event_device *VAR_5 = FUNC_2(&VAR_2);

 if (!FUNC_1(VAR_1))
  return;

 FUNC_0(VAR_5, VAR_3 * (1000 / VAR_0));
}
