
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int guid; } ;
struct vmbus_dynid {int node; TYPE_1__ id; } ;
struct TYPE_4__ {int lock; int list; } ;
struct hv_driver {int driver; TYPE_2__ dynids; } ;
typedef int guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct vmbus_dynid* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hv_driver *VAR_2, guid_t *VAR_3)
{
 struct vmbus_dynid *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->id.guid = *VAR_3;

 FUNC_3(&VAR_2->dynids.lock);
 FUNC_2(&VAR_4->node, &VAR_2->dynids.list);
 FUNC_4(&VAR_2->dynids.lock);

 return FUNC_0(&VAR_2->driver);
}
