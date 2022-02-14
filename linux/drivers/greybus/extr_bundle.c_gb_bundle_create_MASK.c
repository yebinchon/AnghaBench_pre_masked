
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int dma_mask; } ;
struct gb_interface {int bundles; TYPE_3__ dev; } ;
struct TYPE_5__ {int dma_mask; int groups; int * type; int * bus; TYPE_3__* parent; } ;
struct gb_bundle {int links; TYPE_1__ dev; int connections; scalar_t__ class; scalar_t__ id; struct gb_interface* intf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct gb_interface*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct gb_bundle* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct gb_bundle*) ;

struct gb_bundle *FUNC_9(struct gb_interface *VAR_5, u8 VAR_6,
       u8 VAR_7)
{
 struct gb_bundle *VAR_8;

 if (VAR_6 == VAR_0) {
  FUNC_1(&VAR_5->dev, "can't use bundle id %u\n", VAR_6);
  return ((void*)0);
 }






 if (FUNC_5(VAR_5, VAR_6)) {
  FUNC_1(&VAR_5->dev, "duplicate bundle id %u\n", VAR_6);
  return ((void*)0);
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->intf = VAR_5;
 VAR_8->id = VAR_6;
 VAR_8->class = VAR_7;
 FUNC_0(&VAR_8->connections);

 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->dev.bus = &VAR_4;
 VAR_8->dev.type = &VAR_3;
 VAR_8->dev.groups = VAR_2;
 VAR_8->dev.dma_mask = VAR_5->dev.dma_mask;
 FUNC_4(&VAR_8->dev);
 FUNC_3(&VAR_8->dev, "%s.%d", FUNC_2(&VAR_5->dev), VAR_6);

 FUNC_7(&VAR_8->links, &VAR_5->bundles);

 FUNC_8(VAR_8);

 return VAR_8;
}
