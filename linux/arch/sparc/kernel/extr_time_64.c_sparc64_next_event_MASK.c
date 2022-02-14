
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* add_compare ) (unsigned long) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2,
         struct clock_event_device *VAR_3)
{
 return VAR_1.add_compare(VAR_2) ? -VAR_0 : 0;
}
