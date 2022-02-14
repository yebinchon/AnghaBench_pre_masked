
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long long) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (int ) ;
 unsigned long long VAR_6 ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_7)
{
 unsigned long long VAR_8 = VAR_1 / VAR_0;

 if (VAR_5 != VAR_3) {
  FUNC_3(VAR_4);
  FUNC_1(VAR_6 + VAR_8);
  FUNC_2(VAR_8);
 }

 if (VAR_5 != VAR_2)
  FUNC_0(VAR_8);

 return 0;
}
