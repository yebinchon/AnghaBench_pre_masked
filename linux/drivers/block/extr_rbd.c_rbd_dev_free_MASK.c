
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {scalar_t__ watch_state; scalar_t__ lock_state; struct rbd_device* opts; int spec; int rbd_client; struct rbd_device* config_info; int header_oloc; int header_oid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rbd_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rbd_device *VAR_2)
{
 FUNC_0(VAR_2->watch_state != VAR_1);
 FUNC_0(VAR_2->lock_state != VAR_0);

 FUNC_1(&VAR_2->header_oid);
 FUNC_2(&VAR_2->header_oloc);
 FUNC_3(VAR_2->config_info);

 FUNC_4(VAR_2->rbd_client);
 FUNC_5(VAR_2->spec);
 FUNC_3(VAR_2->opts);
 FUNC_3(VAR_2);
}
