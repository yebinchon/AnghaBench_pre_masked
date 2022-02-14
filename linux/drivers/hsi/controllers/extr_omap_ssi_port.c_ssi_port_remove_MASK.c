
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct omap_ssi_port {size_t port_id; int errqueue_work; } ;
struct omap_ssi_controller {int ** port; } ;
struct TYPE_2__ {int parent; } ;
struct hsi_port {void* release; void* stop_tx; void* start_tx; void* flush; void* setup; int async; TYPE_1__ device; } ;
struct hsi_controller {int dummy; } ;


 int FUNC_0 (int *) ;
 struct omap_ssi_controller* FUNC_1 (struct hsi_controller*) ;
 void* VAR_0 ;
 int VAR_1 ;
 struct omap_ssi_port* FUNC_2 (struct hsi_port*) ;
 int FUNC_3 (struct hsi_port*) ;
 struct hsi_port* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hsi_port*) ;
 struct hsi_controller* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct hsi_port *VAR_3 = FUNC_4(VAR_2);
 struct omap_ssi_port *VAR_4 = FUNC_2(VAR_3);
 struct hsi_controller *VAR_5 = FUNC_9(VAR_3->device.parent);
 struct omap_ssi_controller *VAR_6 = FUNC_1(VAR_5);





 FUNC_0(&VAR_4->errqueue_work);

 FUNC_3(VAR_3);

 VAR_3->async = VAR_1;
 VAR_3->setup = VAR_0;
 VAR_3->flush = VAR_0;
 VAR_3->start_tx = VAR_0;
 VAR_3->stop_tx = VAR_0;
 VAR_3->release = VAR_0;

 VAR_6->port[VAR_4->port_id] = ((void*)0);
 FUNC_5(VAR_2, ((void*)0));

 FUNC_7(&VAR_2->dev);
 FUNC_6(&VAR_2->dev);

 return 0;
}
