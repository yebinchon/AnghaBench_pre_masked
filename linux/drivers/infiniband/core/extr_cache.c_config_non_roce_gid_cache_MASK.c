
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_gid_table {int lock; } ;
struct ib_gid_attr {int index; int gid; int port_num; struct ib_device* device; } ;
struct TYPE_2__ {int (* query_gid ) (struct ib_device*,int ,int,int *) ;} ;
struct ib_device {int dev; TYPE_1__ ops; } ;


 int FUNC_0 (struct ib_gid_table*,struct ib_gid_attr*) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ib_gid_table* FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (struct ib_device*,int ,int,int *) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_0,
         u8 VAR_1, int VAR_2)
{
 struct ib_gid_attr VAR_3 = {};
 struct ib_gid_table *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 VAR_3.device = VAR_0;
 VAR_3.port_num = VAR_1;
 VAR_4 = FUNC_4(VAR_0, VAR_1);

 FUNC_2(&VAR_4->lock);
 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  if (!VAR_0->ops.query_gid)
   continue;
  VAR_5 = VAR_0->ops.query_gid(VAR_0, VAR_1, VAR_6, &VAR_3.gid);
  if (VAR_5) {
   FUNC_1(&VAR_0->dev,
     "query_gid failed (%d) for index %d\n", VAR_5,
     VAR_6);
   goto err;
  }
  VAR_3.index = VAR_6;
  FUNC_0(VAR_4, &VAR_3);
 }
err:
 FUNC_3(&VAR_4->lock);
 return VAR_5;
}
