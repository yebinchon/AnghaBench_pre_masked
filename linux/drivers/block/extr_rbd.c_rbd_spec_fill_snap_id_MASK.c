
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rbd_spec {scalar_t__ pool_id; int snap_name; scalar_t__ snap_id; scalar_t__ image_name; scalar_t__ image_id; scalar_t__ pool_name; } ;
struct rbd_device {struct rbd_spec* spec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rbd_device*,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct rbd_device *VAR_4)
{
 struct rbd_spec *VAR_5 = VAR_4->spec;

 FUNC_0(VAR_5->pool_id != VAR_0 && VAR_5->pool_name);
 FUNC_0(VAR_5->image_id && VAR_5->image_name);
 FUNC_0(VAR_5->snap_name);

 if (FUNC_2(VAR_5->snap_name, VAR_3)) {
  u64 VAR_6;

  VAR_6 = FUNC_1(VAR_4, VAR_5->snap_name);
  if (VAR_6 == VAR_1)
   return -VAR_2;

  VAR_5->snap_id = VAR_6;
 } else {
  VAR_5->snap_id = VAR_1;
 }

 return 0;
}
