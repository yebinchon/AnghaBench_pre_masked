
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_handlers; } ;
struct xenisrc {size_t xi_port; scalar_t__ xi_close; int * xi_cookie; int xi_type; scalar_t__ xi_cpu; TYPE_1__ xi_intsrc; } ;
struct evtchn_close {size_t port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct evtchn_close*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__,size_t) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int VAR_2 ;
 int ** VAR_3 ;

__attribute__((used)) static int
FUNC_10(struct xenisrc *VAR_4)
{

 FUNC_7(&VAR_2);
 FUNC_1(VAR_4->xi_intsrc.is_handlers == 0,
     ("Release called, but xenisrc still in use"));
 FUNC_5(VAR_4->xi_port);
 FUNC_2(VAR_4->xi_port);


 FUNC_3(VAR_4->xi_cpu, VAR_4->xi_port);
 FUNC_4(0, VAR_4->xi_port);

 if (VAR_4->xi_close != 0 && FUNC_6(VAR_4->xi_port)) {
  struct evtchn_close VAR_5 = { .port = VAR_4->xi_port };
  if (FUNC_0(VAR_0, &VAR_5))
   FUNC_9("EVTCHNOP_close failed");
 }

 VAR_3[VAR_4->xi_port] = ((void*)0);
 VAR_4->xi_cpu = 0;
 VAR_4->xi_type = VAR_1;
 VAR_4->xi_port = 0;
 VAR_4->xi_cookie = ((void*)0);
 FUNC_8(&VAR_2);
 return (0);
}
