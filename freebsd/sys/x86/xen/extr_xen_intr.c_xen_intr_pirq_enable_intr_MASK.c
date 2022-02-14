
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenisrc {size_t xi_port; int xi_pirq; scalar_t__ xi_edgetrigger; } ;
struct physdev_irq_status_query {int flags; int irq; } ;
struct intsrc {int dummy; } ;
struct evtchn_bind_pirq {size_t port; int flags; int pirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct evtchn_bind_pirq*) ;
 int FUNC_1 (int ,struct physdev_irq_status_query*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct xenisrc** VAR_7 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct intsrc *VAR_8)
{
 struct xenisrc *VAR_9;
 struct evtchn_bind_pirq VAR_10;
 struct physdev_irq_status_query VAR_11;
 int VAR_12;

 VAR_9 = (struct xenisrc *)VAR_8;

 if (!VAR_6) {
  VAR_11.irq = VAR_9->xi_pirq;
  VAR_12 = FUNC_1(VAR_2,
      &VAR_11);
  if (VAR_12)
   FUNC_6("unable to get status of IRQ#%d", VAR_9->xi_pirq);

  if (VAR_11.flags & VAR_3) {




   FUNC_7(VAR_9->xi_pirq, VAR_5);
  }
 }

 VAR_10.pirq = VAR_9->xi_pirq;
 VAR_10.flags = VAR_9->xi_edgetrigger ? 0 : VAR_0;
 VAR_12 = FUNC_0(VAR_1, &VAR_10);
 if (VAR_12)
  FUNC_6("unable to bind IRQ#%d", VAR_9->xi_pirq);

 VAR_9->xi_port = VAR_10.port;

 FUNC_4(&VAR_4);
 FUNC_2((VAR_7[VAR_10.port] == ((void*)0)),
     ("trying to override an already setup event channel port"));
 VAR_7[VAR_10.port] = VAR_9;
 FUNC_5(&VAR_4);

 FUNC_3(VAR_9->xi_port);
}
