
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int * monitor_pages; } ;


 int FUNC_0 (struct vmbus_channel*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static ssize_t FUNC_2(struct vmbus_channel *VAR_1,
        char *VAR_2)
{
 return FUNC_1(VAR_2, "%d\n",
         FUNC_0(VAR_1,
           VAR_0.monitor_pages[1]));
}
