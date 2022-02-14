
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_intr_handle_t ;
struct xenisrc {scalar_t__ xi_type; int xi_port; } ;
struct evtchn_send {int port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct evtchn_send*) ;
 int FUNC_1 (int,char*) ;
 struct xenisrc* FUNC_2 (int ) ;

void
FUNC_3(xen_intr_handle_t VAR_3)
{
 struct xenisrc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4->xi_type == VAR_2 ||
   VAR_4->xi_type == VAR_1,
   ("evtchn_signal on something other than a local port"));
  struct evtchn_send VAR_5 = { .port = VAR_4->xi_port };
  (void)FUNC_0(VAR_0, &VAR_5);
 }
}
