
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_overlapped {int cb; } ;
typedef int iocp_callback ;


 int FUNC_0 (struct event_overlapped*,int ,int) ;

void
FUNC_1(struct event_overlapped *VAR_0, iocp_callback VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(struct event_overlapped));
 VAR_0->cb = VAR_1;
}
