
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct clock_event_device {int dummy; } ;
struct TYPE_2__ {unsigned long (* read ) (int *) ;} ;


 int FUNC_0 (int ,unsigned long) ;
 TYPE_1__* VAR_0 ;
 unsigned long FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1,
    struct clock_event_device *VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_0->read(((void*)0));
 VAR_3 += VAR_1;
 FUNC_0(0, VAR_3);
 return 0;
}
