
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct device {TYPE_1__* driver; } ;
struct TYPE_16__ {struct device* parent; } ;
struct TYPE_11__ {TYPE_7__ dev; } ;
struct cec_adapter {int capabilities; int name; struct cec_adapter* error_inj_file; struct cec_adapter* cec_dir; TYPE_3__* ops; struct cec_adapter* status_file; TYPE_10__ devnode; TYPE_4__* rc; int owner; } ;
struct TYPE_13__ {struct device* parent; } ;
struct TYPE_15__ {TYPE_2__ dev; } ;
struct TYPE_14__ {int error_inj_parse_line; int error_inj_show; } ;
struct TYPE_12__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cec_adapter*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_10__*,int ) ;
 int VAR_3 ;
 struct cec_adapter* FUNC_3 (TYPE_7__*,char*,struct cec_adapter*,int ) ;
 struct cec_adapter* FUNC_4 (int ,int ) ;
 struct cec_adapter* FUNC_5 (char*,int,struct cec_adapter*,struct cec_adapter*,int *) ;
 int FUNC_6 (struct cec_adapter*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,struct cec_adapter*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int VAR_4 ;

int FUNC_14(struct cec_adapter *VAR_5,
    struct device *VAR_6)
{
 int VAR_7;

 if (FUNC_0(VAR_5))
  return 0;

 if (FUNC_1(!VAR_6))
  return -VAR_1;

 VAR_5->owner = VAR_6->driver->owner;
 VAR_5->devnode.dev.parent = VAR_6;
 VAR_7 = FUNC_2(&VAR_5->devnode, VAR_5->owner);
 if (VAR_7) {





  return VAR_7;
 }

 FUNC_8(&VAR_5->devnode.dev, VAR_5);
 return 0;
}
