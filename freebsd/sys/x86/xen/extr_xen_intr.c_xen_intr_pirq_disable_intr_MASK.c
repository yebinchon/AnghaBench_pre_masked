
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {size_t xi_port; int xi_pirq; } ;
struct intsrc {int dummy; } ;
struct evtchn_close {size_t port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct evtchn_close*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,size_t,int ) ;
 int VAR_1 ;
 int ** VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct intsrc *VAR_3)
{
 struct xenisrc *VAR_4;
 struct evtchn_close VAR_5;
 int VAR_6;

 VAR_4 = (struct xenisrc *)VAR_3;

 FUNC_1(VAR_4->xi_port);

 VAR_5.port = VAR_4->xi_port;
 VAR_6 = FUNC_0(VAR_0, &VAR_5);
 if (VAR_6)
  FUNC_4("unable to close event channel %d IRQ#%d",
      VAR_4->xi_port, VAR_4->xi_pirq);

 FUNC_2(&VAR_1);
 VAR_2[VAR_4->xi_port] = ((void*)0);
 FUNC_3(&VAR_1);

 VAR_4->xi_port = 0;
}
