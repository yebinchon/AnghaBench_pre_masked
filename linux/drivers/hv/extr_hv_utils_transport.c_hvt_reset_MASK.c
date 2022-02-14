
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvutil_transport {int (* on_reset ) () ;scalar_t__ outmsg_len; int * outmsg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct hvutil_transport *VAR_0)
{
 FUNC_0(VAR_0->outmsg);
 VAR_0->outmsg = ((void*)0);
 VAR_0->outmsg_len = 0;
 if (VAR_0->on_reset)
  VAR_0->on_reset();
}
