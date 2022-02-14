
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct clock_event_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* read ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_8,
        struct clock_event_device *VAR_9)
{
 int VAR_10 = FUNC_1(10);
 u64 VAR_11 = VAR_6.read(&VAR_6) + VAR_8;
 while ((FUNC_2(VAR_7 + VAR_2) & VAR_5)
      && --VAR_10)
  FUNC_0();
 FUNC_5((unsigned long)VAR_11, VAR_7 + VAR_4);

 if ((signed)(VAR_11 - VAR_6.read(&VAR_6)) <= VAR_1)
  return -VAR_0;

 FUNC_5(1, VAR_7 + VAR_3);

 return 0;
}
