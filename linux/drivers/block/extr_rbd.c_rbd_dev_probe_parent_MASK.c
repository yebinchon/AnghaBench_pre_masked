
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int parent_ref; struct rbd_device* parent; int parent_spec; int rbd_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rbd_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct rbd_device*) ;
 int FUNC_5 (struct rbd_device*,int) ;
 int FUNC_6 (struct rbd_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct rbd_device *VAR_3, int VAR_4)
{
 struct rbd_device *VAR_5 = ((void*)0);
 int VAR_6;

 if (!VAR_3->parent_spec)
  return 0;

 if (++VAR_4 > VAR_2) {
  FUNC_3("parent chain is too long (%d)\n", VAR_4);
  VAR_6 = -VAR_0;
  goto out_err;
 }

 VAR_5 = FUNC_0(VAR_3->rbd_client, VAR_3->parent_spec);
 if (!VAR_5) {
  VAR_6 = -VAR_1;
  goto out_err;
 }





 FUNC_1(VAR_3->rbd_client);
 FUNC_7(VAR_3->parent_spec);

 VAR_6 = FUNC_5(VAR_5, VAR_4);
 if (VAR_6 < 0)
  goto out_err;

 VAR_3->parent = VAR_5;
 FUNC_2(&VAR_3->parent_ref, 1);
 return 0;

out_err:
 FUNC_6(VAR_3);
 FUNC_4(VAR_5);
 return VAR_6;
}
