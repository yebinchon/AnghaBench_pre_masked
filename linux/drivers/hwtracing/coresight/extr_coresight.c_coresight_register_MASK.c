
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fwnode; int * bus; int release; int parent; int groups; int * type; } ;
struct TYPE_7__ {int link_subtype; } ;
struct coresight_device {scalar_t__ type; int orphan; TYPE_2__ dev; int ops; TYPE_1__ subtype; TYPE_6__* pdata; int * refcnt; } ;
struct coresight_desc {scalar_t__ type; TYPE_6__* pdata; int name; int dev; int groups; int ops; TYPE_1__ subtype; } ;
typedef int atomic_t ;
struct TYPE_9__ {int nr_inport; int nr_outport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct coresight_device* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct coresight_device*) ;
 int FUNC_2 (struct coresight_device*) ;
 int VAR_10 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct coresight_device*) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int,int,int ) ;
 int FUNC_11 (struct coresight_device*) ;
 struct coresight_device* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*) ;

struct coresight_device *FUNC_16(struct coresight_desc *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14 = 1;
 atomic_t *VAR_15 = ((void*)0);
 struct coresight_device *VAR_16;

 VAR_16 = FUNC_12(sizeof(*VAR_16), VAR_6);
 if (!VAR_16) {
  VAR_12 = -VAR_5;
  goto err_out;
 }

 if (VAR_11->type == VAR_2 ||
     VAR_11->type == VAR_3) {
  VAR_13 = VAR_11->subtype.link_subtype;

  if (VAR_13 == VAR_0)
   VAR_14 = VAR_11->pdata->nr_inport;
  else if (VAR_13 == VAR_1)
   VAR_14 = VAR_11->pdata->nr_outport;
 }

 VAR_15 = FUNC_10(VAR_14, sizeof(*VAR_15), VAR_6);
 if (!VAR_15) {
  VAR_12 = -VAR_5;
  goto err_free_csdev;
 }

 VAR_16->refcnt = VAR_15;

 VAR_16->pdata = VAR_11->pdata;

 VAR_16->type = VAR_11->type;
 VAR_16->subtype = VAR_11->subtype;
 VAR_16->ops = VAR_11->ops;
 VAR_16->orphan = 0;

 VAR_16->dev.type = &VAR_8[VAR_11->type];
 VAR_16->dev.groups = VAR_11->groups;
 VAR_16->dev.parent = VAR_11->dev;
 VAR_16->dev.release = VAR_9;
 VAR_16->dev.bus = &VAR_7;




 VAR_16->dev.fwnode = FUNC_9(FUNC_4(VAR_11->dev));
 FUNC_5(&VAR_16->dev, "%s", VAR_11->name);

 VAR_12 = FUNC_6(&VAR_16->dev);
 if (VAR_12) {
  FUNC_15(&VAR_16->dev);




  goto err_out;
 }

 if (VAR_16->type == VAR_4 ||
     VAR_16->type == VAR_3) {
  VAR_12 = FUNC_8(VAR_16);

  if (VAR_12) {
   FUNC_7(&VAR_16->dev);






   goto err_out;
  }
 }

 FUNC_13(&VAR_10);

 FUNC_1(VAR_16);
 FUNC_2(VAR_16);

 FUNC_14(&VAR_10);

 return VAR_16;

err_free_csdev:
 FUNC_11(VAR_16);
err_out:

 FUNC_3(VAR_11->pdata);
 return FUNC_0(VAR_12);
}
