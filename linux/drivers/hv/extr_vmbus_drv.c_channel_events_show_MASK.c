
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int sig_events; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct vmbus_channel *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%llu\n", VAR_0->sig_events);
}
