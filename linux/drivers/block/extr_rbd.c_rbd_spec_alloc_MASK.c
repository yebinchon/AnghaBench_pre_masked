
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_spec {int kref; int snap_id; int pool_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct rbd_spec* FUNC_1 (int,int ) ;

__attribute__((used)) static struct rbd_spec *FUNC_2(void)
{
 struct rbd_spec *VAR_3;

 VAR_3 = FUNC_1(sizeof (*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->pool_id = VAR_0;
 VAR_3->snap_id = VAR_1;
 FUNC_0(&VAR_3->kref);

 return VAR_3;
}
