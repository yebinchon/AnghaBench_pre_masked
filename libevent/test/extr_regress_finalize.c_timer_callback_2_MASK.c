
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_and_count {int count; int ev2; int ev; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct event_and_count *VAR_4 = VAR_3;
 FUNC_0(0, VAR_4->ev, VAR_0);
 FUNC_0(0, VAR_4->ev2, VAR_0);
 ++ VAR_4->count;
 (void)VAR_1;
 (void)VAR_2;
}
