
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dma_mask; } ;
struct gb_interface {TYPE_3__ dev; } ;
struct TYPE_5__ {int dma_mask; int groups; int * type; int * bus; TYPE_3__* parent; } ;
struct gb_control {struct gb_connection* connection; TYPE_1__ dev; struct gb_interface* intf; } ;
struct gb_connection {int dummy; } ;


 int VAR_0 ;
 struct gb_control* FUNC_0 (struct gb_connection*) ;
 struct gb_control* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (struct gb_connection*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,char*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 struct gb_connection* FUNC_8 (struct gb_interface*) ;
 int FUNC_9 (struct gb_connection*,struct gb_control*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct gb_control*) ;
 struct gb_control* FUNC_11 (int,int ) ;

struct gb_control *FUNC_12(struct gb_interface *VAR_5)
{
 struct gb_connection *VAR_6;
 struct gb_control *VAR_7;

 VAR_7 = FUNC_11(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 VAR_7->intf = VAR_5;

 VAR_6 = FUNC_8(VAR_5);
 if (FUNC_2(VAR_6)) {
  FUNC_4(&VAR_5->dev,
   "failed to create control connection: %ld\n",
   FUNC_3(VAR_6));
  FUNC_10(VAR_7);
  return FUNC_0(VAR_6);
 }

 VAR_7->connection = VAR_6;

 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->dev.bus = &VAR_3;
 VAR_7->dev.type = &VAR_4;
 VAR_7->dev.groups = VAR_2;
 VAR_7->dev.dma_mask = VAR_5->dev.dma_mask;
 FUNC_7(&VAR_7->dev);
 FUNC_6(&VAR_7->dev, "%s.ctrl", FUNC_5(&VAR_5->dev));

 FUNC_9(VAR_7->connection, VAR_7);

 return VAR_7;
}
