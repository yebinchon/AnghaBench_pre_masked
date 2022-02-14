
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ev_base; } ;
struct event_once {TYPE_1__ ev; int arg; int (* cb ) (int ,short,int ) ;} ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct event_once*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct event_once*) ;
 int VAR_0 ;
 int FUNC_5 (int ,short,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 struct event_once *VAR_5 = VAR_4;

 (*VAR_5->cb)(VAR_2, VAR_3, VAR_5->arg);
 FUNC_0(VAR_5->ev.ev_base, VAR_1);
 FUNC_2(VAR_5, VAR_0);
 FUNC_1(VAR_5->ev.ev_base, VAR_1);
 FUNC_3(&VAR_5->ev);
 FUNC_4(VAR_5);
}
